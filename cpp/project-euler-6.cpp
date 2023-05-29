#include <iostream>

long long sumsquares(long long n)
{
    return (n*(n+1)*(2*n+1))/6;
}
long long squaressum(long long n)
{
    long long sum=(n*(n+1))/2;
    return sum*sum;
}
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        cout << squaressum(n)-sumsquares(n) << '\n';
    }
    return 0;
}

