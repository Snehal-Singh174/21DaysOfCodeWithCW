#include <iostream>

using namespace std;

void swap_munber(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selection_sort(int arr[],int n)
{
    int i,j,min_index;
    for(i=0;i<n;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
            swap_munber(&arr[i],&arr[min_index]);
        }
    }
}

void print_sorted_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
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
    cout<<"Enter elements of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"Sorted array"<<endl;
    print_sorted_array(arr,n);

    return 0;
}
