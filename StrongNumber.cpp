#include <iostream>
#include <cmath>
using namespace std;


int fak(int x) {
    int t = 1;
    for (int i = 1; i <= x; i++) {
        t *= i;
    }
    return t;
}


bool isStrongNumber(int x) {
    int result = 0;  
    int temp = x;   

    while (x > 0) {
        int digit = x % 10;      
        result += fak(digit);    
        x /= 10;                
    }
    return temp == result;
}

int main() {
    int x;
	for(int x = 0 ; x < 500 ; x++){
    if (isStrongNumber(x)) {
        cout << x << " is a Strong Number." << endl;
    } else {
        cout << x << " is NOT a Strong Number." << endl;
    }
}
    return 0;
}

