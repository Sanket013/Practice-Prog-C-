#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j;
    cin>>a>>b;

    for(j=a;j<=b;j++)     //For numbers a to b
    {
        for(i=2;i<j;i++)   //check prime number
        {
            if(j%i==0)
            {
                break;
            }
        }
      if(i==j)            //if loop terminate and counter is equal number print no.
      {
          cout<<i<<" ";
      }
    }
return 0;
}
