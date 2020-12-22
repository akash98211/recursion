#include <bits/stdc++.h>
  using namespace std;
int summation(int n, int val) 
{ 
    // initialize total = 0  
    int total = 0; 
  
    // Base Case if n = 1 and val >= 0  then it should return 1 
    if (n == 1 && val >=0) 
        return 1; 
  
    // iterate the loop till equal the val 
    for (int i = 0; i <= val; i++){ 
          
        // total solution of equations and again call the recursive function Solutions(variable,value) 
        total += summation(n-1, val-i); 
          
    } 
      
    // return the total no possible solution  
    return total; 
}   
  int main()
  {
    int t;cin>>t;   // t for different take cases 
    while(t--)
    {
      int n,sum; cin>>n>>sum;   // n for number of varible and sum for addition value
      cout<<summation(n,sum)<<endl;
    }
    
    return 0;
  }