//
//  main.cpp
//  SDE1
//
//  Created by kishan kumar on 24/10/20.
//  Copyright © 2020 kishan kumar. All rights reserved.
//


// Q1. Find the duplicate in an array of N+1 integers.

#include <iostream>
#include<algorithm>
using namespace std;

int duplicate(int arr[], int n)
{
    sort(arr, arr+n);
    for(int i=1; i<n; i++)
    {
        if(arr[i] == arr[i-1]){
            cout<<arr[i];
            
        }
        
    }
    return -1;
    
}
int main(int argc, const char * argv[]) {
    
    int arr[1000] = {1,1,2};
    cout<<duplicate(arr, 1000);
    
  
    return 0;
}
