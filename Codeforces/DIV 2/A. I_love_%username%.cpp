#include <iostream>
using namespace std;

int main() {
	
	int n,start,max=0,min=0,a,count=0;
	
	cin>>n;
	cin>>start;
	max = start;
	min = start;
	
	for(int i=1;i<n;i++)
	{
	    cin>>a;
	    
	    if(a>max)
	    {
	        max=a;
	        count++;
	    }
	    if(a<min)
	    {
	        min=a;
	        count++;
	    }
	}
	
	cout<<count<<endl;
	return 0;
}
