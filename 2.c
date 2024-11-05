#include <stdio.h>
#define MAX 10



int main()
{
int j=0;
char string[MAX];
printf("escreva sua string de até 10 caracteres:\n");
scanf(" %s",&string);

for (int i = 0; i < MAX; i++)
{
    if (string[i] == 'a'||string[i]=='A')
    {
        j++;
    }
    
}
printf("a letra 'a' apareceu %d vezes",j);






    return 0;
}