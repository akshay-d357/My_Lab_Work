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
	int num,rem,i;
	//cout<<"enter size: ";
	//cin>>size;
	
	initStack(50);
	cout<<"enter num: ";
	cin>>num;
	
	while(num>0)
	{
		rem = num % 2;
		push(rem); 
        num = num / 2; 
        //i++;
	}
	
	printStack();
	
	/*
	for(int j = i - 1; j >= 0; j--) 
    {
    	int n;
    	n=pop();
    	cout<<n;
	}
	*/
}

