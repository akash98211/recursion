#include <bits/stdc++.h>
using namespace std;
int  GCD(int  a,int b)
{
  if (a==0)
  return b;
  
  if (b==0)
  return a;
  
  if (a==b)
  return b;
  
  if(a>b)
  return GCD(a-b,b);
  else
  {
    return GCD(a,b-a);
  }
} 
int main()
{
  int t;cin>>t;
  while(t--)
  { int m,n;cin>>m>>n;
  
  cout<<GCD(m,n)<<endl;
  
  }
 return 0;
}