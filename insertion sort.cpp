#include<iostream>
using namespace std;


void insertionSort(int arr[],int arrsize){

int temp ;	
for(int i = 0;i < arrsize ;i++){
	for(int j = 0;j < arrsize ; j++){
		if(j >= 0 && arr[j]>arr[i]){
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;	
		}}}
}
 
void printArray(int arr[], int arrsize)
{
cout << "Organized Array = " ;
for(int i = 0;i < arrsize ;i++){
	cout << arr[i] << " " ; 
	}		
}


int main(){
	
	int arr[]={7, 8, 5, 2,4, 6, 3};
	int arrsize = sizeof(arr)/sizeof(arr[0]);

	insertionSort(arr,arrsize);
	printArray(arr,arrsize);		
}
