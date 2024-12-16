// calc.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rational.h"
#include "rat_math.h"
#include "rat_io.h"

int main()
{
	char line[100];
	rational_t last_result = {0, 1}; // Храним последний результат

	while (fgets(line, sizeof(line), stdin))
	{
		char op;
		rational_t a, b;

		// Разбор строки
		if (sscanf(line, "%s %c %s", line, &op, line) == 3)
		{
			if (strcmp(line, "last") == 0)
				a = last_result;
			else
				a = rat_parse(line);

			if (strcmp(line, "last") == 0)
				b = last_result;
			else
				b = rat_parse(line);

			rational_t result;
			switch (op)
			{
				case '+': result = rat_add(a, b); break;
				case '-': result = rat_sub(a, b); break;
				case '*': result = rat_mul(a, b); break;
				case '/': result = rat_div(a, b); break;
				default: continue;
			}
			last_result = result;
			printf("= ");
			rat_print(result);
			printf("\n");
		}
	}
	return 0;
}
