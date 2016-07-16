# stringreverse
#include<stdio.h>
int main()
{
 char str[]="deepika";
 int ctr,size,ctr1;
 half=sizeof(str)/2;
 size=sizeof(str)-1;
 for(ctr=0,ctr1=size;ctr<=half;ctr++,ctr1--;)
 {
    temp=str[ctr];
    str[ctr]=str[ctr1];
    str[ctr1]=temp;
 }
 printf("%s",str);

}
