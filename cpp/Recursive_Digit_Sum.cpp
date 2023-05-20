#include <iostream>

int sumStr(std::string n, int k)
{
    int out=0;
    for(int i=0; i<k; i++)
    {
        out+=(int)n[i]-48;
    }
    return out;
}
// This code is slightly different than it should be
// originally this function had to accept string and int
// (and also had to use recursion)
//
// However, the sum of numbers digits
// is congruent to the original number modulo 9
// This approach makes the code faster and more nice-looking
int superDigit(int n)
{
    if(n%9==0) return 9;
    return n%9;
}

int main()
{
    std::string n;
    int k;
    std::cin>>n>>k;
    int foo=superDigit(sumStr(n,n.size()));
    int bar=superDigit(foo*k);
    std::cout<<bar;
    return 0;
}
