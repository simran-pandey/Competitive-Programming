//53745628	May/04/2019 22:04UTC+5.5	clique	A - Word Capitalization	GNU C++14	Accepted	60 ms	0 KB

#include <iostream>
using namespace std;
int main()
{
    string str;
    char c;
    
    cin>>str;
    c=str[0];
    
    if (islower(c))
    {
        str[0]=toupper(c);
    }
cout<<str<<endl;
}
  
