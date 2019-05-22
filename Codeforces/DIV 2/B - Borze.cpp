//53733401	May/04/2019 13:47UTC+5.5	clique	B - Borze	GNU C++14	Accepted	30 ms	0 KB

#include<iostream>
using namespace std;
int main() 
{
	string str;
	int x[3],i=0;
	cin>>str;
	
	while (i<str.length())
	{
	    if(str[i]=='.')
	      {
	        cout<<"0";
	      }
	    else if(str[i]=='-' && str[i+1]== '.')
	       {
	        cout<<"1";
	            ++i;
	        }
	    else if(str[i]=='-' && str[i+1]=='-')
	        {
	            cout<<"2";
	            ++i;
	        }
	        ++i;// all the statements of the while loop will executed
    }
}
