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

    int primeiro_numero, segundo_numero, diferenca;

    printf("Informe o primeiro valor inteiro: ");
    scanf("%d", &primeiro_numero);

    printf("Informe o segundo valor inteiro: ");
    scanf("%d", &segundo_numero);

    if (primeiro_numero > segundo_numero)
        diferenca = primeiro_numero - segundo_numero;
    else
        diferenca = segundo_numero - primeiro_numero;

    printf("A diferença entre os dois valores são:  %d\n", diferenca);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}