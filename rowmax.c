#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter the row or col of an array: ");
    scanf("%d",&n);
    int arr[n][n];
    int maxsum=0,index=0;

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for( i=0;i<n;i++)
    {  int sum=0;
        for(j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }

        if(sum>maxsum)
            {
                maxsum=sum;
                index=i;
            }
    }

    printf("The row with max sum is %d \n",index+1);
    printf("The max sum is %d",maxsum);
}