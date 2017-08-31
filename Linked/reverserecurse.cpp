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

	if(head == NULL)
	{
		head = new_node;
		return ;
	}
	new_node->next = head;
	head = new_node;
}


void Print()
{
	Node* temp = head;

	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp  = temp->next;
	}
	cout<<endl;
}

void Rev(Node* temp,Node* before)
{
	if(temp == NULL)
	{
		head = before;
		return;
	}

	Rev(temp->next,temp);
	temp->next = before;
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
	Node* temp_head = head;
	Rev(temp_head,NULL);
	Print();


	return 0;
}