/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cin>>num1>>op>>num2;
    switch(op)
    {
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        case '/':
        if(!num2) cout<<"Invalid Operator";
        else cout<<num1/num2;
        break;
        default:
        if(!num2) cout<<"Invalid Operator";
        else cout<<num1%num2;
        break;
    }

    return 0;
}