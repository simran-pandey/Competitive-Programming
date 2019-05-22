#include<iostream>
using namespace std;

int main()
{
    int n,A[100],min,max,swap=0,min_i=0,max_i=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    max=A[0];
    min=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
            max_i = i;
        }
        
        if(A[i]<=min)
        {
            min = A[i];
            min_i = i;
        }
    }
    
    if(max_i>min_i)
    {
        swap = (max_i-1)+(n-min_i)-1;
        cout<<swap<<endl;
    }
    else
    {
        swap = (max_i-1)+(n-min_i);
        cout<<swap<<endl;
    }
}


