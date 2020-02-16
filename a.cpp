#include<bits/stdc++.h>
using namespace std;
void merger(int a[],int low,int mid,int high)
{
    int index = 0;
    int n1 = (mid-low)+1;
    int n2 = (high - mid);
    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
        left[i] = a[i+low];
    for(int i=0;i<n2;i++)
        right[i] = a[i+mid+1];

    index=low;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(left[i] < right[j])
        {
            a[index++] = left[i++];
        }
        else
        {
            a[index++] = right[j++];
        }
    }

    while(i<n1)
    {
        a[index++] = left[i++];
    }

    while(j<n2)
    {
        a[index++] = right[j++];
    }
}
void mergesort(int a[],int low,int high)
{
        if(low<high){
            int mid = (low+high)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merger(a,low,mid,high);
        }
}

int main()
{
    int n;
    cout<<"Please enter the number of elements of the array :\n";
    cin>>n;
    int a[n];
    cout<<"Please enter the elements of the array :\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a,0,n-1);

    cout<<"the elements of the array after sorting is :\n";
    for(int i=0;i<n;i++)
        printf("%3d ",a[i]);
}
