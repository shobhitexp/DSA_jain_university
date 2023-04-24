//Stack implementation using Arrays in C++
#include<iostream>
using namespace std;
int stack[100];
int n,i,top,x;
void push();
void pop();
void display();
int main()
{
 int ch;
 cout<<"Enter the number of elements in the stack";
 cin>>n;
 i=1;
 top=-1;
 while(i)
 {
 cout<<"Enter your choice (1-4)"<<endl;
 cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
 cin>>ch;
 switch(ch)
 {
 case 1:push();
 break;
 case 2:pop();
 break;
 case 3:display();
 break;
 case 4:i=0;
 break;
 default:cout<<"Wrong Choice!!!!"<<endl;
 break;
 }
 }
return 0;
}



void push()
{
 if(top>=n-1) // OVERFLOW i.e. if stack top goes beyond the size of the stack
 {
 cout<<"STACK IS OVERFLOW"<<endl;

 }
 else
 {

 cout<<"Enter the value to be added :";
 cin>>x;
 top=top+1; // while inserting the element increment the top and insert
 stack[top]=x;
 }
}
void pop()
{
 if(top<=-1) // Underflow i.e. stack is at index -1
 {
 cout<<"STACK IS UNDERFLOW"<<endl;
 }
 else
 {
 cout<<"Value :"<<stack[top]<<"GOT deleted."<<endl;
 top--;
 }
}
void display()
{
 if(top>=0)
 {
 cout<<"Elements in the stack are :";
 for(i=top;i>=0;i--)
 cout<<stack[i]<<" ";
 cout<<"\n";
 }
 else
 cout<<"STACK IS EMPTY."<<endl;
}
==================================================================================
                              infix to prefix
==================================================================================
 // C++ program to convert infix to prefix
#include <bits/stdc++.h>
using namespace std;

// Function to check if the character is an operator
bool isOperator(char c)
{
	return (!isalpha(c) && !isdigit(c));
}

// Function to get the priority of operators
int getPriority(char C)
{
	if (C == '-' || C == '+')
		return 1;
	else if (C == '*' || C == '/')
		return 2;
	else if (C == '^')
		return 3;
	return 0;
}

// Function to convert the infix expression to postfix
string infixToPostfix(string infix)
{
	infix = '(' + infix + ')';
	int l = infix.size();
	stack<char> char_stack;
	string output;

	for (int i = 0; i < l; i++) {

		// If the scanned character is an
		// operand, add it to output.
		if (isalpha(infix[i]) || isdigit(infix[i]))
			output += infix[i];

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (infix[i] == '(')
			char_stack.push('(');

		// If the scanned character is an
		// ‘)’, pop and output from the stack
		// until an ‘(‘ is encountered.
		else if (infix[i] == ')') {
			while (char_stack.top() != '(') {
				output += char_stack.top();
				char_stack.pop();
			}

			// Remove '(' from the stack
			char_stack.pop();
		}

		// Operator found
		else {
			if (isOperator(char_stack.top())) {
				if (infix[i] == '^') {
					while (
						getPriority(infix[i])
						<= getPriority(char_stack.top())) {
						output += char_stack.top();
						char_stack.pop();
					}
				}
				else {
					while (
						getPriority(infix[i])
						< getPriority(char_stack.top())) {
						output += char_stack.top();
						char_stack.pop();
					}
				}

				// Push current Operator on stack
				char_stack.push(infix[i]);
			}
		}
	}
	while (!char_stack.empty()) {
		output += char_stack.top();
		char_stack.pop();
	}
	return output;
}

// Function to convert infix to prefix notation
string infixToPrefix(string infix)
{
	// Reverse String and replace ( with ) and vice versa
	// Get Postfix
	// Reverse Postfix
	int l = infix.size();

	// Reverse infix
	reverse(infix.begin(), infix.end());

	// Replace ( with ) and vice versa
	for (int i = 0; i < l; i++) {

		if (infix[i] == '(') {
			infix[i] = ')';
		}
		else if (infix[i] == ')') {
			infix[i] = '(';
		}
	}

	string prefix = infixToPostfix(infix);

	// Reverse postfix
	reverse(prefix.begin(), prefix.end());

	return prefix;
}

// Driver code
int main()
{
	string s = ("x+y*z/w+u");

	// Function call
	cout << infixToPrefix(s) << std::endl;
	return 0;
}

==================================================================================
                              Infix to postfix
==================================================================================


// C++ code to convert infix expression to postfix

#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s)
{

	stack<char> st;
	string result;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (c == '(')
			st.push('(');

		// If the scanned character is an ‘)’,
		// pop and add to output string from the stack
		// until an ‘(‘ is encountered.
		else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}

		// If an operator is scanned
		else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}

// Driver code
int main()
{
	string exp = "a+b*(c^d-e)^(f+g*h)-i";

	// Function call
	infixToPostfix(exp);
	
	return 0;
}
