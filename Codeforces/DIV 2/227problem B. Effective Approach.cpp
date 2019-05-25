#include<iostream>
using namespace std;

int main()
{   
    int n,m,A[100001],a,b;
    
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        A[a]=i;
    }

    cin>>m;
    long long vasya=0, petya=0;
    
    while(m--)
    {
        cin>>b;
        vasya += A[b];
        petya += n-A[b]+1;
    }
    
    cout<<vasya<<" "<<petya<<endl;

    return 0;
}