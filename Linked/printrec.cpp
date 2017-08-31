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

void PrinterItr()
{
	Node* temp ;
	temp = head;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void Print_rec(Node* temp)
{
	if(temp==NULL)
		return;

	cout<<(temp->data)<<" ";
	temp = temp->next;
	Print_rec(temp);
}


int main()
{

	int x;
	for(int i=1;i<=10;i+=1)
	{
		cin>>x;
		Insert(x);
	}
	PrinterItr();
	Print_rec(head);


	return 0;
}