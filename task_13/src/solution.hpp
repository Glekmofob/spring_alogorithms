#pragma once

#include <vector>

struct Lesson{
    double start;
    double end;
};

std::vector<Lesson> bestSelect(const std::vector<Lesson>& lessons);