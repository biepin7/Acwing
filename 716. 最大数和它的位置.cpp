#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;


int main()
{
    vector<int> a;
    for(int i=0;i<100;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int maxnum = *max_element(a.begin(),a.end());
    int maxpos = max_element(a.begin(),a.end())-a.begin();
    cout<<maxnum<<endl;
    cout<<maxpos+1<<endl;
    
    return 0;
}