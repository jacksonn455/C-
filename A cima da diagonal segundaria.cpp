#include <iostream>
#include <iomanip>
using namespace std;
int main(){
char o;
int i, j, x = 0;
float s = 0, n=0;
cin >> o;
x=12;
cout << fixed << setprecision(1);
for (i = 0; i <= 11; i++){
        x--;
for (j = 0; j <= 11; j++){
cin >> n;
if (j < x){
s += n;
}
}
}

if (o == 'S'){

cout << s <<endl;
}
else{
s = s/ 66;
cout << s << endl;
}
}
