//
//  main.cpp
//  SDE5
//
//  Created by kishan kumar on 24/10/20.
//  Copyright © 2020 Kishan Kumar. All rights reserved.
//

// Q5. Kadane's Algorithm for max contigous subarray

#include<iostream>

using namespace std;
int maxSubArraySum(int arr[], int n)
{
    int max_so_far = INT_MIN;
    int min_value = 0;
    
    for(int i=0; i<n; i++)
    {
        min_value = min_value + arr[i];
        if(min_value > max_so_far)
            max_so_far = min_value;
        if(min_value < 0)
            min_value = 0;
    }
    return max_so_far;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max;
    return 0;
    
    
    return 0;
    
}
