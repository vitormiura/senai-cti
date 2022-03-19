#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

int op = 0;
int idFuncionario = -1;
int maiorIdade=0,menorIdade=0;
int qtdMulheres=0,qtdHomens=0;
float somaDosSalarios=0;



struct Funcionarios{
	int id;
	char nome[30];
	int idade;
	char funcao[15];
	char sexo;
	float salario;
};

struct Funcionarios funcionario[3];

void menu(){
	system("cls");
	puts("--------------- MENU ----------------");
	puts("[1] - Cadastro de funcionarios ");
	puts("[2] - Listar funcionarios cadastrados ");
	puts("[3] - Listar dados estatisticos da empresa ");	
	puts("[0] - Sair ");
	puts("-------------------------------------");
	scanf("%i",&op);
	fflush(stdin);
}

void cadastro(){
	puts("-------------------------------------");
	for(int i = 0;i<2;i++){
		puts("Digite o ID do funcionario:");
		scanf("%i",&funcionario[i].id);
		fflush(stdin);
		puts("Digite o nome do funcionario:");
		scanf("%s",funcionario[i].nome);
		fflush(stdin);
		puts("Digite a idade do funcionario:");					
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
		puts("Digite a funcao do funcionario:");
		gets(funcionario[i].funcao);
		fflush(stdin);
		puts("Digite o sexo do funcionario: [m] - Masculino ou [f] - Feminino");
		scanf("%s",funcionario[i].sexo); 
		fflush(stdin);
		if(funcionario[i].sexo == 'm'){
						qtdHomens++ ;
					}else{
						qtdMulheres++ ;
					}
		puts("Digite o salario do funcionario:");					
		scanf("%f",&funcionario[i].salario);
		somaDosSalarios += funcionario[i].salario;
		fflush(stdin);
		system("cls");
	}
	puts("-------------------------------------");	
}

void cadastrados(){
system("cls");
	puts("Lista de funcionarios cadastrados: ");
	puts("-------------------------------------");	
	for(int i = 0;i<2;i++){					
		puts("ID do funcionario: ");
		printf("%i \n",funcionario[i].id);					
		puts("Nome do funcionario: ");
		printf("%s \n",funcionario[i].nome);					
		puts("Funcao do funcionario: ");
		printf("%s \n",funcionario[i].funcao);
		puts("idade do funcionario: ");
		printf("%i \n",funcionario[i].idade);					
		puts("Sexo do funcionario: ");
		printf("%s \n",funcionario[i].sexo);	
		puts("Salario do funcionario: ");
		printf("%.2f \n",funcionario[i].salario);
		puts("-------------------------------------");										
	}		
	system("pause");
}

void dados(){
	system("cls");
	puts("---------- DADOS ESTATISTICOS ----------");
	for(int i = 0;i<2;i++){
		system("cls");
				puts("Maior Idade:");
				printf("%i \n",maiorIdade);
				puts("Menor Idade:");
				printf("%i \n",menorIdade);			
				system("pause");
				
				system("cls");	
				puts("Quantidade de homens:");	
				printf("%i \n",qtdHomens);
				puts("Quantidade de mulheres:");
				printf("%i \n",qtdMulheres);
				system("pause");
				
				for(int i = 0;i<5;i++){
					somaDosSalarios += funcionario[i].salario;	
				}
				printf("%.2f \n",somaDosSalarios);
				system("pause");
	}		
}

			

int main(){
system("color f5");	
	do{
		menu();
		switch(op){
			case 1:
				cadastro();
			break;
			case 2:
				cadastrados();
			break;
			case 3:
				dados();
			break;
			default:
				puts("--------------------------------");
				puts("\nFinalizando...");
			break;	
		}						
	}while(op!=0);			
}
