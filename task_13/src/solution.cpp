#include "solution.hpp"
#include <algorithm>

bool compare(const Lesson& a, const Lesson& b){
    if (a.end == b.end) return a.start < b.start;
    return a.end < b.end;
}

std::vector<Lesson> bestSelect(std::vector<Lesson> lessons){
    std::sort(lessons.begin(), lessons.end(),compare);

    std::vector<Lesson> selected;
    double cur_end = -1.;
    for (const auto& lesson : lessons){
        if (lesson.start >= cur_end){
            selected.push_back(lesson);
            cur_end = lesson.end;
        }
    }
    return selected;
}