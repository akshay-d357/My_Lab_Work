#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

class LinkedList
{
	public:
		struct node *root;
		 void CreateLinkedList()
		 {
		 	root=NULL;
		 }
		 void insertLeft(int e)
		 {
		 	node *n;
		 	n=new node;
		 	n->data=e;
		 	n->next=NULL;
		 	if(root==NULL)
		 	root=n;
		 	else
		 	{
		 		//n->data = e;
		 		n->next=root; //1
		 		root=n;  //2
			 }
		 }
		 
		 void insertRight(int e)
		 {
		 	node *n,*t;
		 	n=new node;
		 	n->data=e;
		 	n->next=NULL;
		 	if(root==NULL)
		 	root=n;
		 	else
		 	{
		 		t=root; //1
		 		while(t->next!=NULL) //2
		 		t=t->next; 
		 		t->next=n; //3
			}
		 }
		 
		 void deleteLeft()
		 {
		 	node *t;
		 	if(root==NULL)
		 	cout<<"list empty";
		 	else
		 	{
		 		t=root; //1
		 		root=root->next; //2
		 		cout<<"\nDeleted: "<<t->data;
		 		delete t; //3
			 }
		 }
		 
		 void deleteRight() //last
		 {
		 	node *t,*t2;
		 	if(root==NULL)
		 	cout<<"list empty";
		 	else
		 	{
		 		t=t2=root; //1
		 		while(t->next != NULL) //2
		 		{
		 			t2=t;
		 			t=t->next;
				}
				 t2->next = NULL; //3
				 cout<<"\nDeleted: "<<t->data;
				 delete t; //4
			 }
		 }
			 
		int search(int key)
		{
			node *t;
			if(root==NULL)
			{
		 	cout<<"list empty";
		 	return -1;
			}
		 	else
		 	{
		 		t=root; //1
		 		while(t != NULL)
		 		{
		 			if(t->data==key)
		 			{
		 				cout<<"\nfound: " <<key;
		 			return 1;
		 			}
		 			t=t->next;
				 }
				cout<<"\n not found";
		 		return 0;
			 }
			
		}
		
		void printLinkedList()
		{
			node *t;
			if(root==NULL)
		 	cout<<"list empty";
			else
		 	{
		 		t=root;
		 		while(t != NULL)
		 		{
		 			cout<<"\n"<<t->data<<" ";
		 			t=t->next;
				}
   
			 }
		}
		
		void deleteElement(int key)
		{
			node *t,*t2;
			
			if(root==NULL)
		 	cout<<"list empty";
		 	else
		 	{
		 		t=t2=root;
		 		while(t != NULL && t->data!=key)
		 		{
		 			t2=t;
		 			t=t->next;
				}
				 if(t!=NULL) //found
				 {
				 	if(t==root) //case1
				 	root=root->next;
				 	else if(t->next==NULL) //case2
				 	t2->next=NULL;
				 	else		//case3
				 	{
				 		t2->next=t->next;
					 }
					 cout<<"\nDeleted: "<<t->data;
					 delete t;
				 }
				 else
				 {
				 	cout<<"not found";
				 }
			 }
			
			
			} 	 
};

int main()
{
	int ch,e;
	LinkedList L1;
	L1.CreateLinkedList();
	
	do
	{
	cout<<"\n1: insert Left \n2: insert Right\n3: delete Left\n4: delete Right \n5: delete specific Element \n6: search element \n7: print LinkedList \n0: exit \n\nEnter Choice: ";
	cin>> ch;
	switch(ch)
	{
		case 1:
			cout<<"enter element e to be inserted from left: ";
			cin>>e;
			L1.insertLeft(e);
			break;
			
		case 2:
			cout<<"enter element e to be deleted from right: ";
			cin>>e;
			L1.insertRight(e);
			break;
		case 3:
			L1.deleteLeft();
			break;
		case 4:
			L1.deleteRight();
			break;
		case 5:
			cout<<"enter element e to be deleted: ";
			cin>>e;
			L1.deleteElement(e);
			break;
		case 6:
			cout<<"enter element e you wanr to search: ";
			cin>>e;
			L1.search(e);
			break;
		case 7:
			L1.printLinkedList();
			break;
		case 0:
			cout<<"exiting";
			break;
		default:
			cout<<"error";
			break;
	
	}	
}while(ch!=0);
/*	L1.insertLeft(20);
	L1.insertLeft(30);
	
	L1.insertRight(50);
	L1.deleteRight();
	L1.deleteLeft();
	L1.printLinkedList();
	L1.deleteElement(20);
	L1.printLinkedList();
	L1.search(10);
	*/
}
