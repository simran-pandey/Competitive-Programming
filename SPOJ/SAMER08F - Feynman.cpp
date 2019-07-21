#include <iostream>
using namespace std;

int main() {

    int n,x;
    
    cin>>n;
    
    do
    {
        x=(n*(n+1)*((2*n)+1))/6;
        cout<<x<<endl;
        
        cin>>n;
    }while(n!=0);
    
	return 0;
}
