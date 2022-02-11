#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num>0 && num%2==0)
    {
        cout<<"Even Number";
    }
    else
    {
        cout<<"Odd Number";
    }
    return 0;
}