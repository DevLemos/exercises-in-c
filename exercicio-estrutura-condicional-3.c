#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{

    // Define o valor das páginas de código UTF8 e default do Windows
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    // Define codificação como sendo UTF-8
    SetConsoleOutputCP(CPAGE_UTF8);

    float nota1, nota2, nota3, nota4, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A média do aluno é: %.2f\n", media);

    if (media >= 7)
        printf("Aluno foi aprovado!");
    else if (media >= 6)
    {
        printf("Fazer exame.");
    }
    else
        printf("Aluno reprovado!");


    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}