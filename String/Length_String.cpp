
#include <iostream>

using namespace std;

int main()
{   int i=0;
    string str;
    cout<<"enter a string   ";
    cin>>str;
    
    while(str[i]!='\0')
    {
        i++;
    }
    cout<<"length of string "<<i;

    return 0;
}
