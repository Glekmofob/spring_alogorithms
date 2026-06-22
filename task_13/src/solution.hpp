#pragma once

#include <vector>
#include <iostream>

struct Lesson{
    double start;
    double end;
};

std::vector<Lesson> bestSelect(std::vector<Lesson>& lessons);