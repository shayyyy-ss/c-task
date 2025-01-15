

#include <iostream>
#include "Trip.h"
#include "Date.h"

using namespace std;
bool IsEmpty(int size);
void Print(Trip* arr, int size);
void EditTrip(Trip* arr, int size);
Trip* AddTrip(Trip* arr, int size);


int main()
{
    int option;
    Trip* arr = new Trip[0];
    int size = 0;
    do {
        cout << "plese select an option" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            Print(arr, size);
            break;
        case 2:
            EditTrip(arr, size);
            break;
        case 3:
            arr = AddTrip(arr, size);
            size++;
            break;
        case 4:
            cout << "bye" << endl;
            break;
        default:
            cout << "problem" << endl;
            break;
        }
    } while (option != 4);
}

bool IsEmpty(int size) {
    return size == 0;
}

void Print(Trip* arr, int size) {
    Trip* ptr = arr;
    if (IsEmpty(size)) {
        cout << "no trips yet" << endl;
    }
    for (int i = 0; i < size; i++) {
        ptr->PrintTrip();
        ptr++;
    }
}

void EditTrip(Trip* arr, int size) {
    int num, option, day, month, year;
    bool flag = false;
    char* des2 = new char [3];
    cout << "enter trip number to edit" <<endl;
    cin >> num;
    Trip* ptr = arr;
    for (int i = 0; i < size; i++) {
        if (ptr->GetNum() == num) {
            flag = true;
            do {
                cout << "1-date 2-des 3-stop" << endl;
                cin >> option;
                switch (option)
                {
                    case 1:
                       cout << "enter day" << endl;
                       cin >> day;
                       cout << "enter month" << endl;
                       cin >> month;
                       cout << "enter year" << endl;
                       cin >> year;
                       ptr->SetDate(Date(day, month, year));
                       break;
                    case 2:
                        cout << "enter des" << endl;
                        cin >> des2;
                        ptr->SetDes(des2);
                        break;

                default:
                    break;
                }

            } while (option != 3);

        }
        ptr++;
    }
    if (!flag) { cout << "no trip number" << endl; }
}

Trip* AddTrip(Trip* arr, int size) {
    Trip* ptr = arr;
    size++;
    Trip* newArr = new Trip[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    int num, day, month, year; char* des1=new char[3]; Date date1;
    cout << "enter number" << endl;
    cin >> num;
    cout << "enter des" << endl;
    cin >> des1;
    cout << "enter day" << endl;
    cin >> day;
    cout << "enter month" << endl;
    cin >> month;
    cout << "enter year" << endl;
    cin >> year;
    date1 = Date(day, month, year);
    Trip NewTrip = Trip (num, des1, date1);
    newArr[size-1] = NewTrip;
    delete[]arr;
    arr = newArr;
    return arr;
}