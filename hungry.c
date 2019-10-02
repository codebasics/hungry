#include <stdio.h>
int main()
{
int a;
printf("Are you hungry?\n");
scanf("%d", &a);
if (a==1)
printf("Eat ice-cream.");
else 
printf("Go back to the bed.");
return 0;
}
