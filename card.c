#include<stdio.h>

int main()
{
    int opp,i;
    printf("Select the number : \n 1: CHECK WEATHER CARD IS VALID IS NOT \n 2: FIND THE LAST DIGIT OF THE CARD \n");
    scanf("%d",&opp);
    long long int las,n,dig,card;
    int sum,check,dc;
    printf("ENTER YOUR CARD NUMBER : \n");
    scanf("%lld",&card);
    dig=card;
    n=1;
    sum=0;
   if(opp==1)
    {
    while(card!=0)
    {
        las = card%10;
        card = card/10;
    if(n%2==0)
        {
            las = las*2;
         if((las/2)<5)
           {
            sum = sum+las;
           }
            else
            {
              dc = las;
                while(las!=0)
                {
                    dc = las%10;
                   sum = sum+dc;
                    las = las/10;
                }
            }
        }
        else
            {
                 sum = sum+las;
            }
            n++;
            continue;
   }

 if (sum%10==0)
        printf(" \n \n \t ............card is valid ..................\n");
  else
      printf("\n \n \t .............card is not valid................. \n");

}
else
{
    card= card*10;
    while(card!=0)
    {
        las = card%10;
        card = card/10;
    if(n%2==0)
        {
            las = las*2;
         if((las/2)<5)
           {
            sum = sum+las;
           }
            else
            {
              dc = las;
                while(las!=0)
                {
                    dc = las%10;
                   sum = sum+dc;
                    las = las/10;
                }
            }
        }
        else
            {
                 sum = sum+las;
            }
            n++;
            continue;
   }
   for(i=0;i<=9;i++)
   {
       if((sum+i)%10==0)
       {
           printf(" \n \t \t last digit is :- %d \n",i);
       }
       else
        continue;
   }

}
printf("\n \n \n \n\n \n \n \n\n \n \n \n");

return main();
}
