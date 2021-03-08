#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

bool isPlayer1(string a, string b)
{

    if(a == "Hunter" && b == "Gun")  return true;
    if(a == "Gun" && b == "Bear") return true;
    if(a == "Bear" && b == "Hunter") return true;
    return false;
}



int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        if(a==b) cout<<"Tie"<<endl;
        else if(isPlayer1(a,b)) cout<<"Player1"<<endl;
        else cout<<"Player2"<<endl;
    }
}




// int main()
// {
//     int n;
//     cin >> n;

//     string x, y;
//     while (n --)
//     {
//         cin >> x >> y;
//         int a = x.size(), b = y.size();
//         if (a - b == -1 || a - b == -2 || a - b == 3)
//             cout << "Player1" << endl;
//         else if (a == b)
//             cout << "Tie" << endl;
//         else cout << "Player2" << endl;
//     }

//     return 0;
// }

// 作者：黄
// 链接：https://www.acwing.com/solution/content/15253/
// 来源：AcWing
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。