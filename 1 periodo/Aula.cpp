//inserindo bibliotecas
#include<stdio.h>
#include<locale.h>
#include<math.h> 
   
   
main() {
   	float nota1, nota2, media;
   	// entrada de dados
   	setlocale(LC_ALL, "portuguese");
	printf("Digite sua nota: ");
   	scanf("%f", &nota1);
   	printf("Digite sua nota: ");
   	scanf("%f", &nota2);
   	// processamento de dados
   	media = (nota1 + nota2)/2;
   	// saida de dados
   	if(media >= 60) {
		printf("\nA media é: %.2f e o Aluno está aprov", media);
    }
}
