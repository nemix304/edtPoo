#include <iostream>
#include "teacher.h"
#include "group.h"
#include "edt.h"
#include "cours.h"
#include <string>
#include <vector>
using namespace std;

int main()
{
    edt e1;
    std::vector<Group> groupList;
    for(int i = 0 ; i<5; i++)
    {

        groupList.push_back(Group());
    }
    for(int i =0; i<25; i++)
    {
        e1.addHour(std::vector<Cours>());
        for(int j = 0; j<2; j++)
        {


            e1.addCours(i, Cours());
        }

        cout<<e1.schedule().size();
        cout<<"\n";
    }

    return 0;
}
