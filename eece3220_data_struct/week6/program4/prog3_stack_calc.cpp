/*** TYPE YOUR MAIN PROGRAM HERE--THE NODE AND STACK CLASSES ARE PROVIDED FOR YOU,
 *    AND YOU SHOULDN'T NEED TO MODIFY EITHER OF THEM ***/
#include<iostream>
using namespace std;
#include<cctype>
#include<math.h>
#include "Stack.h"

bool isOperator(char c)
{
    if(c=='^' || c =='*'|| c=='/' || c=='+' || c=='-')
    return true;
    else
    return false;
}

int operatorPriority(char c)
{
    if(c=='^')
    return 3;
    else if (c == '*' || c == '/')
    return 2;
    else if (c == '+' || c == '-')
    return 1;
    else
    return -1;
}

string Infix2Postfix(Stack<char> stack_exp, string infix)
{
    string postfix;
    for(int i=0; i<infix.length(); ++i)
    {
        if(isdigit(infix[i]))
        postfix += infix[i];
        else if(infix[i]=='(')
        stack_exp.push(infix[i]);
        else if(infix[i]==')')
        {
            while((stack_exp.getTop()!='(') && (!stack_exp.empty()))
            {
                postfix += stack_exp.getTop();
                stack_exp.pop();
            }
            if(stack_exp.getTop()=='(')
            {
                stack_exp.pop();
            }
        }
        else if(isOperator(infix[i]))
        {
            if(stack_exp.empty())
            {
                stack_exp.push(infix[i]);
            }
            else
            {
                if(operatorPriority(infix[i])>operatorPriority(stack_exp.getTop()))
                {
                    stack_exp.push(infix[i]);
                }
                else if((operatorPriority(infix[i])==operatorPriority(stack_exp.getTop())) && (infix[i]=='^'))
                {
                    stack_exp.push(infix[i]);
                }
                else
                {
                    while((!stack_exp.empty())&&(operatorPriority(infix[i])<=operatorPriority(stack_exp.getTop())))
                    {
                        postfix += stack_exp.getTop();
                        stack_exp.pop();
                    }
                    stack_exp.push(infix[i]);
                }
            }
        }
    }
    while(!stack_exp.empty())
    {
        postfix += stack_exp.getTop();
        stack_exp.pop();
    }
    return postfix;
}

int postfix2numCalc(string postfix)
{
    Stack <int> sum;
    int post_length = postfix.length();
    for (int i = 0; i < post_length; i++)
    {
        if ( postfix[i] >= '0' &&  postfix[i] <= '9')
        {
            sum.push( postfix[i] - '0');
        }
        else
        {
            int a = sum.getTop();
            sum.pop();
            int b = sum.getTop();
            sum.pop();
            if(postfix[i]=='^')
            sum.push(pow(b,a));
            else if(postfix[i]=='*')
            sum.push(b*a);
            else if(postfix[i]=='/')
            sum.push(b/a);
            else if(postfix[i]=='+')
            sum.push(b+a);
            else if(postfix[i]=='-')
            sum.push(b-a);
        }
    }
    return sum.getTop();
}

int main(){
    string infix, postfix;
    Stack <char> stack_exp;
    do{
        cout << "Enter expression (or exit to end):";
        getline(cin,infix);
        if(infix.at(0) == '(' || isdigit(infix.at(0)))
        {
            //cout << "------BEGIN------" << endl;
            postfix = Infix2Postfix(stack_exp, infix);
            cout << "Expression: " << infix << endl;
            cout << "Postfix form: " << postfix << endl;
            cout << "Results: " << postfix2numCalc(postfix)<<endl;
            //cout << "-------END-------" << endl;
        }
        else if(infix=="exit")
        break;
        else
        cout << "Invalid expression..." << endl;
    }while (infix != "exit");
    cout << "Exiting the program..." << endl;
    
    return 0;
}