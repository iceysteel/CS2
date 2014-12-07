// Fig. 17.13: Fig17_13.cpp
// Writing to a random-access file.
#include <iostream>
#include <fstream>
#include <cstdlib> // exit function prototype
#include "SalesData.h" // ClientData class definition

int main()
{
   int accountNumber;
   int divisionNum;
    int quarter;
    double quarterlySales;
    //fstream outSalesData
   fstream outSalesData( "credit.dat",ios::in | ios::out | ios::binary );

   // exit program if fstream cannot open file
   if ( !outSalesData )
   {
      cerr << "File could not be opened." << endl;
      exit( 1 );
   } // end if

   cout << "Enter account number (1 to 100, 0 to end input)\n? ";

   // require user to specify account number
   SalesData sales;
   cin >> accountNumber;

   // user enters information, which is copied into file
   while ( accountNumber > 0 && accountNumber <= 100 )
   {
      // user enters last name, first name and balance
      //cout << "Enter lastname, firstname, balance\n? ";
        cout << "\n   Enter Division number (east 1,west 2,north 3,south 4): ";
        cin >> divisionNum;
        cout << "   Enter quarter number (1,2,3,4): ";
        cin >> quarter;
        cout << "   Enter Quarterly Sales: ";
        cin >> quarterlySales;

      // set record accountNumber, lastName, firstName and balance values
      sales.setDivisionNumber(divisionNum);
      sales.setQuarter(quarter);
      sales.setQuarterlySales(quarterlySales);

      // seek position in file of user-specified record
      outSalesData.seekp( ( accountNumber - 1 ) * sizeof( SalesData ) );

      // write user-specified information in file
      outSalesData.write( reinterpret_cast< const char * >( &sales ),sizeof( sales ) );

      // enable user to enter another account
      cout << "Enter account number\n? ";
      cin >> accountNumber;
   } // end while
   cout << "reading all entries\n";

    cout << "calculating total corporate sales for each quarter" << endl;
    //loop through all objects stored in the file
    double Q1totalCorporateSales = 0;
    double Q2totalCorporateSales = 0;
    double Q3totalCorporateSales = 0;
    double Q4totalCorporateSales = 0;
    cout << sales.getQuarterlySales() << endl;

    outSalesData.seekg( 0 );
    outSalesData.read( reinterpret_cast<char*>(&sales), sizeof(sales) );
    //outSalesData.read( reinterpret_cast<char*>(&sales), sizeof(sales) );
    while( !outSalesData.eof() )
    {
        if(sales.getQuarter() == 1)
        {
            Q1totalCorporateSales = Q1totalCorporateSales + sales.getQuarterlySales();
        }else if(sales.getQuarter() == 2)
        {
            Q2totalCorporateSales = Q2totalCorporateSales + sales.getQuarterlySales();
        }else if(sales.getQuarter() == 3)
        {
            Q3totalCorporateSales = Q3totalCorporateSales + sales.getQuarterlySales();
        }else if(sales.getQuarter() == 4)
         {
            Q4totalCorporateSales = Q4totalCorporateSales + sales.getQuarterlySales();
        }
        //pers.showData();
        outSalesData.read( reinterpret_cast<char*>(&sales), sizeof(sales) );
    }

    cout << "Quarter 1 total sales: " << Q1totalCorporateSales << endl;
    cout << "Quarter 2 total sales: " << Q2totalCorporateSales << endl;
    cout << "Quarter 3 total sales: " << Q3totalCorporateSales << endl;
    cout << "Quarter 4 total sales: " << Q4totalCorporateSales << endl;

} // end main
