#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    str3 = str1;
    cout << setw(8) << str3 << endl;
    str3 = str1 + str2;
    cout << str3 << endl;
    int len = str3.size();
    cout << "Size of str3: " << len << endl;
    return 0;
}