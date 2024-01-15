#include<iostream>
using namespace std;
struct BstNode
{
	int data;
	BstNode *left;
	BstNode *right;
};
BstNode *root=NULL;
BstNode* GetNewNode(int data)
{
	BstNode *NewNode=new BstNode();
	NewNode->data=data;
	NewNode->left=NULL;
	NewNode->right=NULL;
	return NewNode;
}
int Mininmun_in_Tree(BstNode *tree) 
{
	int e;
	BstNode p;
	if (tree->left == NULL) 
	{
		e = tree->data;
		p = *tree;
		tree= tree->right;
		delete(&p);
		return e;
	}
	else
	{
		return (Mininmun_in_Tree(tree->left));
	}
}
BstNode *del(BstNode *root,int value)
{
	BstNode x; 
	if(root!=NULL)
	{
		if(value<root->data)
		{
			del(root->left,value);
		}
		else if(value>root->data)
		{
			del(root->right,value);
		}
		else if (root->left==NULL && root->right==NULL)
		{
			x = *root;
			delete(&x);
			root=NULL;
		}
	}
	else if(root->left==NULL)
	{
		x = *root;
		root = root->right;
		delete(&x);
	}
	else if(root->right==NULL)
	{
		x = *root;
		root = root->left;
		delete(&x);
	}
	else
	{
		root->data = Mininmun_in_Tree(root->right);
	}
}
BstNode* Insert(BstNode *root,int value)
{
	if(root==NULL)
	{
		root=GetNewNode(value);
	}
	else if(value<=root->data)
	{
		root->left=Insert(root->left,value);
	}
	else
	{
		root->right=Insert(root->right,value);
	}
	return root;
}
int Minimum(BstNode *root)
{
	if(root==NULL)
	{
		cout<<"Error Tree is Empty: \n";
		return 0;
	}
	else if(root->left==NULL)
	{
		return root->data;
	}
	else
	{
		return Minimum(root->left);
	}
}
int Maximum(BstNode *root)
{
	if(root==NULL)
	{
		cout<<"Error Tree is Empty: \n";
		return 0;
	}
	else if(root->right==NULL)
	{
		return root->data;
	}
	else
	{
		return Maximum(root->right);
	}
}
bool Search(BstNode *root,int data)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data==data)
	{
		return true;
	}
	else if(root->data>=data)
	{
		return Search(root->left,data);
	}
	else
	{
		return Search(root->right,data);
	}
}
void Preorder(BstNode *root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<" "<<root->data;
	Preorder(root->left);
	Preorder(root->right);
}
void Inorder(BstNode *root)
{
	if(root==NULL)
	{
		return;
	}
	Inorder(root->left);
	cout<<" "<<root->data;
	Inorder(root->right);
}
void Postorder(BstNode *root)
{
	if(root==NULL)
	{
		return;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout<<" "<<root->data;
}
int FindHeight(BstNode *root)
{
	if(root==NULL)
	{
		return -1;
	}
	else
	{
		return max(FindHeight(root->left),FindHeight(root->right))+1;
	}
}
int main()
{
    int check;
    int value;
    do
    {
    	cout<<"Enter:\n0: For Exit\n1: For Insert\n2: For Search:\n3: For Minimum Value\n4: For Maximum Value\n5: For Height\n6: For Preorder\n7: For Inorder\n8: For Postorder\n";
    	cin>>check;
    	switch(check)
    	{
    		case 1:
    			cout<<"Enter value to Insert: ";
    			cin>>value;
    			root=Insert(root,value);
    			break;
    		case 2:
    			int number;
	           		 cout<<"Enter the Number to Search: \n";
	            		cin>>number;
	            		if(Search(root,number)==true)
	            		cout<<"Number is Found: \n";
	            		else
	            		cout<<"Number is Not Found: \n";
	            		break;
	        	case 3:
	        		cout<<"Minimum: "<<Minimum(root)<<endl;
	        		break;
	        	case 4:
	        		cout<<"Maximum: "<<Maximum(root)<<endl;
	        		break;
	        	case 5:
	        		cout<<"Height: "<<FindHeight(root)<<endl;
	        		break;
	        	case 6:
	        		cout<<"Preorder: ";
			Preorder(root);
				cout<<"\n";
				break;
			case 7:
				cout<<"Inorder: ";
				Inorder(root);
				cout<<"\n";
				break;
			case 8:
				cout<<"Postorder: ";
				Postorder(root);
				cout<<"\n";				
	        	break;
		}
	}while(check!=0);
	return 0;
}

