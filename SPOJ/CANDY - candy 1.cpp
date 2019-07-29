#include <iostream>
using namespace std;

int main() {
    
	int n, min;
    cin>>n;
    
    while(n!=-1)
    
    { 
        int A[n], sum = 0;
        for(int i=0;i<n;i++)
            {
                cin>>A[i];
                sum = sum + A[i];
            }
    
    	int mean = sum/n;
    	int min = 0;
	
        if(sum%n==0)
        {
            for(int i =0;i<n;i++)
            {	
    			if (A[i]<mean)
    			{
    			    min = min + (mean-A[i]);
    			}
                    
            }
            
            cout<<min<<endl; 
            
        }
        
        else
        {
            cout<<"-1"<<endl;
        }
        
        cin>>n;
        
    }
    	return 0;
}
