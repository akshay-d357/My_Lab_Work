#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

class LinkedListWithMerger
{
	node *r1,*r2,*r3;
	public:
		struct node *root;
		 void CreateLinkedList()
		 {
		 	r1=r2=r3=NULL;
		 }
		 
		 node* insertL1(int e)
		 {
		 	node *t,*n;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(r1==NULL)
            r1=n;
        else
        {
            t=r1;
            while (t->next!=NULL)
            {
             t=t->next;
            }
            t->next=n;            
        }
        return r1;
		 }
		 
		 node* insertL2(int e)
		 {
		 	node *t,*n;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(r2==NULL)
            r2=n;
        else
        {
            t=r2;
            while (t->next!=NULL)
            {
             t=t->next;
            }
            t->next=n;            
        }
        return r2;
		 }
		 
		 void deleteL1()
		 {
		 	node *t;
		 	if(r1==NULL)
		 	cout<<"list empty";
		 	else
		 	{
		 		t=r1; //1
		 		r1=r1->next; //2
		 		cout<<"\nDeleted: "<<t->data;
		 		delete t; //3
			 }
		 }

		void deleteL2()
		 {
		 	node *t;
		 	if(r2==NULL)
		 	cout<<"list empty";
		 	else
		 	{
		 		t=r2; //1
		 		r2=r2->next; //2
		 		cout<<"\nDeleted: "<<t->data;
		 		delete t; //3
			 }
		 }
		 
		void printLinkedList1()
		{
			node *t;
			if(r1==NULL)
		 	cout<<"list empty";
			else
		 	{
		 		t=r1;
		 		while(t != NULL)
		 		{
		 			cout<<t->data<<" ";
		 			t=t->next;
				}
				cout<<"\n";
   
			}
		}
		void printLinkedList2()
		{
			node *t;
			if(r2==NULL)
		 	cout<<"list empty";
			else
		 	{
		 		t=r2;
		 		while(t != NULL)
		 		{
		 			cout<<t->data<<" ";
		 			t=t->next;
				}
				cout<<"\n";
			 }
		}
		void printLinkedList3()
		{
			node *t;
			if(r3==NULL)
		 	cout<<"list empty";
			else
		 	{
		 		t=r3;
		 		while(t != NULL)
		 		{
		 			cout<<t->data<<" ";
		 			t=t->next;
				}
   
			 }
			 cout<<"\n";
		}
			
	//	node*
	void merge(node *r1, node *r2)
    {
        node *n,*last;
        r3=NULL;
        while(r1!=NULL && r2!=NULL)
        {
            n=new node;
            if(r1->data<r2->data)
            {
                n->data=r1->data;
                r1=r1->next;
            }
            else
            {
                n->data=r2->data;
                r2=r2->next;
            }
            n->next=NULL;
            if(r3==NULL)
            {
                r3=last=n;
            }
            else
            {
                last->next=n;
                last=n;
            }
        }
        while(r1!=NULL)
        {
            n=new node;
            n->data=r1->data;
            n->next=NULL;
            r1=r1->next;
            last->next=n;
            last=n;
        }
        while(r2!=NULL)
        {
            n=new node;
            n->data=r2->data;
            n->next=NULL;
            r2=r2->next;
            last->next=n;
            last=n;
        }
        cout<<"Merged Successfully\n";
        //return root3;
    }
};

int main()
{
	LinkedListWithMerger m1;
	LinkedListWithMerger m2;
	LinkedListWithMerger m3;
	
	m1.CreateLinkedList();
	m2.CreateLinkedList();
	m3.CreateLinkedList();
	
	node *r4,*r5;
	int ch,e;
    do
	{
		cout<<"\n1.ADD in L1\n2.Delete from L1\n3.ADD in L2\n4.Delete from L2\n5.Merge\n6.Print Lists\n0.Exit\nEnter choice: ";
        cin>>ch;
		switch(ch)
		{
		case 1:
            cout<<"Enter element: ";
            cin>>e;
			r4=m1.insertL1(e);
			break;
		case 2:
			m1.deleteL1();
			break;
		case 3:
			cout<<"Enter element: ";
            cin>>e;
            r5=m2.insertL2(e);
			break;
		case 4:
			m2.deleteL2();
			break;
		case 5:
			m3.merge(r4,r5);
			break;
			
		case 6:
			cout<<"L1: ";
			m1.printLinkedList1();
			cout<<"L2: ";
			m2.printLinkedList2();
			cout<<"L3: ";
			m3.printLinkedList3();
			break;	
		case 0:
			cout<<"\nExiting\n";
			break;
		default:
			cout<<"\n\nError";
			break;		
		}
	}while(ch!=0);
	
	return 0;
}
