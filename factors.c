#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void factor_op(char *input)
{
	int num = atoi(input), i, pair_count = 0;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			if (pair_count < 1)
			{
				printf("%d=%d*%d\n", num, i, num / i);
				pair_count++;
			}
			num /= i;
		}
	}
}

int main(int argc, char **argv)
{
	size_t size = 0;
	int read;
	FILE *file;
	char *input = NULL, *content = NULL;

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

	if ((read = getline(&input, &size, file)) != -1)
	{
		content = strtok(input, "\n");
		while (content)
		{
			factor_op(content);
			content = strtok(NULL, "\n");
		}
	}
	free(input);
	free(content);
	fclose(file);
	return (0);
}

