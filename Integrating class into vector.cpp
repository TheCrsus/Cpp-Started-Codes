#include<iostream>
#include<vector>
using namespace std;


class MyClass{
	public :  
	int value ;
	
	void display(){
		cout << value << endl ;
	}
};

int main(){
	MyClass m1,m2,m3 ;	   
	vector <MyClass> v ;
	
	v.push_back(m1);
	v.push_back(m2);
	
	v[0].value=10;
	v[1].value=20;
	
	v.push_back(m3);
	
	v[0].value=35;
	v[1].value=10;
	v[2].value=20;
	
	v.erase(v.begin()+2);
	
	for(int i = 0 ; i <2 ; i++){
		v[i].display() ;
	}
	cout << endl ;
	v.erase(v.begin());
		for(int i = 0 ; i <1 ; i++){
		v[i].display();
	}	 
}
