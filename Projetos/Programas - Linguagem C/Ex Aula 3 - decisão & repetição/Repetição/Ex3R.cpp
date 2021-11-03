#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
 int cod_cid=0, num_vei, num_aci, total_aci, maiorin=0, indice=0, mediatot=0, total_vei=0, cont2=0,cont;

			for(int cont=0; cont<=6; cont++);
			{

		printf("\n Insira o codigo da cidade: ");
		scanf("%d",&cod_cid);

		printf("\n Insira o numero de veiculos de passeios no ano: ");
		scanf("%d",&num_vei);

		printf("\n Insira o numero de acidentes na cidade: ");
		scanf("%d",&num_aci);



	total_vei += num_vei;

	indice = num_vei / num_aci;

	printf("\n O indice de acidentes da cidade %d", cod_cid);
	printf(" é  de %d", indice);
	printf("\n ____________________________________________________________________________________\n");

	printf("\n ___________***************Informe outra cidade****************____________\n");


	if(cont == 0)
	    maiorin = indice;

	else
	{
	    if(indice > maiorin);

	    maiorin = indice;



	}

    mediatot = total_vei / (cont + 1);

	if (num_vei < 2000 )
	{
	    cont2 += num_vei;
	}



	}
		printf("\n Media do total de veiculos é %d", mediatot);
	    printf("\n O maior indice é da cidade %d", cod_cid);
	    printf("\n O total de veiculos é de: %d", cont2)   ;



    return 0;
}

