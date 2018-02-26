#ifndef EDT_H
#define EDT_H

#include <vector>
#include "teacher.h"
#include "group.h"
#include "cours.h"

#include <string>
class edt
{
    public:
        edt();
        inline void addHour(std::vector<Cours> a)
        {
            schedule_.push_back(a);
        }
        inline void addCours(int h, Cours c)
        {
            schedule_[h].push_back(c);
        }
        inline std::vector< std::vector<Cours> >  schedule()
        {
            return schedule_;
        }
        inline void schedule(std::vector< std::vector<Cours> >  s)
        {
            schedule_ = s;
        }
    protected:

    private:
        std::vector< std::vector<Cours> > schedule_;

};

#endif // EDT_H
