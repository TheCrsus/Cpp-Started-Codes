#include<iostream>
#include<vector>

using namespace std;

class stack{
	public :
	
	void push(int x){
		value.push_back(x);
	}
	void pop(){
		value.pop_back();
	}
	int top(){
		return value.back();
	}
	
	private :
	vector <int> value ;
};

int main(){
	stack std;
	std.push(217);
	std.push(147);
	std.pop();
	cout << std.top() << endl ;
}
