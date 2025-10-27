#include "RadixSort.h"
#include <vector>
#include <cmath>

void RadixSort::Exec(int* array, int size)
{
    int maxVal = array[0];
    for (int i = 1; i < size; ++i)
        if (array[i] > maxVal)
            maxVal = array[i];

    for (int exp = 1; maxVal / exp > 0; exp *= 10)
    {
        std::vector<int> output(size);
        int count[10] = { 0 };

        for (int i = 0; i < size; ++i)
            count[(array[i] / exp) % 10]++;

        for (int i = 1; i < 10; ++i)
            count[i] += count[i - 1];

        for (int i = size - 1; i >= 0; --i)
        {
            int digit = (array[i] / exp) % 10;
            output[count[digit] - 1] = array[i];
            count[digit]--;
        }

        for (int i = 0; i < size; ++i)
            array[i] = output[i];
    }
}
