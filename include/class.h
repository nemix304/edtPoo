#ifndef CLASS_H
#define CLASS_H
#include "teacher.h"
#include "group.h"
#include "hour.h"
#include <string>

class Class
{
    public:
        Class(std::string type, Group group, Hour hour, Teacher teacher);
        Group group();
        void group(Group g);

    protected:

    private:
        std::string type_;
        Group group_;
        Hour hour_;
        Teacher teacher_;
};

#endif // CLASS_H
