#include<iostream>

using namespace std;

char s[100];
int tos,maxsize;

void initStack(int size)
{
	maxsize=size;
	tos=-1;
}

void push(char e)
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

char pop()
{
	char temp;
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

char atTop()
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

void wellness()
{
	if (isEmpty()==1)
		cout<<"\n okk";
		
	else
		cout<<"\n } needed";
	
}

int main()
{
	int e,size,i,ch;
	char c;
	//cout<<"enter size: ";
	//cin>>size;
	
	initStack(50);
do
	{	
		cout<<"\n 1: push\n 2: check wellness\n 3: print \n 0: exit \n";
		cout<<"\nenter choice:";
		cin>> ch;
		switch(ch)
		{
		
	
		case 1:
		cout<<"\nenter character: ";
		cin>>c;
		
		if(c=='{')
		{
			push(c);
		}
		
		else if(c=='}')
		{
			if (isEmpty()==0)
			pop();
					
			else
				{
					cout<<"\n } unexpected";
				}
					
		} 
		
		else
		{
			cout<<"\ninvalid";
		}
		break;
		case 2:
			wellness();
			break;
		case 3:
			printStack();
			break;
		case 0:
			cout<<"\nexiting";
			break;
	}
}while(ch!=0);

}
