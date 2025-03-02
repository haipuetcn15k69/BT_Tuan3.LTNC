/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{   int ans;
    int Number_of_lives=10;
     int Money=1000;
    int psedoukey=rand()%100+1;
    bool isKey=true;
    do{ Number_of_lives--;
        Money-=100;
        cin>>ans;
        if(ans>psedoukey) cout<<"Your number is too big"<<endl;
        else if(ans<psedoukey) cout<<"Your number is too small"<<endl;
        else {
            cout<<"Congralution,You win "<<Money<<"$!";isKey=false;
        }
    }
     while(isKey==true &&Number_of_lives>0);
     if(isKey) cout<<"You lost!";
    return 0;
}