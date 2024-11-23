#include<iostream>
#include<stack>

using namespace std ;     

int main(){
int x ;	
string input ;
stack <char> bc;

cin >> input;

for(int i = 0 ; i < input.size() ; i++){
	if(input[i] == '+' || input[i]== '*'){
		bc.push(input[i]);
	}
	else{
		cout << input[i];
	}
}
while(!bc.empty()){
	cout << bc.top();
	bc.pop();
}
}
