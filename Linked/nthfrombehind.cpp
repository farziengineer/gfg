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

int j;

void Print(Node* temp,int m)
{

	if(temp==NULL)
		return;

	Print(temp->next,m);
	j=j+=1;
	if(j==m)
		cout<<temp->data;
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

	int m;
	cin>>m;
	Print(head,m);

	return 0;
}