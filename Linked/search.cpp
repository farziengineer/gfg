#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* head;

void Insert(int val)
{
	Node* new_node = new Node();
	new_node->data = val;

	if(head==NULL)
	{
		head = new_node;
		return;
	}

	new_node->next = head;
	head = new_node;
}

void Print(Node* temp)
{
	if(temp==NULL)
		return;

	cout<<temp->data;
	Print(temp->next);
}


int Search(Node* temp,int data)
{
	if(temp==NULL)
	{
		return 0;
	}

	if(temp->data==data)
		return 1;
	return Search(temp->next,data);
}

int main()
{
	int x;

	for(int i=1;i<=10;i+=1)
	{
		cin>>x;
		Insert(x);
	}

	cout<<Search(head,5);


	return 0;
}