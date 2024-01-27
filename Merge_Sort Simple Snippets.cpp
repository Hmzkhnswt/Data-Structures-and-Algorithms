#include<iostream>
using namespace std;

void merge(int a[], int l, int m , int r){
	int i=l;
	int j = m+1;
	int k=l;
	
	int temp[5];
	
	while(i<=m && j<=r){
		if(a[i]<=a[j]){
			temp[k] <= a[i];
			i++;
			k++;
		}
		else{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	while(i<=m){
		temp[k] = a[j];
		j++;
		k++;
		
	}
	while(j<=r){
		temp[k] = a[j];
		j++;
		k++;
		
	}
	for(int i=0; i<5; i++){
		cin>>a[i];
	}
}

void mergeSort(int a[], int l, int r){
	if(l<r){
		int m = (l+r)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a, l,m,r);
		
	}
}

int main(){
	
	int arr[5] ;
	for(int i=0; i<5; i++){
		cin>>arr[i];
	}
	cout<<"before merge sorting :" ;
	for(int i=0; i<5; i++){
		cout<<arr[i]<<"  ";
	}
	
	//merge sorting functionnfor call and to do the run
	mergeSort(arr, 0, 4);
	
	cout<<"after merge sorting: ";
	for(int i=0; i<5; i++){
		cout<<arr[i]<<"  ";
	}
	
	return 0;
}
