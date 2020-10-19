#include<iostream>

using namespace std;

int Q[100],front,rear,maxsize;

void CreateQueue(int size)
{
	maxsize=size;
	rear=-1;
	front=0;
}

void Enqueue(int e)
{
	//increament rear
	rear++;
	//accept e
	Q[rear]=e;
}

int isFull()
{
	if(rear==maxsize-1)
		return 1;
	else
		return 0;
}

int Dequeue()
{
	int temp;
	temp=Q[front];
	front++; //delete from front
	return(temp);
}

int isEmpty()
{
	if (front>rear)
		return 1;
	else
		return 0;
}

void printQueue()
{
	//FIFO
	int i;
	for(i=front;i<=rear;i++)
	{
		cout<<Q[i]<<" ";
	}
}


int main()
{
	int ch,e,size;
	cout<<"enter size: ";
	cin>>size;
	
	CreateQueue(size);
	
	
	
	do
	{
		cout<<"\n1: Add to Queue \n2: Delete from Queue \n3: print Queue\n0: exit \nenter choice:";
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
						Enqueue(e);
					}
				break;
			
			case 2:
				if (isEmpty()==1)
					cout<<"Empty";
				else
					{
						e=Dequeue();
						cout<<"Deleted: "<<e;
					}
				break;
					
			case 3:
				if (isEmpty()==1)
					cout<<"Empty";
				else
					{
						printQueue();
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
