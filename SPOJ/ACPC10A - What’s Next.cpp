#include <iostream>
using namespace std;
 
int main() {
    
    int a,b,c,x;
    
	cin>>a>>b>>c;
	
    while(a!=0 && b!=0 && c!=0)
    {
        if((b-a)==(c-b))
        {   x=b-a;
            cout<<"AP"<<" "<<c+x<<endl;
        }
        
        else if((b/a)==(c/b))
        {   x=b/a;
            cout<<"GP"<<" "<<c*x<<endl;
        }
        
        cin>>a>>b>>c;
        
    }
 
	return 0;
}