#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    if(n%2==0&&n%3==0)
    {
        cout<<"Number divisible by both 2,3";
    }
    
    
    else if(n%2==0)
    {
            cout<<"Number divisible by 2";

    }
    else if(n%3==0)
    {
            cout<<"Number divisible by3";
    }
    
    else
    {
        cout<<"Number Not divisible by 2,3";
    }
    return 0;
}