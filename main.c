#include <stdio.h>
#include <stdlib.h>

float soma(float x, float y)
{
	float z;
	z = x + y;
	return z;
}
float subtracao(float x, float y)
{
	float z;
	z = x - y;
	return z;
}
float multiplicacao(float x, float y)
{
	float z;
	z = y * x;
	return z;
}
float divisao(float x, float y)
{
	float z;
	z = x / y;
	return z;
}

void main()
{

	char user;
	char user_2;
	float x;
	float y;
	float z;

inicio:
	fflush(stdin);

	printf("***************** CALCULATOR MADE WITH FUCTION *****************\n\n");
	printf("Escolha uma operacao para ser realizada:");
	printf("\n\n+ para soma\n- para subtracao\n* para multiplicacao\n/ para divisao");
	printf("\n\nResposta: ");
	scanf("%c", &user);
	system("cls");

	printf("***************** CALCULATOR MADE WITH FUCTION *****************\n\n");
	printf("Digite o primeiro valor: ");
	scanf("%f", &x);
	printf("Digite o segundo valor: ");
	scanf("%f", &y);

	if (user == '+')
	{
		z = soma(x, y);
		printf("\nO resultado da soma eh: %.2f", z);
	}
	else if (user == '-')
	{
		z = subtracao(x, y);
		printf("\nO resultado da subtracao eh: %.2f", z);
	}
	else if (user == '*')
	{
		z = multiplicacao(x, y);
		printf("\nO resultado da multiplicacao: %.2f", z);
	}
	else if (user == '/')
	{
		z = divisao(x, y);
		printf("\nO resultado da divisao eh: %.2f", z);
	}

	fflush(stdin);
	printf("\n\nVoce deseja realizar outra operacao?\n");
	printf("\nS ou N?\n\nResposta: ");
	scanf("%c", &user_2);
	system("cls");

	if (user_2 == 's')
	{
		goto inicio;
	}
	else if (user_2 == 'S')
	{
		goto inicio;
	}
	else
	{
		printf("CALCULADORA ENCERRADA.");
	}
}
printf("Vai se ferrar, Visual Studio");