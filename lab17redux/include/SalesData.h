#ifndef SALESDATA_H
#define SALESDATA_H

#include <string>
using namespace std;

class SalesData
{
    public:
       // default ClientData constructor
       SalesData( int = 0, int = 0, double = 0.0 );

       // accessor functions for accountNumber
       void setDivisionNumber( int );
       int getDivisionNumber() const;

        void setQuarter( int );
       int getQuarter() const;

       // accessor functions for balance
       void setQuarterlySales( double );
       double getQuarterlySales() const;

    private:
        int divisionNumber; // east 1 west 2 north 3 south 4
        int quarter;
        double quarterlySales;

};

#endif // SALESDATA_H
