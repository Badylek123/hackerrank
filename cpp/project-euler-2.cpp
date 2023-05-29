#include <iostream>

long long fibsum(long long max) 
{
    long long sum=0;
    long long f1=1;
    long long f2=1;
    long long helper;
    for(int i=0; helper<max; i++)
    {
        helper=f1+f2;
        if(helper%2==0 && helper<max) sum+=helper;
        f1=f2;
        f2=helper;
    }
    return sum;
}

int main()
{
    long long n;
    int tests;
    std::cin>>tests;
    for(int i=0; i<tests; i++)
    {
        std::cin>>n;
        std::cout<<fibsum(n)<<'\n';
    }
    return 0;
}

