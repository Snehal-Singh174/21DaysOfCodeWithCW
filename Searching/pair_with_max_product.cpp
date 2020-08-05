#include <iostream>

using namespace std;

void max_product(int arr[],int n)
{
    int i,max=0,j,k,l,pro=0;
    
    for(i=0;i<n-1;i++){
        
        for(l=i+1;l<n;l++)
        {
            pro=arr[i]*arr[l];
            if(max<pro)
            {
                max=pro;
                j=arr[i];
                k=arr[l];
            }
        }
    }   
    
    cout<<"{"<<j<<","<<k<<"}";
    
}

int main()
{
   int arr[] = {1, 4, 3, 6, 7, 0} ;
   
   int n= sizeof(arr) / sizeof(arr[0]);
   
   max_product(arr,n);
   
   return 0;
}