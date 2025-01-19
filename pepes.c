#include <stdio.h>
#include <locale.h>

int main (){
setlocale (LC_ALL, "Portuguese");
//1 metro equivale a tanana 3,3 pés
double metro, pes;

    printf ("Por favor, insira o valor em metros:");
    scanf ("%lf", &metro);

// Converte metros para pés
pes = metro * 3.28084;


    // Exibe o resultado
    printf("%.2lf metros equivalem a %.2lf pés.\n", metro, pes);

    return 0;
}
