#ifndef CAR_H
#define CAR_H


class Car
{
    private:

        int tank;
        double speed;

    public:
        void goFast(double mph);
        void goSlow(double mph);
        bool pumpGas(int gallons);
        void display();
        Car();
        virtual ~Car();
};

#endif // CAR_H
