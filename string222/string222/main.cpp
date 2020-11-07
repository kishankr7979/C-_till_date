//
//  main.cpp
//  string222
//
//  Created by kishan kumar on 04/11/20.
//  Copyright © 2020 Kishan Kumar. All rights reserved.
//

#include<iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char string[n];
    for(int i=0; i<n; i++)
    {
        cin>>string[i];
    }
    
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=n-i; i++)
        {
            int k = j+i-1;
            for(int p=i; p<=j; p++)
            {
                cout<<string[p];
            }
            cout<<endl;
        }
    }
    
    
    return 0;
}
