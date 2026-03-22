#include<iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    int marks;
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *arr = new Student[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].rollNo >> arr[i].marks;
    }

    int max = arr[0].marks;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i].rollNo << " " << arr[i].marks << endl;
        if(arr[i].marks > max)
            max = arr[i].marks;
    }

    cout << "Highest Marks: " << max << endl;

    delete[] arr;
}
