#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int max(int x, int y)
{
    return x > y ?  x : y;
}


int main()
{
    int x, y;
    cin >> x >> y;
    cout << max(x, y);

    return 0;
}