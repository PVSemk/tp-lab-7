//
// Created by pavel on 01.06.19.
//

#ifndef TASK1_COMMON_H
#define TASK1_COMMON_H

#include <iostream>
#include <list>
#include <vector>
#include <ctime>
#include <time.h>
#include <iterator>
#include <algorithm>
#include  <string>

typedef size_t coord_t;

struct Pair
{
    size_t x; // 0..M-1
    size_t y; // 0..N-1
};

const size_t N = 15;
const size_t M = 15;
const size_t LT_Stone = 500;
const size_t LT_Prey = 15;
const size_t LT_Predator = 12;
const size_t RT_Prey = 3;
const size_t RT_Predator = 5;
const size_t Search_Attempts = 8;

#endif //TASK1_COMMON_H
