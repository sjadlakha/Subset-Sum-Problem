#include <stdio.h>
#include<stdbool.h>
#include<time.h>
//#include"helper.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bsort(int arr[], int n)
{

    for(int i = 0; i < n-1 ; i++)
    {
        for(int j = 0; j < n - i -1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
int main()
{
    clock_t t;
    t = clock();

printf("\n\n\n<<<SUBSET SUM PROBLEM WITH APPROXIMATION APPROACH>>>>\n\n");
int N=80;
    /*printf("Enter the total number of elements: ");
scanf("%d",&N);*/
int Elements[N],i;
for(int i=0;i<N;i++)
{
    Elements[i]=i+1;
}

//N=sizeof(Elements)/sizeof(Elements[0]);
/*for(i=0;i<N;i++)
{printf("Enter element number %d: ",i);
scanf("%d",&Elements[i]);}*/
int C=100;
/*printf("Enter the Target Sum: ");
scanf("%d",&C);*/
int bitmap[N], K, PSum, Iteration, Count, I, J;
bool Found;

bsort(Elements, N) ;

Iteration =1; Count =0;


int count=0;
for(i=0;i<N;i++)
{
    if(Elements[i]<=C)
    {
        count++;
    }
}

N=count;

/*for(int k=0;k<N;k++)
{
    printf("%d\t",Elements[k]);
}*/



    K=N;
    //printf("%d\t%d\t%d\n",count,N,K);

    for(I=K-1;I>=0;I--)
    {
        bitmap[I]=0;
    }

//checked

    PSum=0;

MID:
    for(I=K-1;I>=0;I--)
    {
        if ((PSum + Elements[I]) <=C)
        {

            bitmap[I]=1;
            PSum=PSum + Elements[I];
        }
        //printf("%d\t%d\t%d\n",PSum,Elements[I],bitmap[I]);
    }
   //printf("\n PSUM=%d\n",PSum);

/*for(int k=0;k<N;k++)
{
    printf("%d\n",bitmap[k]);
}*/

    if (C==PSum)
    {
        printf("One possible subset for sum equal to %d\n>>",C);
        for(i=0;i<N;i++)
        {
            if (bitmap[i]==1)
            {
            printf("%d\t",Elements[i]);
            }
        }
        printf("\n****************************\n");
        Count++;
        Found=true;
    }
    //printf("\n count=%d\n",Count);

    J=0;
    Found=false;
    while((J<N-1)&&(!Found))
    {
        if( (bitmap[J]==0)&&(bitmap[J+1]==1))
        {
            Found = true;
            break;
        }
        else
            J++;
    }
    //printf("%d--",J);
    //printf("\n");
    if (!Found)
        goto END;
    else
    {
        bitmap[J]=1;
        bitmap[J+1]=0;

        for((I=0);I<J;I++)
        {
            bitmap[I]=0;
        }
    }
    //important checking code down here!!!!!!!
   /* for(int k=0;k<N;k++)
{
    printf("%d\t",bitmap[k]);
}*/
//printf("\n");

    //print(bitmap,N);
    PSum=0;
    for(I=N-1;I>=J;I--)
    {
        if (bitmap[I]==1)
        {
            PSum+=Elements[I];
        }
    }
    K=J-1;
   // printf("%d\n",PSum);
    Iteration++;
    //printf("%d",Iteration);
    goto MID;

END:
    {printf("\n\nITERATIONS = %d\nCOUNT = %d\n********THE END*********\n",Iteration,Count);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("\nThis probelm took %f seconds to execute \n\n", time_taken);
    return 0;}

}
