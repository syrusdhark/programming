#include <iostream>
#include <vector>

using namespace std;

void merge_sort(int arr[20],int low, int high)
{
    if(arr[low]>arr[high])
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
    }
    
    for(int i=low;i<high+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void merge_array(int arr[20],int low,int high)
{
    vector <int> V;
    for(int i=low;i<high+1;i++)
    {
        V.push_back(arr[i]);
    }
    
    sort(V.begin(),V.end());
    for(int i=low;i<V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    
}

int main()
{
    int arr[]={38,27,43,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=len-1;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    
    cout<<"Merged array"<<endl;
    merge_array(arr,low,high);
    
    return 0;
}