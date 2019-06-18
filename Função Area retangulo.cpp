#include <iostream>

using namespace std;

void mostra(){
    cout << "Ola mundo na funcao mostra" << endl;
}

void calcAreaRet(int b, int h){
    b = b*2;
    h = h*2;
    cout << "na funcao: b: " << b << " h: " << h << endl;
    int area = b*h;

    cout << "Area do retangulo: " << area << endl;
}

float calcAreaTri(float b, float h);

int main(){
    int b, h;
    float area;

    mostra();

    cout << "Informe um valor para a base: ";
    cin  >> b;
    cout << "Informe um valor para a altura: ";
    cin  >> h;

    calcAreaRet(b, h);
    cout << "b: " << b << " h: " << h << endl;
    calcAreaRet(5, 10);

    area = calcAreaTri(b,h);
    cout << "Area do Triangulo: " << area << endl;
    cout << "Area do Triangulo: " << calcAreaTri(b,h) << endl;
    return 0;

}

float calcAreaTri(float b, float h){
    float area;

    area = (b*h)/2.0;
    return area;
}

