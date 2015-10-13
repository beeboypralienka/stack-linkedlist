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
		cout << "Maaf, memory habis!";
		exit(0);
	}
	cout <<endl<<endl<<"Masukkan data untuk di-push:";
	cin >> data;
	p = new Node;
	p->info = data;
	p->next = NULL;
	if (top != NULL) {
		p->next = top;
	}
	top = p;
	//cout << "\nNew item inserted" << endl;
}

void Stack::pop() {
	struct Node *temp;
	if (top == NULL) {
		cout << "\n\nMaaf, tidak dapat melakukan pop! Karena tidak ada data pada stack!" << endl;
	}
	else {
		temp = top;
		top = top->next;
		cout << "\n\nData yang di-pop adalah " << temp->info << endl;
		delete temp;
	}
}

void Stack::display() {
	struct Node *p = top;
	if (top == NULL) {
		cout << "\n\nMaaf, saat ini tidak ada data pada stack!\n";
	}
	else {
		cout << "\n\nData stack saat ini adalah: \n";
		while (p != NULL) {
			cout << p->info << endl;
			p = p->next;
		}
	}
}
