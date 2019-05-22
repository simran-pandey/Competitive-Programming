#include<iostream>
using namespace std;

int main()
{
    int n;
    float P[100],P_total=0.0;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>P[i];
    }
    for(int i=0;i<n;i++)
    {
        P_total += P[i]/n;
    }
    
    cout<<P_total<<endl;

return 0;
}


