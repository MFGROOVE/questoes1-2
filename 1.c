#include <stdio.h>
#define MAX 30

int calcfib(int fib[])
{
int i;
for ( i = 2; i < MAX; i++)
{
    fib[i]=fib[i-1]+fib[i-2];
}
return fib;

}


int main()
{
    int num;
    int fib[MAX];
    int flag=1;
    fib[0]=0;
    fib[1]=1;
calcfib(fib);
printf("Digite seu numero:\n");
scanf("%d",&num);
for (int i = 0; i < MAX; i++)
{
   if (num==fib[i])
   {
    printf("o numero esta na posição %d",i-1);
    return 0;
   }
   
}
printf("esse numero nao existe na sequenca até a posição 30 da sequencia de fibonacci ");


    return 0;
}

