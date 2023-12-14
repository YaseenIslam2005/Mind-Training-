#include <stdio.h>
#include <stdlib.h>
long lucky_number_check1(long number);

long lucky_number_check2(long number);

long main()
{ long number=0,check_1=0,check_2=0,number_copy;

   scanf("%d",&number);


   check_1=lucky_number_check1(number);
   check_2=lucky_number_check2(number);


    if (check_1 || check_2)
        printf("YES");
    else
        printf("NO");

return 0;
}


long lucky_number_check1(long number)
{ long check_1=0,i,t;

  while(number!=0)
  {i=number%10;
  t=number%10;

    if ((i)==7 || (t)==4 || (number==4) || (number==7))
    {check_1=1;}
    else
    {return 0;}

    number=number/10.0;
  }

  return check_1;

}


long lucky_number_check2(long number)
{
    long check_2,counter=4;

   for(counter;counter<number;++counter)
   {
       if (number%counter==0)
       {
           check_2=lucky_number_check1(counter);
           if(check_2)
           {
               return check_2;
           }
       }
   }



    return check_2;
}
