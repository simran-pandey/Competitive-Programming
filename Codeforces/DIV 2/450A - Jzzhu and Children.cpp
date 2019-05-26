#include<iostream>
#include<queue>
using namespace std;

int main()
{   
    int n,m;
    queue<int> x,y;
    
    cin>>n>>m;
    
    int A[n+10];
    
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
    }
    
    for(int i=1;i<=n;i++)
    {
        x.push(A[i]);
        y.push(i);
    }
    
    while(!x.empty())
    {
        if(x.front()<=m)
        {
            x.pop();
            y.pop();
        }
        
        else
        {   
            x.push(x.front()-m);
            y.push(y.front());
            x.pop();
            y.pop();
        }
    }
        int ans = y.back();
        cout<<ans<<endl;
        
    return 0;
}