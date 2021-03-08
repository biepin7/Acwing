#include <iostream>
using namespace std;
int main(){
    double a;
    cin>>a;
    if (a>=0&&a<=25)
    printf("Intervalo [%d,%d]",0,25);
    else if (a>25&&a<=50)
    printf("Intervalo (%d,%d]",25,50);
    else if (a>50&&a<=75)
    printf("Intervalo (%d,%d]",50,75);
    else if (a>75&&a<=100)
    printf("Intervalo (%d,%d]",75,100);
    else 
    printf("Fora de intervalo");
    return 0;

}