#include<iostream>
using namespace std;

class stack{
	private :
		int top;
		int arr[5];
		
	public: 
		stack(){
			top = -1;
			for(int i=0; i<=5; i++){
				arr[i] = 0;
			}
		}
		
		int isEmpty(){
			if(top==-1)
				cout<<"True";
			else 
				cout<<"False";
			return 0;
		}
		
		int isFull(){
			if(top==4)
				cout<<"True";
			else
				cout<<"False" ;
			return 0;
		}

};

int main(){
	
	stack st1;
	cout<<"The Stack is Empty:  " <<st1.isEmpty();
	cout<<"The Stack is full:  "<<st1.isFull();

	
	
	return 0;
}
