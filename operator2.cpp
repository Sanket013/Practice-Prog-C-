#include<iostream>
using namespace std;

int main()
{
   int i=10,j=20,k;
   k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
     //10  //9    //19  //20  //9  //20  //10  //19
   cout<<"i: "<<i<<"\nj: "<<j<<"\nk: "<<k;
          //i=10    //j=20       //k=-20
   return 0;
    
}