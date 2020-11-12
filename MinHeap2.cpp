#include <iostream>
#include<vector>
#include<queue>



using namespace std;

int ropes(vector<int>arr)

{
   int n = arr.size();
   priority_queue<int, vector<int>, greater<int> >pq;
   for(int i=0; i<n; i++)
   {
       pq.push(arr[i]);
   }
   int res= 0 ;
   while(pq.size() > 0)
   {
       int first = pq.top();
       pq.pop();
       
       int second = pq.top();
       pq.pop();
       
       res += (first + second);
       pq.push(first+second);
       
   }
   return res;
  
    
    
}

int main()
{
    vector<int>v = {1,2,3,4,5};
    cout<<ropes(v);
    
   
    

    return 0;
}