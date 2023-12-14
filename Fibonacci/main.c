#include<stdio.h>
int main()
{int fibonacci[6]={0,1},counter=2;

for(counter;counter<6;++counter)
{
fibonacci[counter]=fibonacci[counter-1]+fibonacci[counter-2];
}

for(counter=0;counter<6;++counter)
{
printf("%d\t",fibonacci[counter]);
}

return 0;
}
