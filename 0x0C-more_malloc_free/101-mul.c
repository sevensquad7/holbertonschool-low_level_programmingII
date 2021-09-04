#include <stdio.h>
#include <stdlib.h>

void set_to_zero(char *str, int len)
{
	int i;

	for (i = 0; i < len; i++)
		str[i] = '0';
}

int is_valid_num(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (0);

	return (1);
}

int len(char *str)
{
	int l = 0;

	while (str[l])
		l++;

	return (l);
}

void print_res(char *n1, char *n2)
{
	int l1, l2, len_res, pos, dig1, dig2, cifra, lleva = 0;
	int i, in1, in2, mult, cif, pos_cif;
	char *res;

	if (!is_valid_num(n1) || !is_valid_num(n2))
	{
		printf("Error\n");
		exit(98);
	}

	l1 = len(n1);
	l2 = len(n2);

	len_res = l1 + l2 + 1;

	res = malloc(sizeof(*res) * len_res);
	if (res == NULL)
		return;

	set_to_zero(res, len_res);

	res[--len_res] = '\0';
	pos = len_res - 1;

	for (in1 = l1 - 1; in1 >= 0; in1--)
	{
		len_res = pos;
		lleva = 0;
		for (in2 = l2 - 1; len_res >= 0 && in2 >= 0; in2--)
		{
			dig1 = n1[in1] - '0';
			dig2 = n2[in2] - '0';

			cif = res[len_res] - '0';
			mult = (dig1 * dig2) + lleva + cif;
			cifra = mult % 10;
			lleva = mult / 10;

			res[len_res--] = cifra + '0';
		}

		pos--;
		res[len_res--] = lleva + '0';
	}

	if (res[++len_res] == '0')
		len_res++;

	printf("%s\n", &res[len_res]);

	free(res);
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	print_res(av[1], av[2]);

return (0);
}
