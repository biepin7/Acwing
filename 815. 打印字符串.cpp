#include<bits/stdc++.h>
using namespace std;

void print(char a[])
{
    for (int i = 0; a[i]; i ++ )
        cout << a[i];
}

int main()
{
    char a[101];
    cin.getline(a, 101);  

    print(a);

    return 0;
}