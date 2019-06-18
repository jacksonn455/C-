#include<iostream>
#include<iomanip>
using namespace std;
int main(){

double x[100],y[100];
int i;

for(i=0;i<100;i++){
    cin >> x[i];
     y[i] = x[i]*4;
     if(y[i]<0){
        y[i] = y[i] * -1;
     }
     cout << fixed << setprecision(1);
    cout << "Y[" <<i <<"] = "<<y[i]<<endl;
}

}
