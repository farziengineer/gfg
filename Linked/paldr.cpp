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


void Print()
{
	Node* new_node = head;
	while(new_node!=NULL)
	{
		cout<<new_node->data;
		new_node = new_node->next;
	}
}

Node* temp1;

int Ispal(Node* temp2)
{
	if(temp2==NULL)
	{
		return 1;
	}

	int res = Ispal(temp2->next);
	cout<<temp1->data<<" "<<temp2->data<<endl;
	if(res==0)
		return 0;

	int r = (temp2->data)==(temp1->data);
	temp1 = temp1->next;
	return r;
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

	temp1 = head;
	cout<<endl<<Ispal(head);


	return 0;
}