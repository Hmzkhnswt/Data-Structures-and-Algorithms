//#factorial of a number

//#include<iostream>
//using namespace std;
//int main(){
//	
//	int n;
//	int fact=1;
//	cout<<"Enter a Number to find the factorial: ";
//	cin>>n;
//	for(int i=1; i<n; i++){
//		fact = fact*(i+1);
//	}
//	cout<<fact;
//	return 0;
//}


//sum of natural n numbers :

//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	int sum = 1;
//	cout<<"Enter a Number : ";
//	cin>>n;
//	for(int i=1; i<n; i++){
//		sum = sum+(i+1);
//	}
//	cout<<sum;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	int n;
//	int sum;
//	cout<<"Enter a Number to find odd sum :  ";
//	cin>>n;
//	
//	for(int i=0; i<=n; i++){
//		if(n%2!=0){
//			sum = sum+(i-1);
//		}
//	}
//	cout<<sum;
//	
//	return 0;
//}

#include<iostream>
using namespace std;
int main(){
	
	int arr1[5] = {2,4,6,8,10};
	int arr2[5] = {1,2,3,4,5};
	int arr3[5];
	cout<<"The elements in the Array 1: ";
	for(int i=0; i<5; i++){
		cout<<arr1[i]<<"  ";
	}
	cout<<endl;
	cout<<"The elements in the Array 2: ";
	for(int i=0; i<5; i++){
		cout<<arr2[i]<<"  ";
	}
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(arr1[i]==arr2[j]){
				int arr3[i];
				arr3[i] = arr1[i]&&arr2[j];
			}
		}
	}
	
	for(int i=0; i<5; i++){
		cout<<arr3[i]<<"  ";
	}
	
	return 0;
}
