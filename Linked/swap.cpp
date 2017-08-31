#include <bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	Node* next;
};

Node* head;

void Insert(int data)
{
	Node* new_node = new Node();
	new_node->data = data;

	if(head==NULL)
	{
		head = new_node;
		return;
	}

	new_node->next = head;
	head = new_node;
}


void Swapper(int dataX,int dataY,Node* currX,Node* currY)
{
	Node* prevX=NULL;
	Node* prevY=NULL;

	while(currX!=NULL and (currX->data!=dataX))
	{
		prevX=currX;
		currX=currX->next;
	}

	while(currY!=NULL and (currY->data!=dataY))
	{
		prevY=currY;
		currY=currY->next;
	}

	if(prevX!=NULL)
	{
		prevX->next=currY;
	}
	else
	{
		head=currY;
	}

	if(prevY!=NULL)
	{
		prevY->next=currX;
	}
	else
	{
		head=currX;
	}

	Node* temp = currX->next;
	currX->next = currY->next;
	currY->next=temp;
}

void Print(Node* temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}


int main()
{

	int x,n;
	cin>>n;
	for(int i=1;i<=n;i+=1)
	{
		cin>>x;
		Insert(x);
	}

	int a,b;
	cin>>a>>b;

	Print(head);
	cout<<endl;
	Swapper(a,b,head,head);
	Print(head);

	return 0;
}