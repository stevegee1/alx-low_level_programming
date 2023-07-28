/**
 * _print_Number_helper - handles the logic of is_prime_num
 * @n: Integer
 * @x: integer
 * Return: integer
 */
int _print_Number_helper(int n, int x)
{
	if (x > n / 2)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (_print_Number_helper(n, x + 1));
}
/**
 * is_prime_number - returns 1 if prime number
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	int x = 1;
	int z;

	if (n <= 1)
	{
		return (0);
	}
	z = _print_Number_helper(n, x + 1);
	return (z);
}

