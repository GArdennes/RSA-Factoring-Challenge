#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void factor_op(char *input)
{
	int num = atoi(input), i;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			printf("%d=%d*%d\n", num, i, num / i);
			num /= i;
		}
	}
}

int main(int argc, char **argv)
{
	size_t size = 0;
	int read;
	FILE *file;
	char *input = NULL;

	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		return (1);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		printf("Could not open file\n");
		return (1);
	}

	while ((read = getline(&input, &size, file)) != -1)
	{
		if (input[read - 1] == '\n')
			input[read - 1] = '\0';
		factor_op(input);
	}
	free(input);
	fclose(file);
	return (0);
}

