#include <iostream>
#include <iomanip>
using namespace std;
int main(){
char O;
int i, j, x = 0;
float s = 0, n;
cin >> O;
for (i = 0; i <= 11; i++){
for (j = 0; j <= 11; j++){
cin >> n;
if (x < j){

s += n;
}
}
x++;
}

if (O == 'S'){

cout << s <<endl;
}
else{
s= s/ 66;
cout << s << endl;
}
}
