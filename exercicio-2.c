/*Note que o exercicio pede a entrada de dois numeros e como saida apenas o resultado,
ou seja, não é necessário nenhum printf com mensagens como "Digite um numero". Além disso,
pode-se usar uma vairavel soma para receber A+B ao invés de usar A+B no printf.*/
#include <stdio.h>
int main(){

	int A, B;
	scanf("%d",&A);
	scanf("%d",&B);

    printf("%d", A+B);
    
    return 0;
}