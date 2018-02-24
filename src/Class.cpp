#include "class.h"

Class::Class(std::string type, Group group, Hour hour, Teacher teacher)
{
    type_ = type;
    group_ = group;
    hour_ = hour;
    teacher_ = teacher;
}
Group Class::group()
{
    return group();
}
void Class::group(Group g)
{
    group_  = g;
}
