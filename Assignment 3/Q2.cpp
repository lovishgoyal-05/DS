#include <iostream>
#include <stack>
using namespace std;

int main() {
	string s = "DataStructure";
	stack<char> st;
	for(int i=0; i<s.length(); i++) st.push(s[i]);
	cout << "Original: " << s << endl;
	cout << "Reversed: ";
	while(!st.empty()) {
		cout << st.top();
		st.pop();
	}
	cout << endl;
	return 0;
}
