#include <bits/stdc++.h>
using namespace std;
bool ispal(string &str, int s, int e)
{
  if(s==e)
  return true;
   if(str[s]!=str[e])
   return false;
   
   if(s<e+1)
   return ispal(str,s+1,e-1);                                                                                         
  
  return true;
}

bool palindrome(string& str)
{
  int n=str.length();
  if(n==0)
  return true;
  
  return(str,0,n-1);
}
  
  int main()
  {
   int t;cin>>t;
   while(t--)
   {
     string str;
     cin>>str;
     if(palindrome(str));
      cout<<"yes"<<endl;
     
     else 
     cout<<"No"<<endl;
   }
    
    return 0;
  }