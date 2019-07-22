#include <iostream>
using namespace std;
 
int main() {
    
    int a,b,c,x,y;
    
	cin>>a>>b>>c;
	
    while(a||b||c)
    {   
       
        if(b-a==c-b)
        {   
            cout<<"AP"<<" "<<c+(b-a)<<endl;
        }
        
        else 
        {   
            cout<<"GP"<<" "<<c*(c/b)<<endl;
        }
 
        cin>>a>>b>>c;
        
    }
 
	return 0;
} 
