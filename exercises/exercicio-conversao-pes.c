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

    float medida_em_pes, medida_em_metros;

    printf("Informe sua medida em pés: ");
    scanf("%f", &medida_em_pes);

    medida_em_metros = medida_em_pes * 0.3048;

    printf("A medida em metros é %2.f metros\n", medida_em_metros);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}