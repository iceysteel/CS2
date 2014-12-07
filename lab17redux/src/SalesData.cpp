// Fig. 17.11: ClientData.cpp
// Class ClientData stores customer's credit information.
#include <string>
#include "SalesData.h"
using namespace std;

// default ClientData constructor
SalesData::SalesData( int divisionNumberValue,
   int quarterValue, double quarterlySalesValue )
{
   setDivisionNumber( divisionNumberValue );
   setQuarter(quarterValue);
   setQuarterlySales(quarterlySalesValue);
} // end ClientData constructor

/**<

  // get account-number value
int ClientData::getAccountNumber() const
{
   return accountNumber;
} // end function getAccountNumber

// set account-number value
void ClientData::setDivisionNumber( int accountNumberValue )
{
   accountNumber = accountNumberValue; // should validate
} // end function setAccountNumber



// get balance value
double ClientData::getBalance() const
{
   return balance;
} // end function getBalance

// set balance value
void ClientData::setBalance( double balanceValue )
{
   balance = balanceValue;
} // end function setBalance

*/





/** @brief (one liner)
  *
  * (documentation goes here)
  */
void SalesData::setDivisionNumber(int num)
{
    divisionNumber = num;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int SalesData::getDivisionNumber() const
{
    return divisionNumber;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void SalesData::setQuarter(int num)
{
    quarter = num;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
int SalesData::getQuarter() const
{
    return quarter;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
void SalesData::setQuarterlySales(double num)
{
    quarterlySales = num;
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
double SalesData::getQuarterlySales() const
{
    return quarterlySales;
}


