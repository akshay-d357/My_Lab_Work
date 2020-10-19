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
	char inFix[100],postFix[100],c;
	int pi=0,i;
	cout<<"Enter Infix: ";
	cin>>inFix;			 // accept infix
	int k=strlen(inFix);
	initStack(k);		 //init stack
	
	for(int i=0;i<k;i++)
	{
		c=inFix[i];     
		switch(c)
		{
			case '(':   // push into stack
				push(c);
				break;
			
			case ')':   // pop everything from stack till ( will come
				while(s[tos]!='(')
				{
					postFix[pi]=pop();  // copy poped elements to postfix
					pi++;
				}
				c=pop(); //pop ( also
				break;
		
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				//if precedance of operator on tos <= new operator then puch it on stack 
				if(Preced(s[tos])<=Preced(c))
					push(c);
				else  //pop all till condition satisfied or stack becomes empty
				{
					while(isEmpty()==0 && Preced(s[tos])>Preced(c))
					{
					postFix[pi]=pop(); // copy popped elements to postfix
					pi++;
					}
					push(c);  // when condition fails push the element
				}
				break;
				/*
				while((Preced(s[tos])>=Preced(c)) && (isEmpty()!=1))
				{
					postFix[pi]=pop();
					pi++;	
				}
				push(c);
				break;
				*/
			default:
				postFix[pi]=c;  //if it is oprand copy to postfix
				pi++;
				break;
		}
	}
	while(isEmpty()==0)   
	{
		postFix[pi]=pop(); // copy leftover from stack to postfix
		pi++;
	}
	cout<<"PostFix: "<<postFix; //print left to right
}

