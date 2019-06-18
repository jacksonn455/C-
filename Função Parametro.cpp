#include <iostream>

using namespace std;

float Parabola(float a) //função por parametro
{
    return(a*a - 6);
}


int main () {

float x, y;

for(x = -3; x <= 3; x = x + 0.5)
{
    y = Parabola(x);
    cout << "Sequencia: " << y << endl;
}


/* void Calcula(void)
{
float x, y;

for(x = -3; x <= 3; x = x + 0.5)
}

int main ()
{
    Calcula ();





}


*/




}
