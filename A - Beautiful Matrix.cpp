//53674635	May/02/2019 20:34UTC+5.5	clique	A - Beautiful Matrix	GNU C++14	Accepted	30 ms	0 KB
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
 int A[5][5],i,j,pos_i,pos_j,min_move;
 
 for(i=0;i<5;i++)
 {
     for(j=0;j<5;j++)
     {   
         cin>>A[i][j];
     
         if(A[i][j]==1)
         {
             pos_i = i;
             pos_j = j;
         }
     }
 }
 
min_move = abs(pos_i-2)+abs(pos_j-2);
cout<<min_move<<endl; 
}
