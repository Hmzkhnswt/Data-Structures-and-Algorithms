#include<iostream>
using namespace std;

int binarySearch(int a[10], int n, int left, int right){
	
	while(left<=right){
		int mid = left + (right-left)/2;
		if(a[mid]==n){
			return mid;
		}
		else if(a[mid]<n){
			return mid+1;
		}
		else{
			right = mid-1;
		}
	}
	return -1;
}

int main(){
	
	int arr[10];
	cout<<"Enter an Array:    "   ;
	for(int i=1; i<=10; i++){
		cin>>arr[i];
	}
	int num;
	cout<"Enter a Number to search : ";
	cin>>num;
	int output;
	output = binarySearch(arr, num, 1, 10);
	if(output == -1){
		cout<<"No Match Found!" <<endl;
	}
	else{
		cout<<"Match Found!" <<output<<endl;
	}
	
	
	return 0;
}
