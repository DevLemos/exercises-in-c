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

    int numero;

    printf("Informe um valor inteiro: ");
    scanf("%d", &numero);

    if(numero >= 1 && numero <= 10){
        printf("O número %d está na faixa entre 1 e 10.\n",numero);
    } else{
        printf("O número %d não está na faixa entre 1 e 10.\n",numero);
    }

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}