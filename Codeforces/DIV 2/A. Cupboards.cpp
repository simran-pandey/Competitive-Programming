#include <iostream>
using namespace std;

int main() {
	
	int n,l,r,sum_l=0,sum_r=0,count=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	    cin>>l;
	    sum_l+=l;
	    
	    cin>>r;
	    sum_r+=r;
	}
	    
	count = min(sum_l,n-sum_l)+min(sum_r,n-sum_r);
	cout<<count<<endl;
	return 0;
}
