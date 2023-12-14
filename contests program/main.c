#include <stdio.h>
#include <stdlib.h>

int main()
{long contests_numbers=0,counter=0,min_contest,max_contest,amazing_performs;
   scanf("%d",&contests_numbers);
long resualts[contests_numbers];
while(counter!=contests_numbers)
{
scanf("%d",&resualts[counter]);
while (resualts[counter]<0)
{
scanf("%d",&resualts[counter]);
}
++counter;
}

amazing_performs=high_performes(contests_numbers,resualts)+low_performes(contests_numbers,resualts);
printf("%d",amazing_performs);
    return 0;
}

int high_performes(long contests_numbers,long resualts[])
{long amazing_perfms=0,i=0,j=1;
while(j!=contests_numbers)
{
if (resualts[i]<resualts[j])

{++amazing_perfms;
  i=j;
  ++j;}


else
++j;


}
return (int)amazing_perfms;

}
int low_performes(long contests_numbers,long resualts[])
{long amazing_perfms=0,i=0,j=1;
while(j!=contests_numbers)
{
if (resualts[i]>resualts[j])

{++amazing_perfms;
  i=j;
  ++j;}


else
++j;


}
return (int)amazing_perfms;

}
