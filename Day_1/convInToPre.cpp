#include<iostream>
#include<string.h>

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
int Preced(char c)
{
	if(c=='+'||c=='-')
		return 1;
	if(c=='*'||c=='/'||c=='%')
		return 2;
	if(c=='^')
		return 3;
	else
		return 0;
}

int main()
{
	char inFix[100],preFix[100],c;
	int pi=0;
	cout<<"Enter Infix: ";
	cin>>inFix;
	int k=strlen(inFix);
	initStack(k);
	
	for(int i=k-1;i>=0;i--)
	{
		c=inFix[i];
		switch(c)
		{
			case ')':
				push(c);
				break;
			
			case '(':
				while(s[tos]!=')')
				{
					preFix[pi]=pop();
					pi++;
				}
				c=pop();
				break;
				
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				//if precedance of operator on tos <= new operator then puch it on stack 
				if(Preced(s[tos])<=Preced(c))
					push(c);
				else //pop all till condition satisfied or stack becomes empty
				{
					
					while(isEmpty()==0 && Preced(s[tos])>Preced(c) )
					{
					preFix[pi]=pop(); // copy popped elements to postfix
					pi++;
					}
					push(c); // when condition fails push the element
				}
				break;
	
				/*
				while((Preced(s[tos])>Preced(c)) && (isEmpty()!=1))
				{
					preFix[pi]=pop();
					pi++;
				
				}
				push(c);
				break;
				*/
			default:
				preFix[pi]=c;   //if it is oprand copy to prefix
				pi++;
				break;
		}
	}
	while(isEmpty()==0)
	{
		preFix[pi]=pop();   // copy leftover from stack to postfix
		pi++;
	}
	cout<<"preFix:";
	for(int j=pi-1;j>=0;j--)
	{
		cout<<preFix[j]; //print right to left
	}
	//cout<<"preFix: "<<preFx;
	//printStack();
}

