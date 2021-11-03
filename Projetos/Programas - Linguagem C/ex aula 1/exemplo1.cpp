int main()
{
    int num=10, num2;
    float real, real2;
    char letra1='s', letra2='e', letra3;
    num2=3;
    real=real2=10.4;
    printf("Hello World");
    printf("\nValores: num2 = %d e num =  %d",num2, num);
    printf("\nReais: %f e %f",real,real2);
    printf("\nLetras: %c <=> %c\n",letra1, letra2);
    printf("Caractere: %c\n",'J');
    printf("Inteiro: %d\n",258);
    printf("Caractere: %c\n",65); //Converte 65 em caractere
    printf("Valor: %o\n",15); //Converte 15 em octal
    printf("Valor: %x\n",15); //converte 15 em Hexadecimal
    printf("num/num2 = %d",num/num2);
    printf("num/num2 = %f",(float)num/(float)num2);

    return 0;
}
