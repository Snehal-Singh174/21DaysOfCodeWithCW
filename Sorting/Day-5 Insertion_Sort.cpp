#include <iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j -1;
        }
        arr[j+1] = key;
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
    insertion_sort(arr,n);
    print_sorted_array(arr,n);

   return 0;
}
