#include <iostream>

long sumseq(long max, long diff)
{
    long n=(max-1)/diff;
    return (diff*n*(n+1))/2;
}

int main()
{
    int tests;
    long n;
    std::cin>>tests;
    for(;tests;tests--)
    {
        std::cin>>n;
        std::cout<<sumseq(n,3)+sumseq(n,5)-sumseq(n,15)<<'\n';
    }
    return 0;
}

