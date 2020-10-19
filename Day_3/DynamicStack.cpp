#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

class DynamicStack
{
	public:
    node *tos;
    
	void createStack()
    {
        tos=NULL;
    }
    
	void push(int e)
    {
        node *n;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(tos==NULL)
            tos=n;
        else
        {
            n->next=tos;
            tos=n;
        }  
    }
    
	void pop()
    {
        node *t;
        if(tos==NULL)
            cout<<"Empty stack";
        else
        {
            t=tos;
            tos=tos->next;
            cout<<"\nPoped: "<<t->data<<endl;
            delete t;
        }
    }
    
	void printStack()
    {
     	node* t;
    	t=tos;
    	if(t==NULL)
    	{
    		cout<<"empty stack";
		}
		else
		{
		
        while (t != NULL)
        {
            cout<<t->data<<" ";
            t=t->next;
        }
    	}
    }
};

int main()
{
    DynamicStack s;
    s.createStack();
    
    int ch,e;
    do
	{
		cout<<"\n1.push\n2.pop\n3.printStack\n0.Exit\nEnter choice: ";
        cin>>ch;
		switch(ch)
		{
		case 1:
            cout<<"Enter element: ";
            cin>>e;
			s.push(e);
			break;
		case 2:
			s.pop();
			break;
		case 3:
            s.printStack();
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
