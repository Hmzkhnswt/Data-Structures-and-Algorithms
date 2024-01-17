#include<iostream>
using namespace std;

void selection_sort(int a[]){
	 for(int i=0; i<5-1; i++){
	 	int min = i;
		
		for(int j=i+1; j<5; j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		
		if(min!=i){
			int temp = a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	 }
}

int main(){
	
	int array[5];
	cout<"Enter the numbers in the array: ";
	for (int i=0; i<=5; i++){
		cin>>array[i];
	}
	
	cout<<"The UNSORTED ARRAY IS :  ";
	
	for (int i=0; i<=5; i++){
		cout<<array[i]<<"	";
	}
	
	selection_sort(array);
	
	cout<<"The SORTED ARRAY IS:  "<<"	";
	for (int i=0; i<=5; i++){
		
		cout<<array[i]<<"	";
	}
	
	return 0;
}


//#include<iostream>
//using namespace std;
//
//void Selection_sort(int a[], int n){
//	
//	for(int i=0; i<n-1; i++){
//		int min = i;
//	for(int j=i+1; j<n; j++){
//		if(a[j]<a[min]){
//			j = min;
//		}
//		
//	}
//	if(min!=i){
//		int temp = a[min];
//			a[min]=a[i];
//			a[i]=temp;
//	}
//	}
//}
//
//int main(){
//	
//	int nums;
//	cout<<"Enter the number of elements you want in the array:  ";
//	cin>>nums;
//	int array[nums];
//	cout<<"Enter "<<nums<<" in the array:	";
//	for(int i=0; i<=nums; i++){
//		cin>>nums;
//	}
//	
//	cout<<"The sorted list is in front of you:   ";
//	Selection_sort(array, nums);
//	for(int i=0; i<nums; i++){
//		cout<<array[i];
//}
//	return 0;
//}
