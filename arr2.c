#include <stdio.h>
int fun(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value %d \n %d\n", i, array[i]);
    }
    return 0;
}
int fun1(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("enter the value %d \n %d\n", i, *(ptr + 1));
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 78};
    fun(arr);
    fun1(arr);

    return 0;
}
