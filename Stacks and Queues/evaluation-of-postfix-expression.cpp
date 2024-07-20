//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        for(char c:S){
            if(isdigit(c)){
                st.push(c-'0');
            }
            else{
                int y=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                switch(c){
                    case '+':
                    st.push(x+y);
                    break;
                    case '-':
                    st.push(x-y);
                    break;
                    case '*':
                    st.push(x*y);
                    break;
                    case '/':
                    st.push(x/y);
                    break;
                }
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends
