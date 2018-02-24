#ifndef GROUP_H
#define GROUP_H
#include <string>

class Group
{
    public:
        Group() = default;
        Group(std::string name);



    protected:

    private:
        std::string name_;
};

#endif // GROUP_H
