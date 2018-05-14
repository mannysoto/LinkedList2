// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

typedef struct Node{

	int m_intData;
	Node* nextNode;

}NodeType;

int _tmain(int argc, _TCHAR* argv[])
{
	NodeType* current = NULL;
	NodeType* next = NULL, *previous = NULL;
	NodeType* head = NULL, *tail = NULL;


	int i = 0, j=0;
	cout << "How many nodes for the list? ";
	cin >> j;
	int intData = 0;

	for(i=0;i<j;i++)
	{
		current = new NodeType;
		if (i == 0) {
			head = current;
		}
		else {
			previous->nextNode = current;
		}
		tail = current;
		cout << "enter a number: ";
		cin >> current->m_intData;
		previous = current;
		current->nextNode = NULL;

	}

	current = head;
	while (current != NULL){
		cout << "intData: " << current->m_intData << endl;
		cout << "current: " << current << endl;
		cout << "next Node: " << current->nextNode << endl;
		current = current->nextNode;

	}

	current = head;
	while (current != NULL){
		head = current->nextNode;
		current->nextNode = NULL;
		cout << "Deleting: " << current << endl;
		free(current);
		current = head;
	}


	return 0;
}

