#include <stdio.h>

// Projeto Feito por Robson Ferreira

// Aluno: Robson Ferreira;
// Curso: Analise e Desenvolvimento de Sistemas;
// 1º Periodo;

int main()
{

    double peso, altura, IMC ;

    printf("\t\tCalcule o seu IMC\n\n");

    printf("Insira o seu peso: ");
    scanf("%lf", &peso);

    printf("Insira a sua altura: ");
    scanf("%lf", &altura);

    IMC = peso/(altura*altura);


    printf("O resultado do seu IMC: %.2lf", IMC );

    if (IMC < 18.5)
    {

        printf("\nO seu IMC = Magreza\n");
    }
    else if (IMC > 18.5 && IMC < 24.8)
    {

        printf("\nO seu IMC = Normal\n");
    }
    else if (IMC > 25 && IMC < 29.9)
    {

        printf("\nO seu IMC = Sobrepeso\n");
    }
    else if (IMC > 30 && IMC < 34.9)
    {

        printf("\nO seu IMC = Obesidade Grau 1\n");
    }
    else if (IMC > 35 && IMC <39.9)
    {
        printf("\nO seu IMC = Obesidade grau 2\n");
    }
    else if (IMC > 40)
    {

        printf("\nO seu IMC = Obesidade Grau 3");
    }
    return 0;
}
