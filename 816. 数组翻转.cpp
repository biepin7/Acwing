#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int size)
{
    int l=0,r=size-1;
    while(l<r)
    {
        swap(a[l],a[r]);
        l++;
        r--;
    }

    // for(int i=0; i < size/2; i++)   swap(a[i],a[size-i-1]);
}

int a[1001];

int main()
{
    int n,size;
    cin >> n >> size;
    for(int i=0;i<n;i++) cin>>a[i];

    reverse(a,size);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    
    return 0;
}