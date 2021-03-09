#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<string> args;
    string temp;
    while (cin >> temp) args.push_back(temp);
    for (int i = 0; i < args.size() - 2; i++)
    {
        if (args[i] == args[args.size() - 2]) cout << args[args.size() - 1];
        else cout << args[i];
        cout << " ";
    }

    return 0;
}

