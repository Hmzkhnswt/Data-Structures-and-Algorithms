#include<iostream>
using namespace std;
int main(){
	
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	for (int i=1; i<=9; i++){
		cout<<arr[i];
	}
	cout<<"After reversing the Array:	";
	for(int j=9; j>=1; j--){
		cout<<arr[j];
	}
	return 0;
}
