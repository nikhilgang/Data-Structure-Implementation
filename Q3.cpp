#include <iostream>

using namespace std;

int main()
{   int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>=i;k--)
                cout<<"  ";
        for(j=1;j<=5;j++)
        {
            if(i>=j)
            {
                cout<<"*   ";
            }
        }
        cout<<endl;
    }

    return 0;
}
