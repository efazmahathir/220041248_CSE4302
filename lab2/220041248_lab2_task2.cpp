
#include<iostream>
struct fraction
{
    int num,denum;
};
using namespace std;
int main()
{
    int a,b,c,d,sum;
    fraction frac1,frac2;
    char ch;
    cin>>a>>ch>>b;
    cin>>c>>ch>>d;
    frac1.num =a;
    frac2.num =b;
    frac1.denum=c;
    frac2.denum=d;
    sum.num=(a*d +b*c);
    sum.denum=(b*d);


    cout<<sum.num<<"/"<<sum.denum;

}
