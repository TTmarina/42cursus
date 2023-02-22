

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_persona
{
	int edad;
	char *nomber;
	char *apellido;
	struct s_persona *next;
} t_persona;

int main()
{
	struct s_persona persona1;
	t_persona persona2;
	t_persona persona3;
	t_persona persona4;

	persona1.edad = 12;
	persona1.nomber = "Iker";
	persona1.apellido = "Trueba";
	persona1.next = &persona4;

	persona2.edad = 32;
	persona2.nomber = "Jon";
	persona2.apellido = "Perilla";
	persona2.next = &persona3;

	persona3.edad = 32;
	persona3.nomber = "Luis";
	persona3.apellido = "Perilla";

	persona4.edad = 64;
	persona4.nomber = "Teresa";
	persona4.apellido = "Perilla";
	persona4.next = &persona2;

	printf("%i", persona4.next->edad);
	return (0);
}