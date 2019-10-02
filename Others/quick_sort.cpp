#include<iostream>
using namespace std;

void swape(int *x,int* y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int partitiona(int a[],int l,int h)
{
    int i=l,j=h;
    int pivot=a[l];
    do
    {
        do
        {
            i++;
        }while(a[i]<=pivot);
        do
        {
            j--;
        }while(a[j]>pivot);
        if(i<j)
        {
            swape(&a[i],&a[j]);
        }
    }while(i<j);
    swape(&a[j],&a[l]);
    return j;
}

void quicksort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partitiona(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}



int main()
{
    int a[]={5,67,3,12,55,78,32,INT_MAX};
    quicksort(a,0,7);
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
    return 0;
}
