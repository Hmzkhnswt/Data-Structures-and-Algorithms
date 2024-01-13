//#include<iostream>
//using namespace std;
//
//int binary_search(int a[], int n, int left, int right){
//	while(left<=right){
//		int mid = left+(right-left)/2;
//		if(n==mid ){
//			return mid;
//}
//		if(n<mid){
//			left =  mid+1;
//		}
//		else{
//			right =   mid-1;
//		}
//		
//	}
//	return -1;
//}
//
//int main(){
//	
//	int array[10];
//	cout<<"Enter Elements in The array:	";
//	for(int i=0; i<10; i++){
//		cin>>array[i];
//	}
//	int num;
//	cout<<"Enter a Number to find in the list: ";
//	cin>>num;
//	
//	int key;
//	key = binary_search(array, num,1,10);
//	if (key == -1){
//		cout<<"Element is not in the list!" ;
//	}
//	else{
//		cout<<"Element found!"<<key;
//	}
//	
//	
//	return 0;
//}


#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int low, int high){
	while(low<=high){
		int mid;
		mid = low+(high - low)/2;
		
	if(arr[n] == mid){
		return mid;
	}
	if(arr[n] > mid){
		low = mid+1;
	}
	else{
		high = mid-1;
	}
	
	}
	return -1;
}

int main(){
	
	int array[10];
	cout<<"Enter Elements in the Array in Sorted form:  ";
	for(int i=0; i<10; i++){
		cin>>array[i];
	}
	int num;
	cout<<"Enter a number to search:  ";
	cin>>num;
	
	
	int key = binarySearch(array, num, 0 , 9);
	if(key == -1){
		cout<<"Element is absent in the array!  ";
	}
	else{
		cout<<"Element found at "<<key;
	}
	
	return 0;
}
