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

    float valor_prestacao, taxa, tempo, prestacao;

    printf("Informe o valor da prestação: \n");
    scanf("%f", &valor_prestacao);

    printf("Informe a taxa de juros(%%): \n");
    scanf("%f", &taxa);

    printf("Informe o tempo que está em atraso(meses): \n");
    scanf("%f", &tempo);

    prestacao = valor_prestacao + (valor_prestacao * (taxa / 100) * tempo);

    printf("O valor atual da prestação é de R$ %2.f\n", prestacao);

    // Retorna codificação padrão do Windows
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;
}