#include "QuickSort.h"

void QuickSort::Exec(int* array, int size)
{
    Quick(array, 0, size - 1);
}

void QuickSort::Quick(int* array, int left, int right)
{
    if (left >= right) return;

    int pivot = array[(left + right) / 2];
    int i = left;
    int j = right;

    while (i <= j)
    {
        while (array[i] < pivot) i++;
        while (array[j] > pivot) j--;

        if (i <= j)
        {
            Swap(array[i], array[j]);
            i++;
            j--;
        }
    }

    Quick(array, left, j);
    Quick(array, i, right);
}