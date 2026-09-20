#include<stdio.h>
int main()
{
    int n,odd=0,even=0;
    printf("enter the length of your array\n");
    scanf("%d",&n);
    int a [n];
    printf("enter the elements of your array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    for (int i = 0; i < n; i+=2)
    {
        odd += a[i];
    }
    for (int i = 1; i < n; i+=2)
    {
        even += a[i];
    }
    
    printf("\n the sum of elements at odd index of array is : %d \n", odd);
    printf("\n the sum of elements at even index of array is : %d \n", even);
    printf("\nthe difference of odd and even indices is (odd-even): %d\n",odd-even);

    
}