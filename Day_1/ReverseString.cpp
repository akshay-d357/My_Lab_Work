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


int main()
{
	int n;
	//cout<<"enter size: ";
	//cin>>size;
	char str[20]; 
	cout<<"enter string: ";
	cin>>str;
	n = strlen(str);  
	
	initStack(50);
	
	for (int i = 0; i < n; i++)  
        push(str[i]);
        
	printStack();
	/*
	for (int i = 0; i < n; i++)  
       {
       	char m;
		m= pop();
        cout<<m;
    	}
	*/
}

