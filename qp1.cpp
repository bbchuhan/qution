#include<stdio.h>
int main()
{
int n;
printf("enter an indegr numbar\n");
scanf("%d",&n);

(n%2==0) ? printf("%d is even numbar",n):
          printf("%d is odd numbar",n);
return 0;
}