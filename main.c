#include <stdio.h>
#include <stdlib.h>

int  main()
{
 char c;
    int n,dummy;
    do{
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= 12; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);

    }

    printf("\n do you want to make another table ?");
    printf ("\n yes : y  OR  No : n\n Enter: ");
    scanf("%d",&dummy);
    scanf("%c",&c);
    }while(c=='y');
}
