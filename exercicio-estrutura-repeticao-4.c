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

    for (int contador = 10; contador >= 0; contador--)
    {
        printf(" %d ", contador);
    }

    printf("\n");

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}