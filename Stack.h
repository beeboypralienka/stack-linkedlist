#include <iostream>
using namespace std;

/* Fachrul Pralienka Bani Muhamad */
/*           5115201044           */

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
