
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   string str,str1;
    int i,flag,j;
    int h[26]={0};
    cout<<"enter 1st string   ";
    cin>>str;
    cout<<"enter 2nd string   ";
    cin>>str1;
    
    for(i=0;str[i]!='\0';i++)
    {flag=0;
        for(j=0;str1[j]!='\0';j++)
        {
            if(str[i]==str1[j])
                flag=1;
        }
        if(flag==0)
            {cout<<"Not Anagram";
            break;}
    }
    if(flag!=0)
        cout<<"string is Anagram";
        
    return 0;
}
