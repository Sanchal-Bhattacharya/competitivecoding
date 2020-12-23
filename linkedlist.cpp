#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	
	Node(int data)
	{
		this->data=data;
		next = NULL;
	}
};

void print(Node *head){
		Node *ptr = head;
		cout<<"LinkedList Print:"<<endl;
		while(ptr!=NULL)
		{
			cout<<ptr->data;
			ptr = ptr->next;
			if(ptr!= NULL)
			cout<<"-->"; 
		}
} 

int main()
{
	//statical creation
	Node n1(100);
	Node n2(200);
	//dynamic Creation
	Node *n3 = new Node(300);
	Node *n4 = new Node(400);
	//filling the next values in nodes
	Node *head = &n1;
	n1.next = &n2;
	n2.next = n3;
	n3->next = n4;
	cout<<n1.data<<endl;
	cout<<n2.data<<endl;
	cout<<head->data<<endl;
	cout<<n3->next->data;
	//printing ll
	print(head);
	
	
	return 0;
}
