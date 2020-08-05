#include <iostream>

using namespace std;

int linearsearch(int arr[], int n, int x)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;
    }
    
    return -1;
}

int main()
{
   int arr[]={70,80,100,50,40,110,170};
   int x=120;
   
   int n = sizeof(arr)/ sizeof(arr[0]);
   
   int result = linearsearch(arr,n,x);
   
   if(result==-1)
        cout<<"Element is not present in array"<<endl;
    
    else
        cout<<"Element is present at index " << result; 
        
    return 0;
}