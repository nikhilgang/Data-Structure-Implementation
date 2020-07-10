
#include <iostream>
#include <string.h>

using namespace std;

int main()
{   int i=0,word=1;
    string str;
    cout<<"enter a string   ";
    getline(cin,str);
    
    while(str[i]!='\0')
    {
        
        if(str[i]==' ' && str[i-1]!=' ')
            word++;
            
        i++;
    }
    cout<<"total words in string    "<<word;
    return 0;
}
