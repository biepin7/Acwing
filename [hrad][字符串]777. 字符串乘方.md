# 777. 字符串乘方

## 思路

假设 "a=ab" ,那么 a*a = "abab" ,$a^n$ 为n个"ab"相连

对于 "$A=a^n$",对A的从头开始不同长度为m字串进行遍历，m和n的值必然符合`m*n=A.size`的条件 那么在遍历时，可以得出进行乘方计算的条件 `A.size % n ==0 `，即符合该条件时，截取A.substr(0,m) 并将其重复n次得到新的字符串B，若是B==A，即找到了合适的n

为了


## 实现

```
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while (cin >> str, str != ".")
    {
        int len = str.size();

        for (int n = len; n; n -- )
            if (len % n == 0)
            {
                int m = len / n;
                string s = str.substr(0, m);
                string r;
                for (int i = 0; i < n; i ++ ) r += s;

                if (r == str)
                {
                    cout << n << endl;
                    break;
                }
            }
    }

    return 0;
}
```