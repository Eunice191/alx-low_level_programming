#include <stdio.h>

/**
*main - printing number of arguments passed into it
*@argv: argument
*@argc: argument count
*Return: nothing
*/
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
