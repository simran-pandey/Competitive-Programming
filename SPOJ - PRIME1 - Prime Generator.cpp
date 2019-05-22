#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==0||n==1)
    {
        return false;
    }
    
    if(n==2)
    {
        return true;
    }
    
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    
    return true;
}


int main() {

    int t,m,n;
    
    cin>>t;
    
    while(t--)
    {
        cin>>m>>n;
        
        for(int i=m;i<=n;i++)
        {
            if(isPrime(i))
            {
                cout<<i<<endl;
            }
        }
        
        cout<<"\n";
    }
    
    return 0;
}