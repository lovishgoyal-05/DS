#include <iostream>
#include <stack>
using namespace std;

int main() {
	string s;
	cout << "Enter expression: ";
	cin >> s;
	stack<char> st;
	bool bal = true;
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='(') 
        {
            st.push('(');
        }
		else if(s[i]==')') 
        {
			if(st.empty()) 
            {
                bal=false;
                break; 
            }
			st.pop();
		}
	}
	if(!st.empty()) bal=false;
	if(bal) cout << "Balanced" << endl;
	else cout << "Not Balanced" << endl;
	return 0;
}
