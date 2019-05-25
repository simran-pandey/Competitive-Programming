#include<iostream>
using namespace std;

int main()
{   
    int n,x=0;
    string stmt;
    
    cin>>n;
    
    while(n--)
    {   
        cin>>stmt;
        
        if(stmt[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    
    cout<<x<<endl;

    return 0;
}