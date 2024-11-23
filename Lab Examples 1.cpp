#include<iostream>
#include<stack>
using namespace std;

int main(){
	
stack <int> birinci;
stack <int> ikinci;
	
birinci.push(15);
birinci.push(20);
birinci.push(30);
birinci.push(40);
	
while(!birinci.empty()){
	ikinci.push(birinci.top());
	birinci.pop();
}	
	while(!ikinci.empty()){
		cout << ikinci.top() << " ";
		ikinci.pop();
	}
	
	
	
}
