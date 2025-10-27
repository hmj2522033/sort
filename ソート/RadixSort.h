#pragma once
#include "Sort.h"

class RadixSort : public Sort
{
public:
    void Exec(int* array, int size) override;
};