#include <iostream>
using namespace std;

float calcAreaTri(int b, int h);

void mensagem(){
    cout << "Ola mundo!" << endl;
}

void calcAreaRet(int b, int h){
    int area;
    b = b*3;
    cout << "na funcao b=" << b << endl;
    area = b*h;
    cout << "Area do retangulo: " << area << endl;
}

int main(){

    int a, b;
    float area;

    //chamada da função para mostrar a mensagem
    mensagem();

    cout << "Informe o valor de a: ";
    cin >> a;
    cout << "Informe o valor de b: ";
    cin >> b;

    calcAreaRet(a, b);
    cout << "a: " << a << " b: " << b << endl;

    calcAreaRet(10,5);

    area = calcAreaTri(a,b);
    cout << "Area do triangulo: " << area << endl;

    return 0;
}

float calcAreaTri(int b, int h){
    float area;
    area = (b*h)/2.0;
    return area;
}
