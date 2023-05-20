#include <iostream>

int main()
{
    int n, ar, sum=0;
    std::cin>>n;
    for(n++; --n;)
    {
        std::cin>>ar;
        sum+=ar;
    }
    std::cout<<sum;
    return 0;
}
