#include<iostream>
#include<vector>
using namespace std;

int main(){	
	
vector <int> storage;
vector <int> v;
int x,z=0,toplam = 0;
	for(;;){
		cout << "Sayi Giriniz. : ";
		cin >> x ;
		z++;
		if(x==-1){
			break ;
	}
		else
			storage.push_back(x);
	}
		for(int i = 0 ; i!=(z-1) ; i++){
			cout << storage[i] << endl;
			}
		
			for(int i = 0 ; i!=(z-1) ; i++){
				toplam += storage[i];
				}
				cout << "toplam = " << toplam << endl ;
}

