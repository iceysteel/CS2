#include <iostream>

using namespace std;

void Print(int ToBePrinted)
{
    cout << ToBePrinted << endl;
}

int doubleNumber(int number){
    return number * 2;

}

int main()
{
    int x = 0;
    cin >> x;
    Print(doubleNumber(x));
    return 0;
}
