#include<iostream>
#include<stack>
using namespace std ; 

int main(){
	
stack <int> s;
int toplam = 0 ;

s.push(2);
s.push(5);
s.push(44);
s.push(16);
s.push(21);
s.push(4);
s.push(57);

for(int i = 0 ; i < s.size() ; i++){
	if(s.top() < 10){
		s.pop();
		break ;
	}
	else
	s.pop();
}
	for(int i = 0 ; i < s.size() ; i++){
			if(s.top() < 10 ){
				s.pop();
				break ;
			}
			else{
				toplam = toplam + s.top();
				s.pop();
			}
		}
	cout << toplam ;
}


