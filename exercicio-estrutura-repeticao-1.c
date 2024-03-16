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

    int soma = 0;

    for (int i = 1; i <= 15; i++){
        soma += i;
    }

    printf("A somatória dos números de 1 até 15 é: %d\n", soma);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}