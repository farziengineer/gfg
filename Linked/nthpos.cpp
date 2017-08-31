#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
Node* head;

void Insert(int data,int pos)
{
	Node* new_node= new Node();
	new_node->data=data;
	if(head==NULL)
	{
		head=new_node;
		return ;
	}
		// handle case where pos is 1
	if(pos==1)
	{
		new_node->next=head;
		head=new_node;
		return ;
	}
		Node* temp = head;
		for(int i =1;i<pos-1;i+=1)
		{
			temp = temp->next;
		}
		// handle case where pos is last
		if(temp->next==NULL)
		{
			temp->next=new_node;
		}
		else
		{
			new_node->next=temp->next;
			temp->next=new_node;
		}
	
}

void Print()
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{

// empty  list
	head=NULL;

	int x,pos;

	for (int i = 0; i < 10; ++i)
	{
		cin>>x>>pos;
		Insert(x,pos);
		Print();
	}


	return 0;
}