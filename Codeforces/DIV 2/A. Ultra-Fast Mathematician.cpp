#include<iostream>
#include<string>
using namespace std;

int main() 
{ 
    string n,m;
    
    cin>>n>>m;
    
    int size = n.length();
    
    for(int i=0;i<size;i++)
    {
        if(n[i]==m[i])
        {
            n[i]='0';
        }
        else
        {
            n[i]='1';
        }
    }

cout<<n<<endl;

return 0;

}
