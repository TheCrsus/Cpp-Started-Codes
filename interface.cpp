#include <iostream>
#include <memory>
#include <utility>
using namespace std;

template <typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

class IShape {
public:
    virtual void draw() const = 0;
    virtual double area() const = 0;
    virtual ~IShape() {}
};

class Circle : public IShape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public IShape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    void draw() const override {
        cout << "Drawing a Rectangle with width " << width << " and height " << height << endl;
    }

    double area() const override {
        return width * height;
    }
};

void displayMenu() {
    cout << "\nShape Interface Menu:\n";
    cout << "1. Create Circle\n";
    cout << "2. Create Rectangle\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    unique_ptr<IShape> shape;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            shape = make_unique<Circle>(radius);
            break;
        }
        case 2: {
            double width, height;
            cout << "Enter the width and height of the rectangle: ";
            cin >> width >> height;
            shape = make_unique<Rectangle>(width, height);
            break;
        }
        case 3:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        if (choice == 1 || choice == 2) {
            shape->draw();
            cout << "Area: " << shape->area() << endl;
        }

    } while (choice != 3);

    return 0;
}

