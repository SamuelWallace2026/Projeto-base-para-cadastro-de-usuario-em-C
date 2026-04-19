#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int opcao=0,temcontato=0,posicao;
    char confirmacao;
    char nome[10][100],telefone[10][30];

    while(opcao !=5){
        printf("\n||||||||  CADASTRO TELEFÔNICO EM C ||||||||");
        printf("\n1. Cadastrar telefone");
        printf("\n2. Consultar agenda");
        printf("\n3. Alterar numero");
        printf("\n4. Deletar contato");
        printf("\n5. Sair");
        printf("\nEscolha uma opcao: ");
        scanf(" %d",&opcao);
        getchar();

        switch(opcao){
case 1:
    if(temcontato<10){
    printf("\nDigite seu nome:\n");
    fgets(nome[temcontato],100,stdin);
    printf("\nDigite seu telefone:\n");
    fgets(telefone[temcontato],30,stdin);
    temcontato++;
    printf("\nContato salvo.\n");
    }
    else{
        printf("\nAgenda Cheia.\n");
    }
    break;
case 2:
    if(temcontato>0){
    printf("\n Listando contato salvo.\n");

    for (int i=0; i<temcontato;i++){
    printf("\nContato %d - %s Numero: %s\n.",i+1,nome[i],telefone[i]);}
    }
    else{
        printf("\n--- LISTA DE CONTATOS ---\n");
        printf("\n Nenhum contato salvo\n");
    }break;
case 3:
    if(temcontato>0){
    printf("\nDigite o numero do contato para alterar (1 a %d): ",temcontato);
    scanf("%d",&posicao);
    getchar();

    if(posicao>=1 && posicao<=temcontato){
    printf("\nNovo nome:\n");
    fgets(nome[posicao - 1],100,stdin);
    printf("\nNovo telefone:\n");
    fgets(telefone[posicao - 1],30,stdin);
    printf("\nContato atualizado.\n");
    }
    else{
        printf("\nContato invalido.\n");
    }
   } else{
        printf("\nNenhum contato para alterar.\n");
    }
    break;

case 4:
    if (temcontato > 0) {

        printf("\nDigite o numero do contato para deletar (1 a %d):\n", temcontato);
        scanf("%d", &posicao);
        getchar();

    if (posicao >= 1 && posicao <= temcontato) {

            printf("\nConfirmar exclusao (y/n): ");
            scanf(" %c", &confirmacao);
            getchar();

    if (confirmacao == 'y' || confirmacao == 'Y') {

    for (int i = posicao - 1; i < temcontato - 1; i++) {
            strcpy(nome[i], nome[i + 1]);
            strcpy(telefone[i], telefone[i + 1]);
                }
                temcontato--;
                printf("\nCadastro excluido com sucesso.\n");
            }
    else {
                printf("\nExclusao cancelada.\n");
            }

        }
    else {
            printf("\nContato invalido.\n");
        }

    }
    else {
        printf("\nNenhum contato para excluir.\n");
    }
    break;
case 5:
    printf("\n  Encerrar a execucao do sistema.\n");
    break;
default:
    printf("\n Opcao invalida.");

    }
system("pause");
system("cls");
    }








return 0;
}










