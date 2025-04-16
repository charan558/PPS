#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
     char rom[50];
     int a[50],l,i,k;
     printf("enter a roman number:\n");
     scanf("%s",rom);
     l=strlen(rom);
     for(i=0;i<l;i++)
     {
          switch(rom[i])
          {
               case 'I':a[i]=1;
                    break;
               case 'V':a[i]=5;
                    break;
               case 'X':a[i]=10;
                    break;
               case 'L':a[i]=50;
                    break;
               default:printf("enter a valid input");
                    break;
          }
     }
     k=a[l-1];
     for(i=l-1;i>0;i--)
          {
               if(a[i]>a[i-1])
               {
                    k=k-a[i-1];
               }
               if(a[i]<=a[i-1])
               {
                    k=k+a[i-1];
               }
          }
          printf("decimal equivalent is %d",k);
}