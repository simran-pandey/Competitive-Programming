//54017079	May/12/2019 12:55UTC+5.5	clique	A - Nearly Lucky Number	GNU C++14	Accepted	62 ms	0 KB

#include<iostream>
using namespace std;

int main() 
{ 
    string str;
    int counter=0;
    
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '4' || str[i] == '7')
        {
            counter++;
        }
    }
    
    if(counter==4||counter==7)
    {
        cout<<"YES";
    }
    
    else
    {
        cout<<"NO";
    }
    
return 0;
}
