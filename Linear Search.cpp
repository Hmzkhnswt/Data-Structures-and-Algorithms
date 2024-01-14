//#include<iostream>
//using namespace std;
//
//void linearSearch(int a[], int n){
//	for(int i=1; i<=5; i++){
//		if(a[i]==n){
//			cout<<"The Element is found at position"<<i<<endl;
//		}
//		else 
//			cout<<"Element Not Found! "<<endl;
//	}
//}
//
//int main(){
//	int arr[5] = {45,23,67,54,87};
//	int num;
//	cout<<"Enter Number to Search: ";
//	cin>>num;
//	
//	linearSearch(arr, num);
//	return 0;
//}

#include<iostream>
using namespace std;

void linear_search(int arr[], int n){
	for(int i=0; i<5; i++){
		if(arr[i]==n){
			cout<<"The number we find at position :	"<<i;
		}
	}
}

int main(){
	
	int num;
	int arr[5] = {3,4,5,8,9};
	cout<<"Enter a Number to Search:	";
	cin>>num;
	
	linear_search(arr, num);
	return 0;
}
