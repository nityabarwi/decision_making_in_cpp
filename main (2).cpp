/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter marks obtained"<<endl;
    cin>>marks;
    if(marks<25)
    cout<<"grade=f"<<endl;
    else if(marks>=25&&marks<45)
    cout<<"grade=e"<<endl;
    else if(marks>=45&&marks<50)
    cout<<"grade=d"<<endl;
    else if(marks>=50&&marks<70)
    cout<<"grade=c"<<endl;
    else if(marks>=70&&marks<90)
    cout<<"grade=b"<<endl;
    else
    cout<<"you have secured A grade"<<endl;
    return 0;
}

