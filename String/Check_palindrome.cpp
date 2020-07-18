
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   string str,str1;
    int i,flag=0;
    cout<<"enter a string   ";
    cin>>str;
    
    for(i=0;str[i]!='\0';i++)
    {
        str1[i]=str[i];
    }
    str1[i]='\0';
    
    reverse(str.begin(), str.end());
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str1[i])
        {
            cout<<"not palindrome";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"string palindrome";
    return 0;
}
