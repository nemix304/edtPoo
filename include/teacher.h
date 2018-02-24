#ifndef TEACHER_H
#define TEACHER_H
#include <string>


class Teacher
{
    public:
        Teacher() = default;
        Teacher(std::string name);

    protected:

    private:
        std::string name_;
};

#endif // TEACHER_H

