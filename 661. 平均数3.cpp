#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin>>a>>b>>c>>d;
    double x = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1lf\n", x + 1e-8);  // 为了防止出现4.8499999999这种极端情况;
    if(x >= 7.0) cout<<"Aluno aprovado.";
    else if(x < 5.0) cout<<"Aluno reprovado.";
    else
    {
        cout<<"Aluno em exame."<<endl;
        double y;
        scanf("%lf", &y);
        printf("Nota do exame: %.1lf\n", y);
        if((x + y) / 2 >=5.0) cout<<"Aluno aprovado."<<endl;
        else cout<<"Aluno reprovado."<<endl;
        printf("Media final: %.1lf", (x + y) / 2);
    }

}