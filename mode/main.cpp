#include <iostream>

using namespace std;

double mode(int list[], int &size);


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
    cout << "The mode is: " << mode(list, size) << endl;
    return 0;
}

double mode(int list[], int &size)
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
    int mode = -1;
    int currentPos = 0;
    int count = 1;
    int maxCount = 1;
    int tempCount = 0;
    for (int i = 1; i < size; i++)
    {
        if (list[i] == list[currentPos])
        {
            count++;
        }
        else
        {
            if (count >= maxCount)
            {
                if (count == maxCount)
                    tempCount = count;
                maxCount = count;
                mode = list[currentPos];
            }

            count = 1;
            currentPos = i;
        }
    }
    if (tempCount == maxCount)
        mode = -1;

    return mode;
}
