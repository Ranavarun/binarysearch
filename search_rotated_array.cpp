//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int binarySearch(int a[],int l,int h,int key)
    {
        
        int s=l;
        int e=h;
        int ans = -1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            
            
         if(a[mid]==key)
         {
             return mid;
          
         }
         
         else if(key<a[mid])
         {
         e=mid-1;    
         }
         
         else
         {
             s=mid+1;
         }
         
            
        }
        
        
        return ans;
        
    }
    
    int pivotElement(int a[],int l,int h)
    {
        
        int s=l;
        int e=h; 
        
        while(s<=e)
        {
            
            int mid = s+(e-s)/2;
            
            if(a[s]==a[e])
            {
            return s;    
            }
            
            
             if(mid+1<=h && a[mid]>a[mid+1])
            {
                return mid;
            }
            if(mid-1>=l && a[mid-1]>a[mid])
            {
                
                return mid-1;
            }
             if(a[s]>a[mid])
            {
                e=mid-1;
                
            }
            
            else
            {
                s=mid+1;
            }
           
            
        }
         return -1;
        
    }
    
    
    int search(int A[], int l, int h, int key){
         int pivot=pivotElement(A,l,h);
         
        int ans=0;
        if(key >= A[l] && key <= A[pivot])
              {
                  ans=binarySearch(A,l,pivot,key);
                 
              }
              else
              {
                ans=binarySearch(A,pivot+1,h,key);
              }
        
        
        
       
        
        
        
        return ans;
        
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends
