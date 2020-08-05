#include <iostream>

using namespace std;

int binarysearch(int arr[], int x, int l, int h)
{
    int m=(l+h)/2;
    
    if(arr[m]<x)
        binarysearch(arr, x, m, h);
    else if(arr[m]>x)
        binarysearch(arr, x, l, m);
    else if(arr[m]==x)
        return m;
    else
        return -1;
    
}

int main()
{
   int arr[]={2,4,8,12,16,23,38,56,72,91};
   int x=72;
   
   int h = sizeof(arr) / sizeof(arr[0]);
   int l=0;
   
   int result = binarysearch(arr, x, l, h);
   
   if(result==-1)
    cout<<"Element is not present in arr."<<endl;
    
   else
    cout<<"Element is present at index "<<result;
   
   return 0;
}