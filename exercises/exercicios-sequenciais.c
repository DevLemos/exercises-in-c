#include <stdio.h>

int main(){

    int a,b,temp;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Os valores alterados são: \n");
    printf("%d\n",a);
    printf("%d\n",b);


    return 0;
}