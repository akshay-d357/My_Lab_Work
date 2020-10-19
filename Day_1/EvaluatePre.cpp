#include<iostream>
#include<string.h>

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
	char preFix[100],c;
	int i;
	cout<<"Enter preix: ";
	cin>>preFix;
	int k=strlen(preFix);
	initStack(k);
	
	for(int i=k;i>=0;i--)
	{
		c=preFix[i];
	
			if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' ||c=='^') //operator
			
			{   //pop 2 numbers from stack
				int a=pop(); //left
            	int b=pop(); //right
            	
            	//evaluate and push the ans into the stack
            	if(c=='+')
            	{
				push(a+b);
            	//cout<<atTop()<<endl;
            	}
				else if(c=='-')
            	{
				push(a-b);
            	//cout<<atTop()<<endl;
            	}
            	else if(c=='*')
            	{
            	push(a*b);
            	//cout<<atTop()<<endl;
            	}
            	else if(c=='/')
            	{
            	push(a/b);
            	//cout<<atTop()<<endl;
            	}
				
				
			}
			
			else //operand
			{
				push(c-'0');
			}
	}
	//printStack();
	cout<<"ans: "<<atTop()<<endl;
	return 0;
}


