#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

int op=0;
int maiorIdade=0,menorIdade=0;
int qtdMulheres=0,qtdHomens=0;
float somaDosSalarios=0;

void mostraMenu(){
	system("cls");
	puts("[1] - Salario individual ");
	puts("[2] - Cadastro de Funcionario ");
	puts("[3] - Maior idade e Menor idade ");
	puts("[4] - Quantidade Homens e mulheres  ");
	puts("[5] - Salario total dos funcionarios  ");
	puts("[0] - Sair ");
	scanf("%i",&op)	;	
}
struct Funcionarios{
	int id;
	char nome[30];
	char funcao[20];
	int idade;
	char sexo;
	float salario;
};			
struct Funcionarios funcionario[5];
int main(){
	do{ 
		mostraMenu();
		switch(op){// estrutura que pega o número digitado
			case 1:
			//TODO vou fazer ainda	
			break;
			case 2:
				for(int i = 0;i<2;i++){
					puts("Digite o ID do funcionario");
					scanf("%i",&funcionario[i].id);
					fflush(stdin);					
					puts("Digite seu nome");
					gets(funcionario[i].nome);
					fflush(stdin);					
					puts("Digite sua funcao");
					gets(funcionario[i].funcao);
					fflush(stdin);										
					puts("Digite sua idade");
					scanf("%i",&funcionario[i].idade);					
					fflush(stdin);
					
					if(i==0)	{				
						maiorIdade =  funcionario[i].idade;
						menorIdade =  funcionario[i].idade;														
					}else{
							if(funcionario[i].idade>maiorIdade){
							maiorIdade =  funcionario[i].idade;
							}					
							if(funcionario[i].idade<menorIdade){
							menorIdade =  funcionario[i].idade;
							}
					}																										
					puts("Digite - [m] - Masculino ou [f] - Femino");
					scanf("%c",&funcionario[i].sexo);
					fflush(stdin);
											
					if(funcionario[i].sexo == 'm'){
						qtdHomens++ ;
					}else{
						qtdMulheres++ ;
					}									
					puts("Digite seu salario");
					scanf("%f",&funcionario[i].salario);
					somaDosSalarios += funcionario[i].salario;
					fflush(stdin);
					system("cls");
				}
			
			break;
			case 3:
				system("cls");
				puts("Maior Idade:");
				printf("%i \n",maiorIdade);
				puts("Menor Idade:");
				printf("%i \n",menorIdade);			
				system("pause");
			break;
			case 4:
				system("cls");	
				puts("Quantidade de homens:");	
				printf("%i \n",qtdHomens);
				puts("Quantidade de mulheres:");
				printf("%i \n",qtdMulheres);
				system("pause");
			break;
			case 5:
				for(int i = 0;i<5;i++){
					somaDosSalarios += funcionario[i].salario;	
				}
				printf("%.2f \n",somaDosSalarios);
				system("pause");
			break;
			default:
			 puts("Finalizando!!!");
			break;
		}				
}while(op!=0);
}
