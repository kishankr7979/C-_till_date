//
//  main.cpp
//  Two_Sum
//
//  Created by kishan kumar on 24/10/20.
//  Copyright © 2020 Kishan Kumar. All rights reserved.
//

#include <iostream>
#include <set>
#include<vector>
#include<algorithm>
using namespace std;
bool twosum(int arr[], int n, int target)
{
    unordered_set<int> s;
    for (int i = 0; i < N; i++) {
        int temp = X - A[i];
        
        if (s.find(temp) != s.end())
            return true;
        
        
        s.insert(A[i]);
    }
    return false;

}


int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {1,2,4,6,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<twosum(arr, n, 8);
    
    return 0;
}
