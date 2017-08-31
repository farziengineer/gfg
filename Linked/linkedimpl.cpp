#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

// ptr to head
Node* head;

void Insert(int pos,int x)
{
	Node* temp = new Node();
	temp->data=x;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}

	else
	{
		temp->next=head;
		head=temp;
	}
}

void Print()
{
	Node* temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp=temp->next;
	}
}


int main()
{

// create empty list
	head=NULL;

	int x;
	for(int i=1;i<=10;i+=1)
	{
		cin>>x;
		Insert(1,x);
		Print();
	}


	return 0;
}