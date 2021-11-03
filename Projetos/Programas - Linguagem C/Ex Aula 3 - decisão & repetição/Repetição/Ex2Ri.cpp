#include <stdio.h>
#include <locale.h>

int main()
{
float alt_Mar= 1.57, alt_Joa= 1.45, anos=0;

            alt_Mar=alt_Mar + 0.15;
            alt_Joa = alt_Joa + 0.23;

            anos = anos++;

while(alt_Joa < alt_Mar);
{

            printf("\nNo ano %d, a altura de Maria era de: %f cm e a altura de João era de: %d cm\n",anos, alt_Mar, alt_Joa);
			alt_Mar=alt_Mar + 0.15;
		     alt_Joa = alt_Joa + 0.23;

		     printf("\nNo ano %d, a altura de Maria era de: %f e a altura de João era de: %fcm\n",anos, alt_Mar, alt_Joa);

}
printf("%d anos", anos);

return 0;
}
