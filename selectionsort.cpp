#include<iostream>

using namespace std ;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[],int arrsize){
	cout << "Organized Array = " ;
	for(int i = 0;i < arrsize ;i++){
		cout << arr[i] << " " ; 
	}
}

int main(){
	
	int arr[]={7,8,5,2,4,6,3};
	int arrsize = sizeof(arr)/sizeof(arr[0]);

	selectionSort(arr,arrsize);
	printArray(arr,arrsize);
	
}
