#include<iostream>
#include<cmath>

using namespace std;
int main() {

    int contprimos =0, divisores, primos[100],n=100,i;

    while(contprimos < 100){
        divisores = 0;


    for(i = 1;i <= sqrt(n) and divisores < 2;i++){
        if(n%i==0)
            divisores++;
    }
    if(divisores ==1){
        primos[contprimos] = n;
        contprimos++;
    }
    n++;
}
for(i=0;i<100;i++){
    cout << i+1 <<" - "<<primos[i]<<endl;
}
return 0;
}
