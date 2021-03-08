#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);

    if (a >= b + c) 
        cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if (a * a == b * b + c * c) 
            cout << "TRIANGULO RETANGULO" << endl;
        if (a * a > b * b + c * c)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        if (a * a < b * b + c * c) 
            cout << "TRIANGULO ACUTANGULO" << endl;
        if (a == b && a == c) 
            cout << "TRIANGULO EQUILATERO" << endl;
        if ((a == b && a != c && b != c) || (a == c && a != b && c != b)|| (b == c && b != a && c != a)) 
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}

