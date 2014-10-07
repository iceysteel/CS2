#ifndef TIME_H
#define TIME_H


class time
{
    public:
        time();
        void setTime(int,int,int);
        void printUniversal();
        void printStandard();
        virtual ~time();
    private:
        int hour;
        int minute;
        int second;
};

#endif // TIME_H
