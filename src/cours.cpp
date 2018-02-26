#include "cours.h"

Cours::Cours(std::string type, Group group, int hour, Teacher teacher)
{
    type_ = type;
    group_ = group;
    hour_ = hour;
    teacher_ = teacher;

}
Teacher Cours::teacher()
    {
        return teacher_;
    }

    void Cours::teacher(Teacher t)
    {
        teacher_ = t;
    }

    int Cours::hour()
    {
        return hour_;
    }

    void Cours::hour(int h)
    {
        hour_ =h;
    }

    std::string Cours::type()
    {
        return type_;
    }

    void Cours::type(std::string t)
    {
        type_ = t;
    }

    Group Cours::group()
    {
        return group();
    }
    void Cours::group(Group g)
    {
        group_  = g;
    }
