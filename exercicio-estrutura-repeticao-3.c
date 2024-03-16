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

    for (int i = 499; i >= 1; i -= 2)
    {
        soma += i;
    }

    printf("A somatória dos números impares entre 500 e 1: %d\n", soma);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}