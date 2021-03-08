#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    for (int i = 0; i < 10;i++){
        int temp ;
        cin>>temp;
        if(temp<=0) temp=1;
        cout<<"X["<<i<<"] = "<<temp<<endl;
    }
    return 0;
}

