#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int minnum = *min_element(a.begin(),a.end());
    int minpos = min_element(a.begin(),a.end())-a.begin();
    cout<<"Minimum value: "<<minnum<<endl;
    cout<<"Position: "<<minpos<<endl;
    
    return 0;
}

{
    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;i++) cin>>a[i];
    int p=0;
    for(int i=0;i<n;i++){
        if(a[i]<a[p]) p=i;
    }
    printf("Minimum value: %d\n", a[p]);
    printf("Position: %d\n", p);

    return 0;
}