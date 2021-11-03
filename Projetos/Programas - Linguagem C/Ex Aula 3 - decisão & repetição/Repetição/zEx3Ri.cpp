#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    	int num, cont=0, total=0, tot, media, maiornum=0, menornum=0, soma_par=0, porc_i=0, soma_i=0;

		do{
		    printf(" Digite um numero: ");
		    scanf("%d",&num);
		    cont++;

		    total += num ;
            if(cont == 0)
			{
				maiornum = num;
				menornum = num;
			}

			else
			{
			   if(num > maiornum);
			   {
			      maiornum = num;
			   };


			   if(num < menornum && num != 0 && num > 0)
			   {
			       menornum = num;
			   };


			if (num % 2 == 0);
			{
			    soma_par += num;
			};


			if( num % 2 == 1 );
			    {
			      soma_i ++;
			      porc_i = (soma_i * 100) / cont;

			    };




			};


		}while ( num > 0);

		tot = total - num;
		media = tot / (cont-1);

		printf(" A soma de todos os numeros digitados é: %d",tot);
		printf("\n A quantidade de numeros digitados foi %d",cont-1);
		printf("\n A media foi de %d", media);
        printf("\n O maior numero digitado foi de %d",maiornum);
		printf("\n O menor numero digitado foi de %d",menornum);
		printf("\n A soma dos numeros pares será de %d", soma_par);
		printf("\n A porcentagem de numeros Impares é de %d",porc_i );
		printf("%");




    return 0;
}
