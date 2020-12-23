#include <iostream>
using namespace std;

//CREATING A NODE
class Node
{
	public:
	int data;
	Node* next;
	
};

//CREATING LINKED LIST OR INSERING AT TAIL
Node* createList(int n)
{
	int val;
	Node* head = NULL;
	Node* tail = NULL;
	
	cout<<"Enter values:";
    for(int i=0;i<n;i++)
    {	
		cin >> val;
		Node* temp = new Node();
		temp->data = val;
		temp->next = NULL;
	
		if(head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
    }
	
	return head;
}

//PRINTING LINKED LIST
void printList(Node *head)
{
	
	Node *ptr = head;
	cout<<"LinkedList Print:"<<"\n";
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr = ptr->next;
		if(ptr!= NULL)
		cout<<"-->"; 
	}
}
//LENGTH OF THE LIST
int listLength(Node* head)
{
	Node* tail = head;
	int l=0;
	while(tail!=NULL)
	{
		l++;
		tail = tail->next;
	}
	return l;	
}
//INSERTING INTO HEAD OF LIST
void insert_at_Head(Node** head)
{
	int val,n;
	
	cout<<"Enter no of nodes to insert at head?:";
	cin >> n;
	
	cout<<"Enter values:";
	for(int i=0;i<n;i++)
	{
		cin >> val;
		Node* temp = new Node();
		temp->data = val;
		temp->next = NULL;
		if(*head==NULL)
		{
			*head = temp;
		}
		else
		{
			temp->next = *head;
			*head = temp;
		}
	}
}
//INSERT AT Ith INDEX
void insert_at_index(Node** head)
{
	int index;
	cout<<"Enter the index:";
	cin >> index;
	
	if(index < 0 || index > listLength(*head))
	return;
	
	Node* temp = new Node();
	cout<<"Enter node data:";
	cin >> temp->data;
	temp->next = NULL;
	
	if(index == 0)
	{
		temp->next = *head;
		*head = temp;
		return;
	}
	
	Node* tail = *head;
	for(int i=0;i<index-1;i++)
	tail = tail->next;
	
	temp->next = tail->next;
	tail->next = temp;
	return;
	
}
//VALUE AT INDEX
void value_at_index(Node* head)
{
	Node* tail = head;
	int index;
	cout<<"Enter the index:";
	cin >> index;
	
	if(index >=0 && index <= listLength(head)){
	for(int i=0;i!=index;i++)
	tail = tail->next;
	cout<<"Data = "<<tail->data<<endl;}
	else
	cout<<"Invalid Index";
}
//DELETE THE NODE
void deleteNode(Node** head)
{
	int index;
	cout<<"Enter the index u want to delete? : ";
	cin >> index;
	
	if(index<0 || index>=listLength(*head))
	return;
	else if(index == 0)
	{
		Node* temp = *head;
		*head = temp->next;
		delete temp;
		return;
	}
	else if(index == (listLength(*head)-1))
	{
		Node* tail = *head;
		
		while(tail->next!=NULL)
		tail = tail->next;
		
		Node* temp = tail->next;
		tail->next = NULL;
		delete temp;
		
	}
	else{
		Node* tail = *head;
		
		for(int i=0;i<index-1;i++)
		tail = tail->next;
		
		Node* temp = tail->next;
		tail->next = temp->next;
		cout<<"Delete Node value:"<<temp->data;
		delete temp;
		return;
	}
}
//SEARCH LIST
void listSearch(Node* head)
{
	int input;
	cout<<"Enter the input:";
	cin >> input;
	while(head!=NULL)
	{
		if(head->data == input)
		{
			cout<<"Present";
			return;
		}
		head = head->next;
	}
	cout<<"Absent";
}				
	
		
int main()
{
	int n,ch;
	cout<<"Number of nodes to be created:";
	cin >> n;
	//CREATION OF LINKED LIST
	Node* head = NULL; 
	head = createList(n);
	//OPTIONS TO PERFORM
	cout<<"\n1.Print List";
	cout<<"\n2.Length of List";
	cout<<"\n3.Insert at Head";
	cout<<"\n4.Insert at Specific Index";
	cout<<"\n5.Value at that index";
	cout<<"\n6.Delete the node at ith index";
	cout<<"\n7.Search in the linked list";
	cout<<"\n0.Exit";
	do
	{
		cout<<"\nEnter your choice:";
		cin >> ch;
	switch(ch)
	{
		case 1:
		{ 
			printList(head);
			break;
		}
		case 2:
		{ 
			int l = listLength(head);
			cout<<"Length of LL:"<<l;
			break;
		}
		case 3:
		{
			insert_at_Head(&head);
			break;
		}
		case 4:
		{ 
			insert_at_index(&head);
			break;
		}
		case 5: 
		{
			value_at_index(head);
			break;
		}
		case 6:
		{
			deleteNode(&head);
			break;
		}
		case 7:
		{
			listSearch(head);
			break;
		}
		case 0:
		{
			exit(0);
		}
		default: cout<<"\nInvalid choice";
	
	}
		cout<<"\n";
	}while(ch);
	
	return 0;
}
	
