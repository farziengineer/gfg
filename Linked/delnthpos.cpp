#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;	
};
Node* head;

void Insert(int x)
{
	Node* new_node = new Node();
	new_node->data = x;
	if(head==NULL)
	{
		head= new_node;
		return;
	}
	new_node->next=head;
	head = new_node;
}

void Dele(int pos)
{
	if(head==NULL)
		{return ;}
	if(pos==1)
	{
		head=head->next;
		return;
	}
	Node* temp = head;
	for(int i=0;i<pos-2;i+=1)
	{
		temp=temp->next;
	}

	Node* temp2=temp->next;

	temp->next = temp2->next;
	delete(temp2);
}

void Print()
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main()
{

	int x;
	for(int i=1;i<=10;i+=1)
	{
		cin>>x;
		Insert(x);
	}

	Print();

	cout<<"Now dele";
	while(1)
	{
		cin>>x;
		Dele(x);
		Print();
	}

	return 0;
}