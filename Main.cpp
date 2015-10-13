#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
	Stack s;
	int choice;
	do {
		cout << "\n---------------------------------------------------------" << endl;
		cout << "Stack Linked list:" << endl;
		cout << "\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n";
		cout << "Enter your choice:";
		cin >> choice;
		switch (choice) {
		case 1:
			s.push();
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.display();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Invalid Choice";
			break;
		}
	}
	while (choice);
	return 0;
}
