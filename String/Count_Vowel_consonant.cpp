
#include <iostream>
#include <string.h>

using namespace std;

int main()
{   int i=0,vowel=0,cons=0;
    string str;
    cout<<"enter a string   ";
    getline(cin,str);
    
    while(str[i]!='\0')
    {
        
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E'  
            || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if(str[i]!=' ')
            cons++;
            
        i++;
    }
    cout<<"vowel    "<<vowel<<endl;
    cout<<"consonant    "<<cons<<endl;

    return 0;
}
