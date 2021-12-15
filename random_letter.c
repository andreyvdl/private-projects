#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char gen_ran_letter();

int main(void)
{
	int j;

	Start:
	{
		printf("Escolhe:\n1 -Gerar letra\n0 -Sair\n\n");
		scanf("%d", &j);
	}

	if (1 == j)
		printf("Letra: %c\n\n", gen_ran_letter());

	/*
	** DONT EVEN THINK IN USING else if OR else
	** YEAH I TRIED
	*/
	if (j != 0)
		goto Start;

	if (0 == j)
		return 0;
}

/*
** function to call a random letter
** ASCII: 65 = A, 90 = Z
*/
char gen_ran_letter()
{
	int i;
	char result;

	/*
	** generate a seed
	** i receives a number relative to the 26 letters
	** keep in mind: rand() % n = [0... n-1]
	** convert the int to a char with the ASCII value
	*/
	srand(time(NULL));
	i = rand() % 26;
	result = i + 'A';

	return result;
}