#include <stdio.h>
#include <stdlib.h>


int main()
{
int num;
int fib(int n);

printf(" Digite um numero: ");
scanf("%d", &num);

printf("\n O valor de %d na sequencia Fibonacci e: %d\n", num , fib(num));

return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;

    else
        return fib(n-1)+ fib(n-2);
}
