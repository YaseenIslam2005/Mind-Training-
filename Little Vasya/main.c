#include <stdio.h>
#include <stdlib.h>

int main()
{   // Little Vasya  orange's volume calculator
int num_drinks=0,counter=0;
float sum=0,drinks[10000]={};

//printf("Hi buddy\n\nHow many drinks in your fridge contain orange juice !!??    ");

while (num_drinks <= 0)
   {scanf("%d",&num_drinks);

    if (num_drinks<=0)
        printf("\nPlease Vasya ,enter a positieve number :(  ");
   }
//("\nWhat is the volume  orange juice in the drinks ??   \n");
for(counter;counter<num_drinks;++counter)
{

    scanf("%f",&drinks[counter]);

  /*  while(drinks[counter]<0)
{           printf("\nPlease enter a positieve number :(  ");

            scanf("%f",&drinks[counter]);
}*/
    sum=sum+(drinks[counter]/100);
}

printf("%f",(sum/num_drinks)*100);
    return 0;
}
