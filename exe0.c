#include<stdio.h>
#include<windows.h>
#include<locale.h>

main(){
	char nome[50], sobrenome[50];
	int idade;
	
	//system("chcp 1252 > nul");
	//setlocale(LC_ALL, "";)
	
	printf("\n\nDigite o seu nome: ");
	gets(nome);
	
	printf("\nDigite o seu sobrenome: ");
	gets(sobrenome);
	
	printf("\n\nDigite sua idade: ");
	scanf("%d", &idade);
	
	printf("\n\nBoa noite, %s %s - voce possui %d anos",nome,sobrenome,idade);
}

