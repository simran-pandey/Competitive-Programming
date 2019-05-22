#54393815	May/19/2019 23:48UTC+5.5	clique	A - Helpful Maths	GNU C++14	Accepted	62 ms	0 KB

#include <iostream>
using namespace std;

int main() {
	
	string str;
	
	cin>>str;
	
	int len = str.length();
	
    for(int i = 0; i<len; i+=2)
    {
        for (int j= i+2; j<len; j+=2)
        {
            if(str[j]<str[i])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    
    cout<<str<<endl;
    
return 0;
    
}
