#include <stdio.h>
void array_insertion(int a[], int n);
int main()
{
    int n;

    printf("enter the length of your array\n");
    scanf("%d", &n);
    int a[n];
    array_insertion(a, n);
}
void array_insertion(int a[], int n)
{
    int pos, x;
    printf("enter the elements of your array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    printf("your array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%d|", a[i]);
    }

    printf("\nenter the position you want to insert the new element\n");
    scanf("%d", &pos);
    printf("enter the element you want to insert\n");
    scanf("%d", &x);

    if (pos == n)
    {
        n++;
        a[n - 1] = x;
    }
    else
    {
        for (int i = n - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
        a[pos - 1] = x;
        n++;
    }

    printf("\nyour new array is :\n");

    for (int i = 0; i < n; i++)
    {
        printf("|%d|", a[i]);
    }
}