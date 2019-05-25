#include <iostream>
using namespace std;

int main() {
	
	int n,a,b,c=0,min=0;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	    cin>>a;
	    cin>>b;
	    
	    c-=a;
	    c+=b;
	    
	    if(c>min)
	    {
	        min = c;
	    }
	}   

cout<<min<<endl;
	
	return 0;
}
