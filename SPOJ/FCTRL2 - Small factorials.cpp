#include <iostream>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {   
        int n,A[200],m=0,rem,flag,i=0;
        
        cin>>n;
        flag=n;
        
        while(flag!=0)
        {
            rem = flag%10;
            A[i] = rem;
            flag = flag/10;
            i++;
            m++;
        }
        
        int temp,x=0,j=0;
        for(int i=2;i<n;i++)
        {
            temp=0;
            for(j=0;j<m;j++)
            {
                x = A[j]*i+temp;
                A[j] = x%10;
                temp = x/10;
            }
            
            while(temp!=0)
            {  
                A[j]=temp%10;
                temp = temp/10;
                j++;
                m++;
            }
        }
        
        for(int i=m-1;i>=0;i--)
        {
            cout<<A[i];
        }
        
        cout<<"\n";
    }
    
    return 0;
}