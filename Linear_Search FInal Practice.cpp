#include<iostream>
using namespace std;

void linear_search(int array[], int n){
	for(int i=0; i<10; i++){
		if(array[i]==n){
			cout<<"The Number Found on : "<<i;
		}

	}
	
}

int main(){
	
	int arr[10];
	cout<<"Enter Elements In the array: ";
	for(int i=0; i<10; i++){
		 cin>>arr[i];
	}
	
	int num;
	cout<<"Enter a Number to Find: ";
	cin>>num;
	
	linear_search(arr,num );
	
	return 0;
}
