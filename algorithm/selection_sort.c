#include <stdio.h>

int main(void)
{
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int i, j, index, temp, min;

    for (int i = 0; i < 10; i++)
    {
        min = 999;
        for (j = i; j < 10; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
        }
    return 0;
}
