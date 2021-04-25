#include <bits/stdc++.h>
using namespace std;

int m;
const int N =100010;
int head,e[N],ne[N],idx;

// 初始化链表
void init(){
    head=-1;
    idx=0;
}

// 插到下标为k的后面
void add(int x,int k ){
    e[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx;
    idx++;
}

//向链表头插入一个数
void add_to_head (int x ){
    e[idx]=x;
    ne[idx]=head;
    head = idx;
    idx ++ ;
}

void remove(int k){
    ne[k]=ne[ne[k]];
}

int main()
{
    cin>>m;
    
    return 0;
}