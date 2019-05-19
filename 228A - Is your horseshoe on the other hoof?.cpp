#54394327	May/20/2019 00:13UTC+5.5	clique	A - Is your horseshoe on the other hoof?	GNU C++14	Accepted	92 ms	0 KB

#include <iostream>
using namespace std;

int main() {

    int s1,s2,s3,s4,count=0;
    
    cin>>s1>>s2>>s3>>s4;
    
    if(s1==s2 || s1==s3 || s1==s4)
    {
        count++;
    }
    
    if(s2==s3 || s2==s4)
    {
        count++;
    }
    
    if(s3==s4)
    {
        count++;
    }
    
cout<<count<<endl;
    
return 0;
    
}
