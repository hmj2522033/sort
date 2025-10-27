#pragma once
#include "Sort.h"

class SelectionSort : public Sort
{
public:
    void Exec(int* array, int size) override;
};