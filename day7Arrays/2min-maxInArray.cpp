#include <iostream>
using namespace std;

int main()
{

    // +infinity is the largest possible value
    // in c++ INT_MAX is the largest possible integer value

    int smallest = INT_MAX; // this makes the samllest the largest value so that it when compared gives the other number as small .

    int array[] = {2342314, 234234, 6456, 76575, 23423, 23424, 234234};
    for (int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    cout << "Smallest value in array is:" << smallest << endl;

    // using the implicit function min and max which make comparison simple

    // Largest
    int largest = INT_MIN; // this assigne the largest to minimum possible value ie - infinity
    int array1[] = {23, 234234, 6456, 76575, 23423, 23424, 2334234};

    for (int i = 0; i < sizeof(array1) / sizeof(int); i++)
    {

        largest = max(array1[i], largest);
    }

    cout << "The largest number in array1 is :" << largest << endl;

    return 0;
}