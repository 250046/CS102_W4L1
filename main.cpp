#include <iostream>
using namespace std;
int main() {
    // Problem 1
    int intNumber = 18;
    float floatNumber = 3.14159;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';
    cout << "...:::: Problem 1 Solutions ::::..." << endl;
    cout << "The value of intNumber is " << intNumber << ", size is: " << sizeof(intNumber) << endl;
    cout << "The value of floatNumber is " << floatNumber << ", size is: " << sizeof(floatNumber) << endl;
    cout << "The value of doubleNumber is " << doubleNumber << ", size is: " << sizeof(doubleNumber) << endl;
    cout << "The value of boolean is " << boolean << ", size is: " << sizeof(boolean) << endl;
    cout << "The value of charName is " << charName << ", size is: " << sizeof(charName) << endl;

    // Problem 2
    string myName = "Asadbek Abduxalilov";
    int myIdNumber = 250046;
    string favSong = "It was a good - Ice Qube";
    string favMovie = "Avengers: End Game";

    cout << "...:::: Problem 2 Solutions ::::..." << endl;
    cout << myName << endl;
    cout << myIdNumber << endl;
    cout << favSong << endl;
    cout << favMovie << endl;

    // Problem 3
    cout << "...:: Problem 3 Solutions ::::..." << endl;
    cout << "\"I'm standing\" on the edge of some crazy cliff." << endl;
    cout << "What I have to do, I have to catch everybody \" " << endl;
    cout << " if they start to go over the cliff--I mean\" " << endl;
    cout << "\t\\if they're running and they don't look " << endl;
    cout << "\twhere they're going I have to come out" << endl;
    cout << "\t\\from somewhere and     catch them" << endl;

    // Problem 4
    cout << "...:: Problem 4 Solutions ::::..." << endl;
    int a = 189;
    char b = 'B';

    //1
    float floatNumber2 = a/3;
    //2
    int decimal_value = static_cast<int>(b);
    float numOper = (a + decimal_value)/5;
    //3
    int positions = a/10 -1;
    char result = b + positions;

    cout << floatNumber2 << endl;
    cout << decimal_value << endl;
    cout << numOper << endl;
    cout << result << endl;
    return 0;
}