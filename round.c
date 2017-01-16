#include<stdio.h>

int main()
{
    int n,k,Loop,Check,Count=0,Zero_Count=0;

    scanf("%d%d",&n,&k);

    int Array[n];

    for(Loop=0; Loop<n; Loop++)
    {
        scanf("%d",&Array[Loop]);
    }


    Check=Array[k-1];

    for(Loop=0; Loop<n; Loop++)
    {
        if(Array[Loop]==0)
            Zero_Count++;

        else if(Check<=Array[Loop])
            Count++;
    }

    if(Zero_Count==n)
        printf("%d\n",0);
    else
        printf("%d",Count);

    return 0;

}