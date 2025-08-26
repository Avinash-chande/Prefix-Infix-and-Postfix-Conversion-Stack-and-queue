#include <bits/stdc++.h>
using namespace std;

string postfixToInfix(string str)
{
    stack<string> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (isalnum(str[i]))  // operand (A-Z, a-z, 0-9)
        {
            string op(1, str[i]);  // convert char to string
            st.push(op);
        }
        else  // operator
        {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            string ans = "(" + t2 + str[i] + t1 + ")";
            st.push(ans);
        }
    }
    return st.top();
}

int main()
{
    string str = "AB-DE+F*/";
    cout << "Postfix Expression : " << str << endl;
    cout << "Infix Expression : " << postfixToInfix(str) << endl;
    return 0;
}
