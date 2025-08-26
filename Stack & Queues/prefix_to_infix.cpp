#include <bits/stdc++.h>
using namespace std;
string prefixToInfix(string str)
{
    int i = str.length()-1;
    stack<string> st;
    while (i >= 0)
    {
        if (isalnum(str[i]))
        {
            string op(1, str[i]); // convert char into string
            st.push(op);
        }
        else // operator
        {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string ans = "(" + t1 + str[i] + t2 + ")";
            st.push(ans);
        }
        i--;
    }
    return st.top();
}
int main()
{
        string str = "+*pq-mn";
    cout << "Prefix Expression : " << str << endl;
    cout << "Infix Expression : " << prefixToInfix(str) << endl;
    return 0;
}