// Allocate Minimum Pages
// Last Updated : 12 Aug, 2025
// Given an array arr[], where arr[i] represents the number of pages in the i-th book, and an integer k denoting the total number of students, allocate all books to the students such that:

// Each student gets at least one book.
// Books are allocated in a contiguous sequence.
// The maximum number of pages assigned to any student is minimized.
// If it is not possible to allocate all books among k students under these conditions, return -1

// Examples:

// Input: arr[] = [12, 34, 67, 90], k = 2
// Output: 113
// Explanation: Books can be distributed in following ways:

// [12] and [34, 67, 90] - The maximum pages assigned to a student is  34 + 67 + 90 = 191.
// [12, 34] and [67, 90] - The maximum pages assigned to a student is 67 + 90 = 157.
// [12, 34, 67] and [90] - The maximum pages assigned to a student is 12 + 34 + 67 = 113.
// The third combination has the minimum pages assigned to a student which is 113.

// Input: arr[] = [15, 17, 20], k = 5
// Output: -1
// Explanation: Since there are more students than total books, it's impossible to allocate a book to each student.

// Input: arr[] = [22, 23, 67], k = 1
// Output: 112
// Explanation: Since there is only 1 student, all books are assigned to that student. So, maximum pages assigned to a student is 22 + 23 + 67 = 112.

// Allocate Minimum Pages
// Last Updated : 12 Aug, 2025
// Given an array arr[], where arr[i] represents the number of pages in the i-th book, and an integer k denoting the total number of students, allocate all books to the students such that:

// Each student gets at least one book.
// Books are allocated in a contiguous sequence.
// The maximum number of pages assigned to any student is minimized.
// If it is not possible to allocate all books among k students under these conditions, return -1

// Examples:

// Input: arr[] = [12, 34, 67, 90], k = 2
// Output: 113
// Explanation: Books can be distributed in following ways:

// [12] and [34, 67, 90] - The maximum pages assigned to a student is  34 + 67 + 90 = 191.
// [12, 34] and [67, 90] - The maximum pages assigned to a student is 67 + 90 = 157.
// [12, 34, 67] and [90] - The maximum pages assigned to a student is 12 + 34 + 67 = 113.
// The third combination has the minimum pages assigned to a student which is 113.

// Input: arr[] = [15, 17, 20], k = 5
// Output: -1
// Explanation: Since there are more students than total books, it's impossible to allocate a book to each student.

// Input: arr[] = [22, 23, 67], k = 1
// Output: 112
// Explanation: Since there is only 1 student, all books are assigned to that student. So, maximum pages assigned to a student is 22 + 23 + 67 = 112.

#include <iostream>
#include <vector>
using namespace std;

// This function checks whether it is possible to allocate books
// such that no student gets more than maxallowedPages
bool isValid(vector<int> &arr, int n, int m, int maxallowedPages)
{
    int stu = 1;     // start with first student
    int pages = 0;   // pages allocated to current student

    for (int i = 0; i < n; i++)
    {
        // If a single book has more pages than allowed, impossible
        if (arr[i] > maxallowedPages)
        {
            return false;
        }

        // If current book can be added without exceeding limit
        if (pages + arr[i] <= maxallowedPages)
        {
            pages += arr[i];  // assign book to current student
        }
        else
        {
            // Allocate to next student
            stu++;
            pages = arr[i];  // start new allocation

            // Optional optimization: early exit
            if (stu > m)
                return false;
        }
    }

    // If students required are within limit, allocation is valid
    return true;
}


// Function to find minimum possible maximum pages
int allocateBooks(vector<int> &arr, int n, int m)
{
    // Edge case: more students than books → not possible
    if (m > n)
        return -1;

    // Calculate total pages (upper bound of search space)
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int ans = -1;

    // Lower bound should be max element (better than 0)
    int st = 0;        // you can improve this to max(arr)
    int end = sum;     // maximum possible pages

    // Binary search on answer
    while (st <= end)
    {
        int mid = st + (end - st) / 2;  // candidate max pages

        // Check if this candidate is valid
        if (isValid(arr, n, m, mid))
        {
            // Valid → try to minimize further
            ans = mid;
            end = mid - 1;
        }
        else
        {
            // Not valid → increase limit
            st = mid + 1;
        }
    }

    return ans;
}


int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    // Output the minimum possible maximum pages
    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}