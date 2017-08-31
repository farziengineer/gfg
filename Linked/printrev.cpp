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
		return ;
	}

	new_node->next = head;
	head = new_node;
}

void Prinrev(Node* temp)
{
	if(temp==NULL)
	{
		return;
	}
	Prinrev(temp->next);
	cout<<temp->data<<" "; 
}


int main()
{
	int x;

	for(int i=1;i<=10;i+=1)
	{
		cin>>x;
		Insert(x);
	}

	Node* temp_head = head;
	Prinrev(temp_head);

	return 0;
}