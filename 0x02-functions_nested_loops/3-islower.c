/*
 * _islower - _islower is 1 and other 0
 *
 * return: if c is lowercase 1 and otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
