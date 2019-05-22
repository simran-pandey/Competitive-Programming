#23661107		2019-04-20 06:04:42	Factorial	accepted 0.08	15M	CPP

#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
	int testcases,input,zeroes,i,c;
	cin>>testcases;
	for(i=0;i<testcases;i++)
	{
	    zeroes=0;
	    cin>>input;
	    c=5;
	    while((input/c)>0)
	    { zeroes=zeroes+(input/c);
	      c=c*5;
	    }
	    cout<<zeroes<<"\n";
	}
 
} 
