#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using std::cout;
using std::cin;
using std::rand;
using std::srand;
using std::time;
using std::isalpha;

#include "List.h"

// 20.6 function concatenate takes references to both list object as arguments
// and concatenates the second list to the first list

template <typename T>
void concatenate (List <T> &first, List <T> &second)
{
    List <T> temp (second);
    T value;
    while ( !temp.isEmpty() )
    {
        temp.removeFromFront (value);
        first.insertAtBack (value);
    }
}

// 20.7 function merge receives reference to each of the list objects to be merged
// and references to a list object into which the merges elements will be placed

template <typename T>
void merge(List <T> &first, List <T> &second, List <T> &result)
{
    List <T> tempFirst (first);
    List <T> tempSecond (second);
    T value1;
    T value2;
    tempFirst.removeFromFront (value1);
    tempSecond.removeFromFront (value2);
    while ( !tempFirst.isEmpty() && !tempSecond.isEmpty() )
    {
        if ( value1 <= value2 )
        {
            result.insertAtBack (value1);
            tempFirst.removeFromFront (value1);
        }
        else
        {
            result.insertAtBack (value2);
            tempSecond.removeFromFront (value2);
        }
    }
    if ( value1 < value2 )
    {
        result.insertAtBack (value1);
        result.insertAtBack (value2);
    }
    else
    {
        result.insertAtBack (value2);
        result.insertAtBack (value1);
    }
    if ( !tempFirst.isEmpty() )
    {
        do
        {
            tempFirst.removeFromFront (value1);
            result.insertAtBack (value2);
        } while ( !tempFirst.isEmpty() );
    }
    else
    {
        do
        {
            tempSecond.removeFromFront (value2);
            result.insertAtBack (value2);
        } while ( !tempSecond.isEmpty() );
    }
}

// 20.8 function sumList calculates the sum of elements

int sumList ( List <int> &listRef )
{
    List <int> temp (listRef);
    int sum = 0;
    int value;
    while ( !temp.isEmpty() )
    {
        temp.removeFromFront(value);
        sum += value;
    }
    return sum;
}

// 20.8 function aveList calculates the floating-point average of the elements

double aveList ( List <int> &listRef)
{
    List <int> temp (listRef);
    int sum = 0;
    int value;
    int count = 0;
    while ( !temp.isEmpty() )
    {
        temp.removeFromFront(value);
        count++;
        sum += value;
    }
    return static_cast<double>(sum)/count;
}

// 20.9 function reverseList makes a copy of the second argument reversed in the first argument
// but in reverse order

template <typename T>
void reverseList (List <T> &first, List <T> &second)
{
    List <T> temp(second);
    T value;
    while ( !temp.isEmpty() )
    {
        temp.removeFromFront(value);
        first.insertAtFront(value);
    }
}

//MAINNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN

int main()
{
	//Class assign
	srand(0);
	List<int>intList1;
	for(int n = 1; n<= 25; n++)
		intList1.insertInOrder(rand() % 101);
	intList1.print();

    // 20.6 The program that concatenates two linked list object of characters

    List <char> list1;
    List <char> list2;
    char c;

    for (c = 'a'; c <= 'e'; c++)
        list1.insertAtBack (c);
    list1.print();

    for (c = 'f'; c <= 'j'; c++)
        list2.insertAtBack (c);
    list2.print();

    concatenate(list1,list2);
    cout << "The new list after concatenation is: " << std::endl;
    list1.print();
    cout << "\n\n";

    // 20.7 The program that merges two ordered list objects of integers into a single ordered list

    List <int> list3;
    List <int> list4;
    List <int> result;
    int i;

    for (i = 1; i <= 9; i +=2)
        list3.insertAtBack(i);
    list3.print();

    for (i = 2; i <= 10; i +=2)
        list4.insertAtBack(i);
    list4.print();

    merge(list3, list4, result);
    cout << "The merged list is: " << std::endl;
    result.print();
    cout << "\n\n";

    // 20.8  The program that inserts 25 random integers from 0 to 100 in order in a linked list object
    // then calculates the sum of the elements
    // and the floating-point average of the elements

    srand(0);
    List <int> intList;
    for (int i = 1; i <= 25; i++)
        intList.insertInOrder( rand() % 101 );
    intList.print();
    int sum = sumList(intList);
    double average = aveList(intList);
    cout << "The sum of the elements is: " << sum << "\n";
    cout << "The average of the elements is: " << average << "\n\n";

    // 20.9 The program that creates a linked list object of 10 characters
    // and display its reverse order

    List <char> list5;
    List <char> list6;

    for (char c = 'a'; c <= 'j'; c++)
        list5.insertAtBack(c);
    list5.print();

    reverseList(list6,list5);
    cout << "The list after reversing: \n";
    list6.print();
    cout << "\n\n";

    // 20.10 The program that inputs a line of text
    // and use a stack object to print the line reversed

    List <char> charStack;
    char ch;

    cout << "Enter a sentence: \n";
    while ( ( ch = static_cast<char>( cin.get() ) ) != '\n' ) charStack.push(ch);

    cout << "\nThe sentence in reverse is: \n";

    while ( !charStack.isStackEmpty() )
    {
        charStack.pop(ch);
        cout << ch << ' ';
    }
    cout << "\n\n";

    // 20.11 The program uses a stack object to determine if a string is palindrome

    List <char> charStack2;
    char ch2;
    char string1[80];
    char string2[80];
    int j = 0;

    cout << "Enter a sentence: \n";

    while ( ( c= static_cast<char>(cin.get() ) ) != '\n' )
    {
        if ( isalpha(ch2) )
        {
            string1[ j++ ] = ch2;
            charStack2.push(ch2);
        }
    }

    string1[ j ] = '\0';
    j = 0;

    while ( !charStack2.isStackEmpty() )
        charStack2.pop( string2[ j++ ] );

    string2[ j ] = '\0';

//    if ( strcmp( string1, string2 ) == 0 )
//        cout << "\nThe sentence is a palindrome \n";
//    else
//        cout << "\nThe sentence is not a palindrome \n";

    return 0;
}
