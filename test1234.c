#include<stdio.h>

int main(void)
{
int F1 = 1,F2 = 1,i,n,F3;

printf("Enter n:\n");

scanf("%d",&n);

printf("%d %d",F1,F2);

for(i=3;i<=n;i++){

    F3 = F1+F2;
    F1 = F2;
    F2 = F3;
}

printf("F3=%d",F3);

return 0;
}