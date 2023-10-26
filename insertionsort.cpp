#include <iostream>

using namespace std;

int main()
{
    int arr[]={13,46,24,52,20,9};
    int i,j,len=sizeof(arr)/sizeof(arr[0]);
    
    for(i=0;i<len;i++)
    {
        for(j=i;j>0;j--)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}