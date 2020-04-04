#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>
#include <string>
#include <iostream>
#include <math.h>

char sim_nao;

void Binario_para_decimal()
{
int dec=0,num,d=1;

printf("Digite o numero binário: ");
scanf("%d",&num);
    do
    {
    dec = dec+(num%10)*d;
    d = d*2;
    num = num/10;
    }
    while(num!=0);
    printf(" O numero em decimal é %d",dec);
    getch();
}

void Decimal_para_binario()
{
int a;
char b[8];

printf("Digite um número em decimal:");
scanf("%d",&a);
itoa(a,b,2);
printf("O número %d em binário é: %s",a,b);
getch();
}


// Abaixo o menu para escolha da conversão
void Menu()
{
setlocale(LC_ALL, "Portuguese");
int opcao = 0;
printf("Calculadora de Conversão de Bases, escolha a conversão a ser realizada:\n\n");
printf(" 1 - Binário para decimal\n");
printf(" 2 - Decimal para binário\n");
scanf("%d", &opcao);

    if (opcao == 1)
    {
    Binario_para_decimal();
    }   else if (opcao == 2)
        {
        Decimal_para_binario();
        } else if (opcao != 1 && opcao != 2)
            {
            printf("Opcão inválida. Tente novamente.");
            Menu();
            }
}

int main()

{
Menu();


printf("\nVoce deseja realizar outro calculo\?");

printf("\n(s) - SIM\n(n) - NAO\n");

scanf(" %s", &sim_nao);

    switch(sim_nao)
    {
    case 's':
    printf("\nTecle <ENTER> para reiniciar a calculadora...\n");
    system("pause");
    system("cls");
    main();
    break;

    case 'n':
    system("cls");
    exit(0);
    break;

    default:
    printf("\nFavor escolher SIM(s) ou NÃO(n)\n");
    }

return 0;

}
