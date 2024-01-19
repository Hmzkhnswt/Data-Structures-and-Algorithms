#include<iostream>
using namespace std;

void insertion_sort(int arr[]){
	int j = 0;
	int key = 0;
	for(int i=1; i<5-1; i++){
		key = arr[i];
		j = i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1] = arr[j];
			j = j-1;	
		}
	}
	arr[j+1] = key;
}

int main(){
	
	int array[5];
	cout<<"Enter the elements in the array:	"<<endl;
	for(int i=0; i<5; i++){
		cin>>array[i];
	}
	
	cout<<"Before Sorting of the array:	";
	for(int i=0; i<5; i++){
		cout<<array[i]<<"  ";
	}
	
	insertion_sort(array);
	
	cout<<"After Sorting of the array:	";
	for(int i=0; i<5; i++){
		cout<<array[i]<<"  ";
	}
	
	
	
	return 0;
}
