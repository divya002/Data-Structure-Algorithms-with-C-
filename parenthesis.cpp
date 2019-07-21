#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<char> s;
    int n;
    cout << "Enter the size of input ";
       cin >> n;
    char input[n+1];
    cout << "Enter input parenthesis ";
    cin >> input;
    cout << "Printing Input ";
    cout << input << endl;
    for (int i = 0; i < n; i++)
    {
       
        if (input[i] == '{' || input[i] == '(' || input[i] == '[')
        {
            s.push(input[i]);
        }
        else if (input[i] == '}' || input[i] == ')' || input[i] == ']')
        {
            if (!s.empty())
            {
                if (input[i] == '}')
                {
                    if (s.top() == '{')
                    {
                        s.pop();
                    }
                    else
                    {
                        cout << "false1" << endl;
                        return 0;
                    }
                }
                if (input[i] == ')')
                {
                    if (s.top() == '(')
                    {
                        s.pop();
                    }
                    else
                    {
                        cout << "false2" << endl;
                        return 0;
                    }
                }
                if (input[i] == ']')
                {
                    if (s.top() == '[')
                    {
                        s.pop();
                    }
                    else
                    {
                        cout << "false3" << endl;
                        return 0;
                    }
                }
            }
            else
            {
                cout << "false4" << endl;
                return 0;
            }
        }
        else
        {
            cout << "Invalid" << endl;
            return 0;
        }
    }
    if(s.empty()){
        cout<<"Valid"<<endl;
        return 1;
    }
    else{
        cout<<"Invalid Parenthesis"<<endl;
        return 0;
    }
}