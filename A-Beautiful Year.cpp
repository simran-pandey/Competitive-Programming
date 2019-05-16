//53787464	May/05/2019 16:30UTC+5.5	clique	A - Beautiful Year	GNU C++14	Accepted	60 ms	0 KB

#include<iostream>
using namespace std;

int main() 
{ 
    int y, a, b, c, d;
    
    cin>>y;
    
    while(true)
    {
        y=y+1;
        a = y/1000;
        b = y/100%10;
        c = y/10%10;
        d = y%10;
        
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }
    cout<<y<<endl;
}
