#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter the row or col of an array: ");
    scanf("%d",&n);
    int arr[n][n];
    int sumrow[n];
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
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }
        sumrow[i]=sum;
    }
    printf("The vector matrix is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d 3",sumrow[i]);
    }
}