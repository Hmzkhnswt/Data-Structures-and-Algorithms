#include<iostream>
using namespace std;

class stack{
	  private:
	  	int top;
	  	int array[5];
	  	
	public:
		stack(){
			top = -1;
			for(int i=0; i<5; i++){
				array[i] = 0;
			}
		}
// IS		EMPTY	
		bool is_empty(){
			if (top == -1){
				return  true;
			}
			else{
				return false;
			}
		}
// IS  FULL
		bool is_full(){
			if(top == 4){
				return true;
			}
			else{
				return false;
			}
		}
		
// PUSH
		void push(int val){
			if(is_full()){
				cout<<"Stack is OverFlow!  ";
			}
			else{
				top++;
				array[top] = val;
			}
		}
//POP  		
		int pop( ){
			if(is_empty()){
				cout<<"The Satack is UnderFlow! ";
				return 0;
			}
			else{
				int pop_value = array[top];
				array[top ] = 0;
				top--;
				return pop_value;
			}
		}
		
// COUNT METHD
		int count(){
			return (top+1);
		}

// CHANGE METHOD
		void change(int pos , int val){
			array[pos] = val;
			cout<<"The value is changed at desired value!";
		}

// Display Method
		void display(){
			cout<<"				************The values in the Stack are*************			"<<endl;
			for(int i=0; i<5; i++){
				cout<<"			*************The elemnent at the index*************** "<<i<<" : "<<array[i]<<endl;
			}
			
		}
		
		
};

int main(){
	
	stack s1;
	s1.push(45);
	s1.push(32);
	s1.push(66);
	s1.push(90);
	s1.push(33);
	
	cout<<"The stack is ";
	if(s1.is_empty()){
		cout<<"Empty!"<<endl;
	}
	else{
		cout<<"Not Empty!"<<endl;
	}
	
	cout<<"The stack is ";
	if(s1.is_full()){
		cout<<"Full!"<<endl;
	}
	else{
		cout<<"Not Full"<<endl;
	}
	
	
	
	cout<<"The elements in the stack are  :"<<s1.count()<<endl;
	
	s1.display();
	
	
	return 0;
}
