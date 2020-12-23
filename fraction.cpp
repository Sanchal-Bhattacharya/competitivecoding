#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    int ans=1;
    int small=min(a,b);
    for(int i=1;i<=small/2;i++)
        if(a%i==0 && b%i==0)
            ans=i;
    return ans;

}

class Fraction
{
public:
    int numerator;
    int denominator;

    void add(Fraction const &f)  ///f2 is not changing, only f1 is changing i.e const keyword is used
    {
        int lcm=denominator*f.denominator;
        int x=(lcm/denominator)*numerator;
        int y=(lcm/f.denominator)*f.numerator;
        ///store result in f1
        this->numerator=x+y;
        this->denominator=lcm;
    }
    void simplify()
    {
        int hcf=gcd(numerator,denominator);
        numerator=numerator/hcf;
        denominator=denominator/hcf;
        cout<<numerator<<"/"<<denominator<<endl;
    }
};



int main()
{
    Fraction f1;
    Fraction f2;
    f1.numerator=2;
    f1.denominator=4;
    f2.numerator=4;
    f2.denominator=6;
    f1.add(f2);
    f1.simplify();
    return 0;
}
