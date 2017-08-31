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

	if(head == NULL)
	{
		head = new_node;
		return;
	}

	new_node->next = head;
	head = new_node;
}


int Search(Node* temp,int data)
{
	if(temp==NULL)
	{
		return 1;
	}

	if(temp->data==data)
		return 0*Search(temp->next,data);
	return Search(temp->next,data);

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
	cout<<Search(head,5);


	return 0;
}