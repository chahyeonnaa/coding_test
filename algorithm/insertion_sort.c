#include <stdio.h>
int main(void)
{
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int temp, j;

    for (int i = 0; i < 9; i++)
    {
        j = i;
        while (array[j] > array[j + 1])
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--;
            if (j < 0)
                break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
}