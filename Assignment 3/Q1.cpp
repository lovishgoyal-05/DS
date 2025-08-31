
#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int ch, val;
	do {
		cout << "\n1. Push";
		cout << "\n2. Pop";
		cout << "\n3. isEmpty";
		cout << "\n4. isFull";
		cout << "\n5. Display";
		cout << "\n6. Peek";
		cout << "\n0. Exit";
		cout << "\nEnter choice: ";
		cin >> ch;
		switch(ch) {
			case 1:
				cout << "Enter value: ";
				cin >> val;
				s.push(val);
				break;
			case 2:
				if (s.empty())
					cout << "Stack is empty\n";
				else {
					cout << "Popped: " << s.top() << endl;
					s.pop();
				}
				break;
			case 3:
				if (s.empty())
					cout << "Stack is empty\n";
				else
					cout << "Stack is not empty\n";
				break;
			case 4:
				cout << "No isFull for STL stack\n";
				break;
			case 5:
				if (s.empty())
					cout << "Stack is empty\n";
				else {
					stack<int> t = s;
					cout << "Stack: ";
					int a[100], i = 0;
					while (!t.empty()) {
						a[i++] = t.top();
						t.pop();
					}
					for (int j = i - 1; j >= 0; j--)
						cout << a[j] << " ";
					cout << endl;
				}
				break;
			case 6:
				if (s.empty())
					cout << "Stack is empty\n";
				else
					cout << "Top: " << s.top() << endl;
				break;
		}
	} while (ch != 0);
	return 0;
}
