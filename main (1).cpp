/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int netamo, purchase;
    cout<<"enter purchase amount:"<<endl;
    cin>>purchase;
    if(purchase>1000)
    {
        netamo=purchase-100;
        cout<<"netamount after discount is"<<netamo<<endl;
    }
    else
    {
        cout<<"netamountt is"<<purchase<<endl;
    }
    return 0; 
}