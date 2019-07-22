#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	
	int t,n,sum;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    int M[n], W[n];
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>M[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>W[i];
	    }
	    
	    sort(M, M+n);
	    sort(W, W+n);
	    
	    sum = 0;
	    
	    for(int i=0;i<n;i++)
	    {
	        sum = sum + (M[i]*W[i]);
	    }
	       cout<<sum<<endl;
	}
	return 0;
}
 