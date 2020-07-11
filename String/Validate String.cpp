
#include <iostream>

using namespace std;

int main()
{   int i=0,k=1;
    string str;
    cout<<"enter a string   ";
    cin>>str;
    
    while(str[i]!='\0')
    {
        
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>=48 && str[i]<=57)))
        {
          k=0;
          break;
        }
        i++;
    }
    if(k==0)
        cout<<"Invalid string!!!";
    else
        cout<<"Valid String";
        
    cout<<"\n"<<str;

    return 0;
}
