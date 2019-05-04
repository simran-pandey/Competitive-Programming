//53680759	May/03/2019 00:32UTC+5.5	clique	A - Young Physicist	GNU C++14	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;

int main() {
	int n,x,y,z,x_sum=0,y_sum=0,z_sum=0;
	cin>>n;
	while(n--)
	{
	    cin>>x>>y>>z;
	    x_sum += x;
	    y_sum += y;
	    z_sum += z;
	}
	if(x_sum==0 && y_sum==0 && z_sum==0)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	return 0;
}

