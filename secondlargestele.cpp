#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    int arr[]={55,44,3,2,1};
    int i;
    
    int len = sizeof(arr)/sizeof(arr[0]);
    int ass=0,des=0;
    for(i=0;i<len;i++)
    {
        if(arr[i]<arr[i+1])
        {
            ass++;
        }
        else if(arr[i]>arr[i+1])
        {
            des++;
        }
    }
    
    if(ass==len-1)
    {
        cout<<"sorted";
    }
    
    else if(des==len)
    {
        cout<<"sorted";
    }

    return 0;
}