#include <bits/stdc++.h>

using namespace std;

void inputs(vector<int>& book_pages, int &books, int &students)
{
    // Taking inputs from users 
    cout << "Enter number of books : ";
    cin >> books;
    while (books <= 0)
    {
        cout << "Enter valid (positive) number of books : ";
        cin >> books;
    }

    for(int i = 0; i < books ; i++)
    {
        int element;
        cout << "Enter pages of book " << i+1 << " : ";
        cin >> element;
        book_pages.emplace_back(element);
    }

    cout << "Enter number of students : ";
    cin >> students;

    while(students <= 0)
    {
        cout << "Enter valid (positive) number of students : ";
        cin >> students;
    }
    
}

bool check(vector<int>& book_pages, int students, int mid, int books)
{
    // To check whether pages <= mid can become maximum pages allowed for student
    int pages = 0;
    int peoples = 1;
    for(int i = 0; i < books ; i++)
    {
        if(book_pages[i] > mid)
        {
            return false;
        }
        pages += book_pages[i];

        if(pages > mid)
        {
            peoples++;
            pages = book_pages[i];
        }

        if(peoples > students)
        {
            return false;
        }
    }
    return true;
}

int solution(vector<int>& book_pages , int books, int students)
{
    // Binary search solution 
    if(books < students)
    {
        return -1;
    }
    int total_pages = 0;
    for(auto x : book_pages)
    {
        total_pages += x;
    }

    int low = 0;
    int high = total_pages;
    int result = -1;

    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(check(book_pages,students,mid,books) == true)
        {
            high = mid -1;
            result = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return result;
}

int main()
{
    int books;
    vector<int> book_pages;
    int students;

    inputs(book_pages, books, students);

    int result = solution(book_pages, books, students);
    if(result == -1)
    {
        cout << "No Solution possible" << endl;
    }
    else
    {
        cout << "Maximum number of pages a student can read is/are : " << result << endl;
    }
    return 0;
}