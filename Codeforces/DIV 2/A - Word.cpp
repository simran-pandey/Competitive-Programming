//53741564	May/04/2019 19:39UTC+5.5	clique	A - Word	GNU C++14	Accepted	62 ms	0 KB
#include<iostream>
using namespace std;

int main() 
{
  string s;
  char c;
  int str,upper=0,lower=0;
  
  cin>>s;
  str=s.length();
  
  for(int i=0;i<str;i++)
  {
      c=s[i];
      if(isupper(c))
      {
          upper++;
      }
      else
      {
          lower++;
      }
  }
  
  if(upper>lower)
  {
      for(int i=0;i<str;i++)
      {
          c=s[i];
          s[i]=toupper(c);
      }
    cout<<s;
  }
  
  else if (upper<lower)
  {
      for(int i=0;i<str;i++)
      {
          c=s[i];
          s[i]=tolower(c);
      }
  cout<<s;
  }
  
  else
  {
      for(int i=0;i<str;i++)
      {
          c=s[i];
          s[i]=tolower(c);
      }
   cout<<s;
  }
}
