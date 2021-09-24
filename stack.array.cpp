#include<iostream>

using namespace std;

int stack[50], n = 50, top = -1;

void push(int val) {
	if (top >= n - 1) {
		cout << "Stack Overflow" << endl;
	}
	else {
		top++;
		stack[top] = val;
	}
}
void print() {
	if (top > 0) {
		for (int i = top; i >= 0; --i)
		{
			cout << stack[i] << endl;
		}
	}
	else {
		cout << "Stack is empty" << endl;
	}
}
void pop() {
	if (top >= 0) {
		cout << "The number " << stack[top] << " is deleted" << endl;
		top--;
	}
}

int main() {
	int val;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	print();
	pop();
	print();
	
	return 0;
}