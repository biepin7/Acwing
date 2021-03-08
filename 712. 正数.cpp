#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int res = 0;

    for (int i = 0; i < 6; i ++ )
    {
        double x;
        cin >> x;

        if (x > 0) res ++ ;
    }

    cout << res << " positive numbers" << endl;

    return 0;
}