#include <iostream>

using namespace std;

void swap_array_elements(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
             swap_array_elements(&arr[j],&arr[j+1]);
       }
    }
}

void print_sorted_array(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"Sorted Array"<<endl;
    print_sorted_array(arr,n);

   return 0;
}
