#include <iostream>

using namespace std;


void occurance(int arr[],int x,int n)
{
    int i,first=-1,last=-1;
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
            {
                if(first==-1)
                    first = i;
                    
                last =i;
            }
    }
    if(first!=-1)
    {
        cout<<"First Occurance is at "<<first<<endl;
        cout<<"Last Occurance is at "<<last;
    }
    else
    {
        cout<<"Element not found";
    }
    
}

int main()
{
   int arr[] = {1,3,5,5,5,5,67,12};
   int x = 5;
   int n = sizeof(arr)/sizeof(arr[0]);
   occurance(arr,x,n);
   
   return 0;
}