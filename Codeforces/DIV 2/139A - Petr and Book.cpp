#include<iostream>
using namespace std;

int main()
{   
    int n,A[10];
    
    cin>>n;
    
    for(int i=1;i<=7;i++)
    {
        cin>>A[i];
    }
        
    for(int i=1;i<=7;i++)
    {
        n-=A[i];
        
        if(n<=0)
        {
            cout<<i;
            break;
        }
        
        if(i==7)
        {
            i=0;
        }
    }
    return 0;
}