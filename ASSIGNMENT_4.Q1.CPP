#include <iostream>
using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    // default constructor
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // parameterized constructor
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    // setters
    void setHour(int h)
    {
        hour = h;
    }

    void setMinute(int m)
    {
        minute = m;
    }

    void setSeconds(int s)
    {
        second = s;
    }

    // getters
    int getHour()
    {
        return hour;
    }

    int getMinute()
    {
        return minute;
    }

    int getSeconds()
    {
        return second;
    }

    // print time
    void printTime()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of Time objects: ";
    cin >> n;

    // dynamic array
    Time* arr = new Time[n];

    int choice;

    do
    {
        cout << "\n1. Add Time";
        cout << "\n2. Display All Time";
        cout << "\n3. Display Only Hours";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            for (int i = 0; i < n; i++)
            {
                int h, m, s;
                cout << "Enter time (h m s) for object " << i + 1 << ": ";
                cin >> h >> m >> s;

                arr[i].setHour(h);
                arr[i].setMinute(m);
                arr[i].setSeconds(s);
            }
            break;
        }

        case 2:
        {
            for (int i = 0; i < n; i++)
            {
                arr[i].printTime();
            }
            break;
        }

        case 3:
        {
            for (int i = 0; i < n; i++)
            {
                cout << "Hour of object " << i + 1 << " = "
                     << arr[i].getHour() << endl;
            }
            break;
        }
        }

    } while (choice != 0);

    // free memory
    delete[] arr;

    return 0;
}