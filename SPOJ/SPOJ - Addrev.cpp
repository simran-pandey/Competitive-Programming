#include <iostream>
using namespace std;
int reverse(int i)
{int rn = 0,rm;
    while(i!=0)
        {
            rm=i%10;
            rn=rn*10+rm;
            i/=10;
        }
        return rn;
}
int main() 
{
    int n,a,b,reverse_a,reverse_b,reverse_sum,rev;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        reverse_a=reverse(a);
        reverse_b=reverse(b);
        reverse_sum=reverse_a+reverse_b;
        rev=reverse(reverse_sum);
        cout<<rev<<endl;
    }
    
}
