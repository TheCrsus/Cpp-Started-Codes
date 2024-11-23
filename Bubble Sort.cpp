#include<iostream>

using namespace std ;

void bubbleSort(int arr[], int arrsize) {
    int temp;
    for(int i = 0; i < arrsize - 1; i++) {
        for(int j = 0; j < arrsize - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Organized Array = ";
    for(int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }
}
void printArray(int arr[],int arrsize){
	  cout << "Original Array = ";
    for(int i = 0; i < arrsize; i++) {
        cout << arr[i] << " ";
    }
    cout << " Array Size = " << arrsize ; 
}
	


int main(){
int arr[]={7, 8, 5, 2, 4, 6, 3};
int arrsize = sizeof(arr)/sizeof(arr[0]);
int organizedArr[arrsize];
printArray(arr,arrsize);	
cout << endl ;
bubbleSort(arr,arrsize);
	
	
}
