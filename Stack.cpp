#include <iostream>
#include <stdlib.h>
#include "Stack.h"
using namespace std;

Stack::Stack() {
	top = NULL;
}

void Stack::push() {
	int data;
	struct Node *p;
	if ((p = (Node*)malloc(sizeof(Node))) == NULL) {
		cout << "Memory Exhausted";
		exit(0);
	}
	cout << "Enter a Number to insert:";
	cin >> data;
	p = new Node;
	p->info = data;
	p->next = NULL;
	if (top != NULL) {
		p->next = top;
	}
	top = p;
	cout << "\nNew item inserted" << endl;
}

void Stack::pop() {
	struct Node *temp;
	if (top == NULL) {
		cout << "\nThe Stack is Empty" << endl;
	}
	else {
		temp = top;
		top = top->next;
		cout << "\nThe value popped is " << temp->info << endl;
		delete temp;
	}
}

void Stack::display() {
	struct Node *p = top;
	if (top == NULL) {
		cout << "\nNothing to Display\n";
	}
	else {
		cout << "\nThe contents of Stack\n";
		while (p != NULL) {
			cout << p->info << endl;
			p = p->next;
		}
	}
}
