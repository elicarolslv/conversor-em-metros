#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "Portuguese");
//1 metro equivale a 3,3 p�s
double metro, pes;

    printf ("Por favor, insira o valor em metros:");
    scanf ("%lf", &metro);

// Converte metros para p�s
pes = metro * 3.3;

    // Exibe o resultado
    printf("%.2lf metros equivalem a %.2lf p�s.\n", metro, pes);

    return 0;
}