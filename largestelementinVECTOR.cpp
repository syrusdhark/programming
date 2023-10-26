#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int largestElement(vector<int> &arr, int n) {
    int ele;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    return *max_element(arr.begin(),arr.end());
}

int main()
{
    vector<int> arr;
    int n;
    cin>>n;
    int L_ele=largestElement(arr,n);
    cout<<L_ele;

    return 0;
}