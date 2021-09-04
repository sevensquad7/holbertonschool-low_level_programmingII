#include "lists.h"

listint_t *nodolista (const listint_t *n)
{
	listint_t *turtle = (listint_t *) n, *rabit;

	if (n == NULL)
	{
		return (NULL);
	}
	rabit = turtle->next;
	while (rabit != NULL)
	{
		rabit=rabit->next;
		if (rabit == NULL)
		{
			return (NULL);
		}
		rabit=rabit->next;
		turtle=turtle->next;
		if (rabit == turtle)
		{
			rabit = (listint_t *) n;
			while (rabit != turtle)
			{
				turtle=turtle->next;
				if (rabit == turtle)
				{
					return(rabit);
				}
				
				rabit=rabit->next;
			}
			
			return(rabit);
		}
	}
	return(NULL);
}

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
	{
		return (NULL);
	}
	
	return(nodolista (head));
}


