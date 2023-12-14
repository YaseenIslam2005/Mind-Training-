#include <stdio.h>
#include <stdlib.h>
total_ppl[1000]={};
int main()
{  int capacity,stops=0;

     while(stops<=1)
    {
      //  printf("Enter the number of stops from (2 to 1000) :  ");
        scanf("%d",&stops);
    }

    capacity=tram_capacity(stops);
    printf("%d",capacity) ;

    return 0;
}

int tram_capacity(int stops)
{
 int capacity=0,ppl_enter[1000]={},ppl_exit[1000]={},counter=0;

    for(counter;counter<stops;++counter)

    {

     if (counter==0)
     {
         capacity=first_stop(ppl_enter,ppl_exit);
         continue;
     }


     scanf("%d%d",&ppl_exit[counter],&ppl_enter[counter]);

     total_ppl[counter]=total_ppl[counter-1]-ppl_exit[counter]+ppl_enter[counter];


     while(ppl_exit[counter]>total_ppl[counter-1])

     {
     scanf("%d%d",&ppl_exit[counter],&ppl_enter[counter]);

     total_ppl[counter]=total_ppl[counter-1]-ppl_exit[counter]+ppl_enter[counter];}

     if (total_ppl[counter]>capacity)

        {capacity=total_ppl[counter];}


    }


return capacity;


}

int first_stop(int ppl_exit[],int ppl_enter[])
{ int counter=0,capacity=0;


        scanf("%d%d",&ppl_exit[counter],&ppl_enter[counter]);

        while (ppl_exit[counter]!=0)
        {


         scanf("%d%d",&ppl_exit[counter],&ppl_enter[counter]);
        }

        total_ppl[counter]=ppl_enter[counter];

        capacity=total_ppl[counter];

        return capacity;
}
