#include <iostream>
using namespace std;

int main()
{
    string str;
    int flag = 0;
    
    cin>>str;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}