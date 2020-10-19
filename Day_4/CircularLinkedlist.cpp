#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;    
};

class CircularLL
{
    public:
    node *root,*last;
    void createLinkedList()
    {
        root=last=NULL;
    }
    void insertRight(int e)//normal insert 
    {
        node *n;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(root==NULL)
        {
            root=last=n;
            last->next=root;
        }
        else
        {
            last->next=n;   //1
            last=n;         //2
            last->next=root;//3
        }
        
    }
    void insertLeft(int e)
    {
        node *n;
        n=new node;
        n->data=e;
        n->next=NULL;
        if(root==NULL)
        {
            root=last=n;
            last->next=root;
        }
        else
        {
            n->next=root;
            root=n;
            last->next=root;
        }
    }
    void deleteLeft()
    {
        node *t;
        if(root==NULL)
            cout<<"Empty"<<endl;
        else
        {
            t=root;                             //1 copy
            root=root->next;                    //2 toda aur aage
            last->next=root;                    //3 last ka next update
            cout<<"Deleted: "<<t->data<<endl;   //4 aakhri darshan
            delete t;                           //gayab
        }
    }
    void deleteRight()
    {
        node *t,*t2;
        if(root==NULL)
            cout<<"Empty"<<endl;
        else
        {
            t2=t=root;                          //1
            while(t!=last)
            {
                t2=t;                           //t2 ko rakha 
                t=t->next;                      //aage badhe as t
            }
            last=t2;                            //1
            t2->next=root;                      //2
            cout<<"Delete"<<t->data;            //aakhri darshan
            delete t;                           //gayab
        }
    }
    void print()
    {
        node *t;
        if(root==NULL)
            cout<<"Empty"<<endl;
        else
        {
            t=root;
            do
            {
                cout<<" "<<t->data;
                t=t->next;
            }while (t!=root);
        }
    }
};
int main()
{
    CircularLL L;
    L.createLinkedList();
    int ch,e;
    do
	{
		cout<<"\n1.insertRight\n2.insertLeft\n3.deleteLeft\n4.deleteRight\n5.printList\n0.Exit\nEnter choice: ";
        cin>>ch;
		switch(ch)
        {
            case 1:
                cout<<"Enter element: "<<endl;
                cin>>e;
                L.insertRight(e);
                break;
            case 2:
                cout<<"Enter  element: "<<endl;
                cin>>e;
                L.insertLeft(e);
                break;
            case 3:
                L.deleteLeft();
                break;
            case 4:
                L.deleteRight();
                break;
            case 5:
                L.print();
                break;
            case 0:
			cout<<"\nExiting\n";
			break;
		    default:
			cout<<"\n\nError";
			break;		
        }
    }while (ch!=0);
    
    
    return 0;
}

