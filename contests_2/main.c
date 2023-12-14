#include <stdio.h>
#include <stdlib.h>

int main()
{int contests_numbers=0,counter=0,min_contest,max_contest,amazing_performs;
   printf("Hi buddy\n------------------------\nhow many contests the coder participated at??!! ");
   scanf("%d",&contests_numbers);
   while(contests_numbers<=0)
{  scanf("%d",&contests_numbers);
   printf("-------------------------\nPlease choose from (1 to 1000)");
}
int resualts[contests_numbers];
printf("-------------------\nEnter the resualts you got of his participations :\n");
while(counter!=contests_numbers)
{
scanf("%d",&resualts[counter]);
++counter;
}
max_contest=max_result(resualts,contests_numbers);
min_contest=min_result(resualts,contests_numbers);
amazing_performs=performes(contests_numbers,resualts,max_contest);

printf("-----------------------------\nHe made an amazing %d contests",amazing_performs);
    return 0;
}
int min_result(int resualts[],int counter)
{int counter_2=0,min=resualts[0];
    for (counter_2;counter_2<counter;++counter_2)
    { if (min>resualts[counter_2])
        {min=resualts[counter_2];}

    }
return min;
}
int max_result(int resualts[],int counter)
{int counter_2=0,max=resualts[0];
    for (counter_2;counter_2<counter;++counter_2)
    { if (max<resualts[counter_2])
        {max=resualts[counter_2];}

    }
    return max;


}

int performes(int contests_numbers,int resualts[],int max_contest)
{int amazing_perfms=2,i=0,j=1;
while(j!=contests_numbers)
{
if (resualts[i]<resualts[j])

{ if (resualts[j]==max_contest)
 {break;}
 else{++amazing_perfms;
  i=j;
  ++j;}

}
else
{++j;}


}
return amazing_perfms;

}
