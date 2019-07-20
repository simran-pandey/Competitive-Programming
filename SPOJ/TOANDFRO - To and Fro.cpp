#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    string str;
    cin>>n;
    
    while(n)
    {
        cin>>str;
        
        int len = str.size();
        int m = len/n;
        
        char A[m][n];
        
        for(int i =0; i<m;i+=2)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=str[i*n+j];
            }
        }
        
        for(int i =1; i<m;i+=2)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=str[i*n+n-j-1];
            }
        }
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<A[j][i];
            }
        }
        
        cout<<endl;
    
        cin>>n;
    }
	return 0;
}
