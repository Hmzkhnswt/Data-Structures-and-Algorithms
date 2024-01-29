#include <iostream>
#include<stdlib.h>
using namespace std;

//										creating a node having data and address pointer for the next node
struct Node {
   int data;
   struct Node *next;
};

//														list is empty having no node
struct Node* head = NULL;

//															insert elements in the list		
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

//																display the elements of the list
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   return 0;
}
