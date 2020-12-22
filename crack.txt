
#include <bits/stdc++.h>
using namespace std;
void crack(int start,int l)
{ int t1=l;     //   l=1, t1=2
  while(t1<=l)
  { int x=l%10;
    if(x==0)
     {  
       continue;
     }                             
    else 
      cout<<t1<<endl;
    t1++;
  }
}
int main()
  {
    int t;cin>>t;
    while(t--)
    {
      int l;
      cin>>l;
       if(l==1)
       start=1;
       if(l==2)
       start=11;
       if(l==3)
       start=111;
       if(l==4)
       start=1111;
       crack(start,l);
    }
    
    return 0;
  }
