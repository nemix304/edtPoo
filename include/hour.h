#ifndef HOUR_H
#define HOUR_H


class Hour
{
    public:
        Hour() = default;
        Hour(int time);

        /*Hour(const Hour&) = default;
        Hour(Hour&&) = default;
        Hour& operator=(const Hour&) = default;
        Hour& operator=(Hour&&) = default;
        virtual ~Hour() = default;"""
*/
    protected:

    private:
        int time_;
};

#endif // HOUR_H
