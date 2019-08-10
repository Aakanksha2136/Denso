#include <stdio.h>
int main()
{
    int cost,discount,totalcost=0,discountcost;
    scanf("%d %d",&cost,&discount);
    totalcost=cost;
    while(cost>1)
    {
        discountcost =(cost*discount)/100;
        totalcost=(totalcost)+(cost-discountcost);
        cost=cost-discountcost;
    }
    printf("%d",totalcost);
    return 0;
}
