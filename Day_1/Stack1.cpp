#include<iostream>

using namespace std;

int s[100],tos,maxsize;

void initStack(int size)
{
	maxsize=size;
	tos=-1;
}

void push(int e)
{
	//increament tos
	tos++;
	//accept e
	s[tos]=e;
}

int isFull()
{
	if(tos==maxsize-1)
		return 1;
	else
		return 0;
}

int pop()
{
	int temp;
	temp=s[tos];
	tos--;
	return(temp);
}

int isEmpty()
{
	if (tos==-1)
		return 1;
	else
		return 0;
}

int atTop()
{
	return(s[tos]);
}

void printStack()
{
	//LIFO
	int i;
	for(i=tos;i>-1;i--)
	{
		cout<<s[i]<<" ";
	}
}


int main()
{
	int ch,e,size;
	cout<<"enter size: ";
	cin>>size;
	
	initStack(size);
	
	do
	{
		cout<<"\n1: push\n2: pop\n3: atTop\n4: print \n0: exit \n";
		cin>> ch;
		switch(ch)
		{
			case 1:
				if(isFull()==1)
					cout<<"full";
				else
					{
						cout<<"enter element e: ";
						cin>>e;
						push(e);
					}
				break;
			
			case 2:
				if (isEmpty()==1)
					cout<<"Empty";
				else
					{
						e=pop();
						cout<<"poped: "<<e;
					}
					
				break;
					
			case 3:
				if (isEmpty()==1)
					cout<<"Empty";
				else
					{
						e=atTop();
						cout<<"atTop: "<<e;
					}
				break;
			case 4:
				if (isEmpty()==1)
					cout<<"Empty";
				else
					{
						printStack();
					}
				break;
				
			case 0:
				cout<<"exiting";
				break;
			
			default:
				cout<<"error";
				break;
				
		} 
	} while(ch!=0);
}
