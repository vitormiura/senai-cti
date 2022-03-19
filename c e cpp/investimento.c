#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>

#define PERIODO_SIMULACAO 12 //meses
#define VALOR_INVESTIMENTO 350000 //reais

int main(){
	
	float valor_inicial = 0, deposito = 0, taxa = 0,;
	bool continua = false;
	
	system("color f4");
	
	puts("Informe os dados para a simulação: \n");
	puts("Valor inicial do Investimeto:");
	scanf("%f", &valor_inicial);
	fflush(stdin);
	
	puts("Valor inicial do Deposito Mensal:");
	scanf("%f", &deposito);
	fflush(stdin);
	
	puts("Taxa(%):");
	scanf("%f", &taxa);
	fflush(stdin);
	
	taxa = (taxa / 100);
	
	do{
		system("cls"); 
		
		
		for(int p=0; p<PERIODO_SIMULACAO; p++){
			
			if(valor_final ++ VALOR_INVESTIMENTO_FINAL){
				continua=false;
				break;
			}
			
			
		}
		
        
        
		
		
		
		
		
	}while(continua == true);
	
	
	
}