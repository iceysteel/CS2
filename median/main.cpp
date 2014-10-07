#include <iostream>
using namespace std;
double median(int list[], int &size);

int main()
{
    int size, value;
    cout << "Enter how large the array is: ";
    cin >> size;
    cout << endl;

    int *list;
    list = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> list[i];
    }

    cout << "The median is: " << median(list, size) << endl;
    return 0;
}

double median(int list[], int &size)
{
    for (int i = 0; i < size; i++)
    {
        int min = list[i];
        int minPosition = i;
        for (int j = i; j < size; j++)
        {
            if (list[j] < min)
            {
                min = list[j];
                minPosition = j;
            }
        }
        if (min < list[i])
        {
            int x = list[i];
            list[i] = min;
            list[minPosition] = x;
        }
    }

    double median;
    int location;
    if (size % 2)
    {
        location = size / 2;
        location++;
        median = list[location - 1];
    }
    else
    {
        location = size / 2;
        median = (list[location] + list[location - 1]) / 2.0;
    }

    return median;
}
