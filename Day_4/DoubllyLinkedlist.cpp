#include<iostream>
 using namespace std;
 
 struct node
 {
 	int data;
 	node *left,*right;
 };
 
 class Dlist
 {
 	public:
	node *root;
	void createDlist()
	{
	 	root=NULL;
	}
	
	void insertleft(int e)
	{
		node *n;
		n=new node;
		n->data=e;
		n->left=n->right=NULL;
		if(root==NULL)
			root=n;
		else
		{
			n->right=root;//1
			root->left=n;//2
			root=n;//3
		}
	}
	void deleteleft()
	{
		node *t;
		if(root==NULL)
		cout<<"Empty";
		else if(root->right==NULL && root->left==NULL)
		{
			cout<<"deleted:  "<<root->data;
			delete root;
		}
		else
		{
			t=root;  //1
			root=root->right;//2
			root->left=NULL;//3
			cout<<"deleted: "<<t->data;
			delete t;
		}
	}
	
	void insertright(int e)
	{
		node *t,*n;
		n=new node;
		n->data=e;
		n->left=n->right=NULL;
		if(root==NULL)
			root=n;
		else
		{
			t=root; //1
			while(t->right!=NULL)
				t=t->right;
			
			t->right=n;
			n->left=t;
		}
	}
	
	void deleteright()
	{
		node *t,*t2;
		if(root==NULL)
		cout<<"Empty";
		else if(root->left==NULL && root->right==NULL)
		{
			t=root;
			cout<<"deleted:  "<<t->data;
			delete t;
		}
		else
		{
			t=root;
			while(t->right!=NULL)
			{
				t=t->right;
			}
			t2=t->left;
			t2->right=NULL;
			cout<<"deleted: "<<t->data;
			delete t;
		}
	}
	void reverseprint()
	{
		node *t;
		if(root==NULL)
		cout<<"Empty";
		else
		{
			t=root;
			while(t->right!=NULL)
				t=t->right;
			while(t!=NULL)
			{
				cout<<t->data<<" ";
				t=t->left;
			}
		}
	}		
 };
 
 int main()
 {
 	int ch,e;
	Dlist d1;
	d1.createDlist();
	
	do
	{
	cout<<"\n1: insert Left \n2: delete Left\n3:insert right\n4.delete Right\n5.Reverse print LinkedList \n0: exit \n\nEnter Choice: ";
	cin>> ch;
	switch(ch)
	{
		case 1:
			cout<<"enter element e to be inserted from left: ";
			cin>>e;
			d1.insertleft(e);
			break;
		case 2:
			d1.deleteleft();
			break;
		case 3:
			cout<<"enter element e to be inserted from Right: ";
			cin>>e;
			d1.insertright(e);
			//d1.insertright(e);
			break;
		case 4:
			d1.deleteright();
			break;
		case 5:
			d1.reverseprint();
			break;	
		case 0:
			cout<<"exiting";
			break;
		default:
			cout<<"error";
			break;
	}	
 }while(ch!=0);
}
