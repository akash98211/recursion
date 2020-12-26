#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;cin>>t;
    while(t--)
    {
      int n,k;cin>>n>>k;
      int a[n];
      
      for (int i = 0; i < n; i++)
      {
            cin>>a[i];
      }
      
       int max=-1;
       
       for (int i = 0; i <= n-k; i++) 
          {
            int sum=0;
            for (int j = i; i < n; j+=k)
               {
                sum=sum+a[j];
               }
            if (sum>max)
            max=sum;
          
          }
          
          if(max<0)
          cout<<"0"<<endl;
          
          else
          cout<<max<<endl;
    }
    
    return 0;
  }