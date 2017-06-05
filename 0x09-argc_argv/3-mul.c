/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: contains arguments passed to a program
 *
 * Return: product of two numbers and returns 1 if error
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[num1] * argv[num2]));
	}
	return (0);
}
