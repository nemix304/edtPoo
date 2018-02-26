#ifndef COURS_H
#define COURS_H
#include "teacher.h"
#include "group.h"

#include <string>

class Cours
{
    public:

        Cours(std::string type, Group group, int hour, Teacher teacher);
        Group group();
        void group(Group g);
        Teacher teacher();
        void teacher(Teacher t);
        int hour();
        void hour(int h);
        std::string type();
        void type(std::string t);
        inline Cours()
        {
            type_ = "defaultType";
            group_ = Group();
            hour_ = 0;
            teacher_ = Teacher();
        }

    protected:

    private:
        std::string type_;
        Group group_;
        int hour_;
        Teacher teacher_;
};

#endif // COURS_H
