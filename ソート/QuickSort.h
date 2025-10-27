#pragma once
#include "Sort.h"

class QuickSort : public Sort
{
public:
    void Exec(int* array, int size) override;

private:
    void Quick(int* array, int left, int right);
};
