//53681079	May/03/2019 00:47UTC+5.5	clique	B - Queue at the School	GNU C++14	Accepted	60 ms	0 KB
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
	int n,t;
	string str;
	
	cin>>n>>t;
	cin>>str;
	
	int str_len = str.length();
	
	while(t--)
	{
	    bool imm_swapped = false;
	    for(int j=0;j<str_len-1;j++)
	    {
	        if(str.at(j)== 'B' && str.at(j+1) == 'G' && !imm_swapped)
	        {
	            str.at(j)='G';
	            str.at(j+1) = 'B';
	            imm_swapped = true;
	        }
	        else 
	        {
	            imm_swapped = false;
	        }
	    }
	}  
cout<<str<<endl;
}
