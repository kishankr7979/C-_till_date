//
//  main.cpp
//  SDE6
//
//  Created by kishan kumar on 24/10/20.
//  Copyright © 2020 Kishan Kumar. All rights reserved.
//

#include <iostream>
#include <stack>
#include<algorithm>

using namespace std;

class Interval
{
    public :
    int start, end;
    
};
bool compare(Interval l1, Interval l2)
{
    return (l1.start < l2.start);
}
void merge(Interval arr[], int n)
{
    if(n<=0)
        return;
    stack<Interval>st;
    sort(arr, arr+n, compare);
    
    st.push(arr[0]);
    for(int i=0; i<n; i++)
    {
        Interval top = st.top();
        
        if(top.end < arr[i].start)
        {
            st.push(arr[i]);
            
        }
        else if (top.end < arr[i].end)
        {
            top.end = arr[i].end;
            st.pop();
            st.push(top);
        }
        
    }
    cout << "\n The Merged Intervals are: ";
    while (!st.empty())
    {
        Interval t = st.top();
        cout << "[" << t.start << "," << t.end << "] ";
        st.pop();
    }
    return;
    
}

int main()
{
    Interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
    int n = sizeof(arr)/sizeof(arr[0]);
    merge(arr, n);
    return 0;
}
