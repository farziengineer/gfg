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

void Print()
{
	Node* temp = head;

	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp=temp->next;
	}
	cout<<endl;
}


void Reverse()
{	
	Node* after;
	Node* curr=head;
	Node* before = NULL;
	curr = head;
	before = NULL;

	while(curr!=NULL)
	{
		after = curr->next;
		curr->next = before;
		before = curr;
		curr=after;
	}
	head = before;
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
	Reverse();
	Print();


	return 0;
}