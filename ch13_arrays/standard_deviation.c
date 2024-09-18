//computing standard deviation and mean
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the no. of elements : ");
    scanf("%d",&n);
    int *x;
    x=(int*)malloc(n*sizeof(int));
    if(x==NULL)
    {
        printf("memory allocation failed");
        return 1;
    }
    printf("enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        (sum)=(sum)+x[i];
    }
    printf("sum is %d",sum);
    int d;
    double avg=sum/n;
    printf("avg is %lf",avg);
    double variance = 0.0; // Initialize the variance.
for (int i = 0; i < n; i++) {
    variance += pow(x[i] - avg, 2);
}
    double stddev = sqrt(variance / n); // Calculate the standard deviation.

    printf("standard deviation is %f",stddev);
    free(x);
    return 0;
}
