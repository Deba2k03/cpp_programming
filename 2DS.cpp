#include<iostream>
#include<stdlib.h>
using namespace std;
int count_occurances(int arr[],int n,int x)
{
    int res=0;
    for (int i = 0; i < n; i++)
    {
        if(x==arr[i])
        res++;
    }
    return res;
}
int main()
{
    int arr[]={1,2,2,2,2,3,4,7,8,3};
    int n=size of (arr)/size of (arr[0]);
    int x=2;
    cout<<count_occurances(arr,n,x);
    return 0;
}