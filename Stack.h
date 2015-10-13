#include <iostream>
using namespace std;

struct Node {
	int info;
	struct Node *next;
};

class Stack {
	struct Node *top;
	public:
		Stack();
		void push();
		void pop();
		void display();
};
