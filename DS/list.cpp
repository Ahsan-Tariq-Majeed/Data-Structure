#include <iostream>
using namespace std;

class Node
{
	public:
		int Data;
		Node *Next;
};

class MakingList
{
	public:
		Node *First,*End;
		MakingList()
		{
			First = NULL;
		}
		
		void Insert(int x);
		void Display();
};

void MakingList :: Insert(int x)
{
	Node *current,*temp;
	
	if(first == NULL) //if first node doesn't exist
	{
		first = new Node;
		first->Data = x;
		first->Next = NULL;
		End = first;
	}
	
	else // if node exists
	{
		current = new node;
		current->Data = x;
		current->Next = NULL;
		end->Next = current;
		end = current;
	}
	
}

void Node :: Display()
{
	Node*current = first;
	cout << "linked list" << " " << endl;
	while (current != NULL)
	{
		cout << current->Data <<" ";
		current = current->Next;
	}
}

int main()
{
	MakingList abc;
		int size, number;
	cout << "What is the size of list: ";
	cin >> size;
	for (int i = 1; i <= size; i++)
	{
		cout << "\nEnter Number: ";
		cin >> number;
		abc.Insert(number);
		abc.Display();
	}
}
