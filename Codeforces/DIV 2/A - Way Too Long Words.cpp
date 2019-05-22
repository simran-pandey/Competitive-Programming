54394037	May/19/2019 23:58UTC+5.5	clique	A - Way Too Long Words	GNU C++14	Accepted	31 ms	0 KB

#include <iostream>
using namespace std;

int main() {
	
	int n;
	string str;
	
	cin>>n;
	
	while(n--)
	{
	    cin>>str;
	    int len = str.length();
	    
	    if(len>10)
	    {
	        cout<<str[0]<<len-2<<str[len-1]<<endl;

	    }
	    
	    else
	    {
	        cout<<str<<endl;
	    }
	}
    
return 0;
    
}
