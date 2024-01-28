#include<iostream>
using namespace std;

int bubble_sort(int a[]){
	for(int i=0; i<5; i++){
		for(int j=0; j<(5-i-1); j++){
			if(a[j]<a[j+1]){
				int temp;
				temp = a[j];
				a[j ] = a[j+1];
				a[j+1 ] = temp;
			}
		}
	}
}

int main(){
	
	int array[5];
	cout<<"Enter Numbers in Array: 	";
	for(int i = 0; i<5; i++){
		cin>>array[i];
	}
	
	cout<<"Before Sorting the array is like this : ";
	for(int i=0; i<5; i++){
		cout<<array[i]<<"	";
	}
	
	bubble_sort(array);
	
	cout<<"After Sorting: ";
	for(int i=0; i<5;i++){
		cout<<array[i]<<"	";
	}
	
	
	return 0;
}

//#include<iostream>
//using namespace std;
//
//int bubble(int a[]){
//	for(int i=0; i<5; i++){
//		for(int i=0; i<5-1; i++){
//			if(a[i]>a[i+1]){
//				int temp;
//				temp = a[i];
//				a[i] = a[i+1];
//				a[i+1] = a[i];
//			}
//		}
//	}
//}
//
//int main(){
//	
//	int array[5];
//	cout<<"Enter Numbers in Array: 	";
//	for(int i = 0; i<5; i++){
//		cin>>array[i];
//	}
//	
//	cout<<"Before Sorting the array is like this : ";
//	for(int i=0; i<5; i++){
//		cout<<array[i]<<"	";
//	}
//	
//	bubble(array);
//	
//	cout<<"After Sorting: ";
//	for(int i=0; i<5;i++){
//		cout<<array[i]<<"	";
//	}
//	
//	
//	return 0;
//}
//
//
//
//#include<iostream>
//using namespace std;
//
//int bubble_sort(int a[], int n){
//	for(int i=0; i<n; i++){
//		for(int j=0; j<(n-i-1); j++){
//			if(a[j]>a[j+1]){
//				int temp;
//				temp = a[j];
//				a[j ] = a[j+1];
//				a[j+1 ] = temp;
//			}
//		}
//	}
//}
//
//int main(){
//	
//	int nums;
//	cout<<"Enter the Toatal number of the elemnents you want to put in the array:  ";
//	cin>>nums;
//	int array[nums];
//	cout<<"Enter Numbers in Array: 	";
//	for(int i = 0; i<nums; i++){
//		cin>>array[i];
//	}
//	
//	cout<<"Before Sorting the array is like this : ";
//	for(int i=0; i<nums; i++){
//		cout<<array[i]<<"	";
//	}
//	
//	bubble_sort(array, nums);
//	
//	cout<<"After Sorting: ";
//	for(int i=0; i<nums;i++){
//		cout<<array[i]<<"	";
//	}
//	
//	
//	return 0;
//}
