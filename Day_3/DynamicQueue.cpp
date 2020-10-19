#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class DynamicQueue
{
	public:
		node *rear,*front;
		
		void createQueue()
		{
			rear=front=NULL;
		}
		
		void Enqueue(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->next=NULL;
			
			//if(rear==NULL) when you dequeue all elelements and trying to add new element it will not add with this condition
			if(rear==NULL || front== NULL)
			{
				rear=front=n;
			}
			else
			{
				rear->next=n;
				rear=n;
			}
		}
		
		void Dequeue()
		{
			node *t;
			if(front==NULL)
			{
				cout<<"Empty Queue";
			}
			else
			{
				t=front;
				front=front->next;
				cout<<"\n Dequeued: "<<t->data;
				delete t;
			}
		}
		
		void printQueue()
		{
			node *t;
			if(front==NULL)
			cout<<"Empty Queue";
			else
			{
				t=front;
				while(t!=NULL)
				{
					cout<<t->data<<" ";
					t=t->next;
				}
			}
		}
};

int main()
{
	DynamicQueue Q;
	Q.createQueue();
	
	int ch,e;
    do
	{
		cout<<"\n1.Enqueue\n2.Dequeue\n3.printQueue\n0.Exit\nEnter choice: ";
        cin>>ch;
		switch(ch)
		{
		case 1:
            cout<<"Enter element: ";
            cin>>e;
			//Q.Enqueue(e);
			Q.Enqueue(e);
			break;
		case 2:
			Q.Dequeue();
			break;
		case 3:
            Q.printQueue();
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
