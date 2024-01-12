#include<iostream>
using namespace std;
int main(){
	int n;
	int sum;
	cout<<"Enter the Size of the Array:   ";
	cin>>n;
	int arr[n]; 
	cout<<"Enter "<<n<<"Elements in the array:  ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++){
		sum = sum+arr[i];
		
	}
	cout<<sum;
	return 0;
}
