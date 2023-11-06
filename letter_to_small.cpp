/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
char lettertosmall(char m)
{
    if(m>='A' && m<='Z')
    {
        char temp;
        temp=m-'A'+'a';
        m=temp;
    }
    return m;
    
}

int main()
{
    cout<<"Hello World";
    string s;
    s="ABCD";
    cout<<s;
    int i=0;
    while(s[i]!='\0')
    {
        s[i]=lettertosmall(s[i]); 
        i++;
    }
    cout<<s;

    return 0;
}