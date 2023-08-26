//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
  
  long long int countRoots(long long int x)
  {
      
      long long int start=1;
      long long int end=x;
      long long int ans = -1;
      
      while(start<=end)
      { long long int mid = (start+end)/2;
      long long int sqr = mid*mid;
      
        if(x==1 || x==0)
        
        {
            return x;
        }
        
       
          
         else if(sqr==x)
          {
              return mid;
             
          }
          
          
          else if(sqr < x)
          {    ans = mid;
              start=mid+1;
          }
          
          else{
              end  =mid-1;
          }
          
          
      }
      
      return  ans;
      
  }
  
    long long int floorSqrt(long long int x) 
    {
        return countRoots(x);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends
