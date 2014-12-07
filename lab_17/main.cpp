#include <fstream>
#include <iostream>
using namespace std;

class data
{
protected:
    int divisionNum; // east 1 west 2 north 3 south 4
    int quarter;
    double quarterlySales;
public:
    void getData()
    {
        cout << "\n   Enter Division number,east 1,west 2,north 3,south 4: ";
        cin >> divisionNum;
        cout << "   Enter quarter number (1,2,3,4): ";
        cin >> quarter;
        cout << "   Enter Quarterly Sales: ";
        cin >> quarterlySales;
    }
    void showData()
    {
        cout << "\n   Division number(east 1,west 2,north 3,south 4): " << divisionNum;
        cout << "\n   Quarter #: " << quarter;
        cout << "\n   Quarterly sales: " << quarterlySales;
    }

    double getQuarterlySales()
    {
        return quarterlySales;
    }

    int getQuarter()
    {
        return quarter;
    }

    int getDivisionNum()
    {
        return divisionNum;
    }
};
int main()
{
    int ch = 1;
    data pers;
    fstream file;

    file.open("GROUP2.DAT", ios::app | ios::out |  ios::in | ios::binary );
    do
    {
        cout << "\nEnter quarter" << ch << "'s data:";
        pers.getData();
        ch++;
        file.write( reinterpret_cast<char*>(&pers), sizeof(pers) );

    }
    while(ch < 4);
    file.seekg(0);

    file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
    while( !file.eof() )
    {
        cout << "\nDATA:";
        pers.showData();
        file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
    }
    cout << endl;

    cout << "calculating total corporate sales for each quarter" << endl;
    //loop through all objects stored in the file
    double Q1totalCorporateSales = 0;
    double Q2totalCorporateSales = 0;
    double Q3totalCorporateSales = 0;
    double Q4totalCorporateSales = 0;

    file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
    while( !file.eof() )
    {
        if(pers.getQuarter() == 1)
        {
            Q1totalCorporateSales = Q1totalCorporateSales + pers.getQuarterlySales();
        }else if(pers.getQuarter() == 2)
        {
            Q2totalCorporateSales = Q2totalCorporateSales + pers.getQuarterlySales();
        }else if(pers.getQuarter() == 3)
        {
            Q3totalCorporateSales = Q3totalCorporateSales + pers.getQuarterlySales();
        }else if(pers.getQuarter() == 4)
         {
            Q4totalCorporateSales = Q4totalCorporateSales + pers.getQuarterlySales();
        }
        //pers.showData();
        file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
    }

    cout << "Quarter 1 total sales: " << Q1totalCorporateSales << endl;
    cout << "Quarter 2 total sales: " << Q2totalCorporateSales << endl;
    cout << "Quarter 3 total sales: " << Q3totalCorporateSales << endl;
    cout << "Quarter 4 total sales: " << Q4totalCorporateSales << endl;

    return 0;
}
