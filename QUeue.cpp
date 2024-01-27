#include<iostream>
using namespace std;

class Queue{
	private:
		int arr[5];
		int front;
		int rear;
		
	public:
		queue(){
			front = -1;
			rear = -1;
			for(int i=0; i<5; i++){
				arr[i]=0;
			}
		}
		
					
		bool is_empty(){
			if(front == -1&& rear == -1)	{
				return true;
			}
			else{
				return false;
			}
		}
		
		bool is_full(){
			if(rear == 4){
				return true;
			}
			else{
				return false;
			}
		}
		
		void enqueue(int val){
			if(is_full()){
				cout<<"The Queue is Full! ";
			}
			else if(is_empty()){
				rear = 0;
				front = 0;
				arr[rear] = val;
			}
			else{
				rear++;
				arr[rear] = val;
			}
		}
		
		int dequeue(){
			int x;
			if(is_empty()){
				cout<<"The queue is empty! ";
			}
			else if(front == rear){
				x = arr[front];
				arr[front] = 0;
				rear = -1;
				front = -1;
				return x;
			}
			else{
				x = arr[front];
				arr[front] = 0;
				front ++;
				return x;
			}
		}
		
		void display(){
			cout<<"The elements in the queue are: "<<endl;
			for(int i=0; i<5; i++){
				cout<<"The elements at index "<<i<<" is "<<arr[i]<<endl;
			}
		}
		
		
};

int main(){
	
	Queue q1;
	q1.enqueue(45);
	q1.enqueue(44);
	q1.enqueue(75);
	q1.enqueue(23);
	
	q1.display();
	
	
	return 0;
}


//#include<iostream>
//using namespace std;
//
//class Queue{
//	private:
//		int arr[10];
//		int  front;
//		int rear;
//		
//	public:
//		Queue(){
//			front = -1;
//			rear = -1;
//			for(int i=0; i<10; i++){
//				arr[i] = 0;
//			}
//		}
//		
//		bool is_empty(){
//			if(rear == -1 && front == -1){
//				cout<<"The Queue is Empty! ";
//			}
//			else{
//				cout<<"The is not Empty!  ";
//			}
//		}
//		
//		bool is_full(){
//			if(rear == 10){
//				cout<<"The stack is Full! ";
//			}
//			else{
//				cout<<"The is nt Full!  ";
//			}	
//		}
//		
//		void enqueue(int value){
//			if(is_full()){
//				cout<<"The Queue is Full!";
//			}
//			else if(is_empty()){
//				rear = 0;
//				front = 0;
//				arr[rear] = value;
//			}
//			else{
//				arr[rear] = value;
//				rear++;
//			}
//		}
//		
//		void display(){
//			cout<<"The elements in the Queue are following: ";
//			for(int i=0; i<10; i++){
//				cout<<arr[i];
//			}
//		}
//		
//		
//};
//
//int main(){
//	
//	Queue Q1;
//	Q1.is_empty();
//	
//	Q1.enqueue(34);
//	Q1.enqueue(67);
//	
//	Q1.display();
//	
//	return 0;
//}
