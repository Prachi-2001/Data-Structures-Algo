#include<bits/stdc++.h> 
using namespace std; 
  
//Function to return precedence of operators 
int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
  
// The main function to convert infix expression 
//to postfix expression 
void infixToPostfix(string s) 
{ 
    std::stack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
        // If the scanned character is an operand, add it to output string. 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
        {
            cout << "isOperator" << endl;
            ns+=s[i]; 
        } 
        
  
        // If the scanned character is an ‘(‘, push it to the stack. 
        else if(s[i] == '(') {
            st.push('('); 
            cout << "Open Parentheses" << endl;

        }
          
        
          
        // If the scanned character is an ‘)’, pop and to output string from the stack 
        // until an ‘(‘ is encountered. 
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
            cout << "Closed Parentheses" << endl;
        } 
          
        //If an operator is scanned 
        else{ 
            cout << "TOP: " << st.top() << endl;
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
                cout << "Precedence" << endl;
            } 
            st.push(s[i]); 
            cout << "else" << endl;
        } 
  
    } 
    //Pop all the remaining elements from the stack 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
      
    cout << ns << endl; 
  
} 
  
//Driver program to test above functions 
int main() 
{ 
    string exp = "a+b*(c^d-e)^(f+g*h)-i"; 
    infixToPostfix(exp); 
    return 0; 
} 