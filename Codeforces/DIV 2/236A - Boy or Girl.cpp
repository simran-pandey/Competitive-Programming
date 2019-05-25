#include <iostream>
using namespace std;

int main()
{
    string str;
    int count=0,distinct=0;
    
    cin>>str;
    
    int len = str.length();
    
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
                break;
            }
        }
    }
    
    distinct = len-count;
    
    if(distinct%2==1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    
    else
    {
        cout<<"CHAT WITH HER!";
    }

    return 0;
}