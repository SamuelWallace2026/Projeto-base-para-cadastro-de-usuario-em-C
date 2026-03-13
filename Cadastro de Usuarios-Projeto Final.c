#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char nome[100];
char telefone[20];
char cpf[20];
char senha[50];

int idade;
float altura;

printf("******************************************\n");
printf("*           CADASTRO DE USUARIO          *\n");
printf("******************************************\n\n");

printf("Digite seu nome: ");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = '\0';


printf("\nDigite sua idade: ");
scanf("%d",&idade);

printf("\nDigite seu telefone: ");
scanf("%s",telefone);

printf("\nDigite seu CPF: ");
scanf("%s",cpf);

printf("\nDigite sua altura: ");
scanf("%f",&altura);


printf("\nDigite sua senha: ");
scanf("%s",senha);

printf("\n******************************************\n\n");
system("cls");

if(strlen(senha) >= 8){
    printf("\n--- SISTEMA DE CADASTRO --- Cadastro realizado com sucesso!\n\n");
    printf("\n/*****************************************/\n");
    printf("\n/* DADOS DO USUARIO                      */\n\n");
    printf("/-----------------------------------------/\n\n");
    printf("| Nome: %-33s |\n", nome);
    printf("| Idade: %-32d |\n", idade);
    printf("| Telefone: %-29s |\n", telefone);
    printf("| CPF: %-34s |\n", cpf);
    printf("| Altura: %.2f m                          |\n", altura);

}
else{
    printf("--- SISTEMA DE CADASTRO --- Cadastro invalido!! Tente novamente\n");
}



printf("\n/*****************************************/\n");






return 0;
}
