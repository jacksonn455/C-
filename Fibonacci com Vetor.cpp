#include<iostream>
using namespace std;
int main(void)
{
    unsigned long long int fib[62];
    int n,loop,cont;

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i<= 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cin >> loop;
    while(loop--)
    {
        cin >> n;
        cout << "Fib(" << n <<") = " <<fib[n] << endl;
    }

    return 0;

}
