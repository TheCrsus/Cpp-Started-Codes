#include<iostream>
#include<vector>
#include"IntCell.h"

using namespace std ;

Intcell.h
#ifndef _IntCell_H_
#define _IntCell_H_
class IntCell{
	public :
	IntCell();
	IntCell(int initialValue );
	int read();
	void write (int x );
	
	
	private :
	#endif 
	#include "IntCell.h"
	
	int storatedValue	;
	
	IntCell :: IntCell(){
		storatedValue= 67;
		}
	IntCell :: IntCell (int initialValue ){
		storatedValue = initialValue ; 
	}
	int IntCell :: read (){
		return storatedValue;
	}
	void  IntCell :: write ( int x ){
		storatedValue x ;
	}	
};

int main(){
	IntCell m1; 
IntCell m2 ( 12 ); 
IntCell *m3; 
m1.write(44); 
m2.write(m2.read() +1); 
cout<<m1.read() <<endl;  
cout<<m1.read() <<  "    " << m2.read() << endl;  
m3 = new IntCell; 
cout << "m3 = " << m3->read() << endl; 
return 0; 	
}
