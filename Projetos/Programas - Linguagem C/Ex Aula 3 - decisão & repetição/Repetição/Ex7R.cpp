#include <stdio.h>
#include <locale.h>

int main()
{
char sex;
int alt, i, ma_alt, me_alt, num_h, sex_mais_alt, soma_alt_mulheres, tot_homens, med_alt_mulheres ;

setlocale(LC_ALL, "Portuguese");

for (i=1; i<= 15; i++)
{
    printf("\n%d Qual � seu sexo (M/f): ",i);
    scanf("%c",&sex);
fflush(stdin);

    printf("\n %d Qual � sua altura: ",i);
    scanf("%d",&alt);
fflush(stdin);


	if(i == 0)
			{
				ma_alt = alt;
				me_alt = alt;
				sex_mais_alt = sex;
			}
    else
    {
			   if(alt > ma_alt);
			   {
			      ma_alt = alt;
			      sex_mais_alt = sex;
			   }

			   if(alt < me_alt);
			      me_alt = alt;

    }

    	if(sex == 'M' || sex == 'm')
			   tot_homens++;
        else
        {


			   soma_alt_mulheres = soma_alt_mulheres + alt; // soma_alt_mulhres += altura

		}

		    }
		    if (tot_homens < 15)
		    med_alt_mulheres = soma_alt_mulheres / (15 - tot_homens);

		    else{
		    med_alt_mulheres = 0.0;
		    }
		printf("A maior altura foi %d e a menor foi ", me_alt);
		printf("\nA média das alturas das mulhres é : %d",med_alt_mulheres);
		printf("\nO número de homens é %d", tot_homens);
		printf("\nO sexo da pessoa mais alta é %c", sex_mais_alt);

  return 0;
}






