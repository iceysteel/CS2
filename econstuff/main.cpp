#include <iostream>

using namespace std;

int main()
{
    while(true){
    double Q1;
    double P1;
    double Q2;
    double P2;

    cout << "Enter Quantity 1:" << endl;
    cin >> Q1;
    cout << "Enter Price 1:" << endl;
    cin >> P1;

    cout << "Enter Quantity 2:" << endl;
    cin >> Q2;
    cout << "Enter Price 2:" << endl;
    cin >> P2;

    cout << (((Q2 - Q1)/((Q2 + Q1)/2))/((P2 - P1)/((P2 + P1)/2)));
    // this is a comment
    }
    return 0;
}
