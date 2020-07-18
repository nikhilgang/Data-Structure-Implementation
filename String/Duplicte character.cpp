
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   string str;
    int i;
    int h[26]={0};
    cout<<"enter a string   ";
    cin>>str;
    
    for(i=0;str[i]!='\0';i++)
    {
        h[str[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(h[i]>1)
        {
            cout<<"character    "<<char(i+97)<<endl;
            cout<<"no of times  "<<h[i]<<endl;
        }
    }
    return 0;
}
