#include <cstdio>
#include <cstdlib>

int mult3 (int a, int b, int c){
    return a*b*c;
}

int main (void){
    int valor1, valor2, valor3, resultado;
    printf ("Digite 3 valores que serao multiplicados\n");
    scanf ("%d %d %d", &valor1, &valor2, &valor3);
    getchar ();
    resultado=mult3(valor1, valor2, valor3);
    //Valor1 será int a, valor2 será int b e valor3 será int c
    printf ("O resultado e %d\n\n", resultado);
    system ("pause");
    return EXIT_SUCCESS; //o mesmo que return 0.
}
