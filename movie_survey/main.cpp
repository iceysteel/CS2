#include <iostream>

using namespace std;

double median(int list[], int &size);
double mode(int list[], int &size);
double average(int list[], int &size);
int main()
{
    int numOfStudents = -1;

    do
    {

        cout << "input the number of students surveyed" << endl;
        cin >> numOfStudents;
    }while(numOfStudents < 0);

    int *arrayOfStudents = new int[numOfStudents];

    for(int i = 0; i < numOfStudents; i++)
    {
        cout << "Enter the number of movies for student#" << i << endl;
        cin >> arrayOfStudents[i];
    }

    for(int i = 0; i < numOfStudents; i++)
    {
        cout << "student#" << i << " has seen this many movies:"<< arrayOfStudents[i] << endl;
    }

    cout << "The median is: " << median(arrayOfStudents, numOfStudents) << endl;
    cout << "The mode is: " << mode(arrayOfStudents, numOfStudents) << endl;
    cout << "The average is:" << average(arrayOfStudents, numOfStudents) << endl;
    return 0;
}

double average(int list[], int &size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
    {
        total = total + list[i];
    }
    return (total/(double)size);
}
//method to find the median
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

