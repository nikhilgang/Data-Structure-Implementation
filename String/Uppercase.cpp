
#include <iostream>

using namespace std;

int main()
{   int i=0;
    string str;
    cout<<"enter a string   ";
    cin>>str;
    
    while(str[i]!='\0')
    {
        
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
       
        i++;
    }
    cout<<str;

    return 0;
}
