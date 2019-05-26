#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{   
    int n,A[1001],x,y,diff=0;
    
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    
    int min = abs(A[1]-A[n]);
    x=1;
    y=n;
    
    for(int i=1;i<n;i++)
    {
        diff = abs(A[i]-A[i+1]);
        
        if(diff<min)
        {   
            min=diff;
            x=i;
            y=i+1;
        }
    }
    
    cout<<x<<" "<<y;
    
    return 0;
}