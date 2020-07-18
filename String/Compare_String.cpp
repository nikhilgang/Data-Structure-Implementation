
#include <iostream>
#include <string>
using namespace std;

int main()
{   string str,str1;
    int flag=0,i;
    cout<<"enter a string  1 ";
    cin>>str;
    cout<<"enter a string  2 ";
    cin>>str1;
    
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=str1[i])
        {
            cout<<"different strings";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"same strings";
    
    
    return 0;
}
