#include<iostream>
#include<stack>
using namespace std;

void check(string input){
    stack<char> s;
    char top;
    for(char c :input)
    {
       if(c == '('|| c == '{' || c == '[')
        {
            s.push(c);
        }
        else{
            if(s.empty())
            {
                cout<<"Invalid parenthesis";
                return;
            }
            else{
                top=s.top();
                if(c==')' && top == '(' || c== '}' && top == '{'|| c== ']' && top ==   '[')
                {
                    s.pop();
                }
                else{
                    cout<<"Invalid parenthesis";
                    return;
                }
            }
        }
    }
    if(s.empty())
        cout<<"Valid parenthesis";
    else
        cout<<"Invalid parenthesis";
    
}
int main(){
     string input=" }";
     check(input);
     return 0 ;
}
