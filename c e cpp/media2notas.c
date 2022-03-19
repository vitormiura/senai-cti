#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char nome[50];
float n1, n2, media;

int main(void){
    for (int i=0;i<3;i++){   
        printf("Digite o nome: ");
        gets(nome);
        fflush(stdin);
        printf("nota 1:");
        scanf("%f", &n1);
        fflush(stdin);
        printf("nota 2:");
        scanf("%f", &n2);
        fflush(stdin);
        media=((n1+n2)/2);
        printf("media eh: %.3f\n", media);
        if(media>=7 && media<=10){
            puts("O aluno estas aprovado");
        }else if(media>=4 && media<7){
            puts("Esta de recuperesaum");
        }else{
            puts("estas reprovado");
        }
        system("cls");
    }
    system("pause");
}