#include <stdio.h> // biblioteca de entrada e saida
#include <locale.h> // biblioteca de locate

int main(){ //fun��o principal
	
	//entrada n1 , n2 ,opera��o 
	//
	
	//declara��o e inicializa��o da variavel
	float n1,n2,resultadoCalculo;
	char operador;
	
	setlocale(LC_ALL,"portuguese");
	
	//entrada de dados
	printf("---------------------------\n");
	printf("&nbsp; MASTER CALC 2025 PRO\n");
	printf("---------------------------\n");
	
	printf("Informe o n1: ");
	scanf("%f",&n1);
	printf("Informe a opera��o: ");
	scanf(" %c",&operador);
	printf("Informe o n2: ");
	scanf("%f",&n2);
	
	//condi��o verificar qual operador o �suario usou e fazer a opera��o dentro da condi��o
	if(operador == '+'){
		resultadoCalculo = n1 + n2;
	}else{
		if(operador == '-'){
			resultadoCalculo = n1 - n2;
		}else{
			if(operador == '*'){
				resultadoCalculo = n1 * n2;
			}else{
				resultadoCalculo = n1 / n2;
			}
		}
	}
	
	//saida de dados
	printf("O resultado da soma: %.1f",resultadoCalculo);
	
	
	return 0;
}

