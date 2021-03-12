#include<bits/stdc++.h>
using namespace std;

void sort1(int a[], int l, int r){
    for(int i=0l; i<=r; i++){
        for(int j=i+1; j<=r;j++){
            if(a[j]<a[i]) swap(a[i],a[j]);
        }
    }
}

void sort(int a[], int l,int r){
    if(l >= r) return;
    int x=a[l+r>>1];
    int i =l-1,j=r+1;
    while(i<j){
        do{i++;}while(a[i]<x);
        do{j--;}while(a[j]>x);
        if(i<j) swap(a[i],a[j]);
    }
    sort(a,l,j);
    sort(a,j+1,r);
}


int a[1001];

int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    for(int i=0;i<n;i++){ cin >> a[i]; }
    sort(a,l,r);
    for(int i=0;i<n;i++){ cout << a[i]<<" "; }
    return 0;
}