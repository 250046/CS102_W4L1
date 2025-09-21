#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

int main()
{
    // Problem - 1
    
    int x;
    cin >> x;
    if (x>0)
    {
        cout << "Positive" << endl;
    } else if (x == 0)
    {
        cout << "It is ZERO" << endl;
    } else
    {
        cout << "Negative" << endl;
    }
    return 0;

    // Problem - 2
    int x;
    cin >> x;
    if ((x>0) && (x % 2 == 0))
    {
        cout << "The number is positive and even" << endl;
    } else if ((x>0) && (x % 2 != 0)) {
        cout << "The number is positive, but odd" << endl;
    } else if ((x < 0) && (x%2 == 0)) {
        cout << "The number is negative and even" << endl;
    } else if (( x < 0) && (x%2 !=0 )) {
        cout << "The number is negative, but odd" << endl;
    }
    return 0;

    // Problem - 3

    int a, b, c;
    cin >> a >> b >> c;
    
    if ((a > b) and (a > c)){
        cout << a << " is largest" << endl;
    }
    if ((b > a) and (b > c)){
        cout << b << " is largest" << endl;
    }
    if ((c > b) and (c > a)){
        cout << c << " is largest" << endl;
    }


    // Problem 4
    int a, b;
    cin >> a >> b;

    if ( a % b == 0){
        cout << a << " is divisible by " << b << endl;
    } else {
        cout << a << " is not divisible by " << b << endl;
    }
    return 0;

    // Problem 5
    int year;
    cout << "Enter a year: " << endl;
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "It is a leap year" << endl;
            } else {
                cout << "It is not a leap year" << endl;
            }
        } else {
            cout << "It is not a leap year" << endl;
        }
    } else {
        cout << "It is not a leap year" << endl;
    }

    return 0;
    
    Problem 6
    float a, b, c;
    cin >> a >> b >> c;

    float discr = (b*b) - 4 * a * c;
    float x1 = (-b + pow(discr, 0.5))/(2*a);
    float x2 = (-b - pow(discr, 0.5))/(2*a);

    cout << "x1=" << x1 << endl;
    cout << "x2=" << x2 << endl;

    return 0;

    
    // Problem 7
    int a, b, c;
    cout << "a: " << endl;
    cin >> a;
    cout << "b: " << endl;
    cin >> b;
    cout << "c: " << endl;
    cin >> c;

    if ((a+b>c) and (a+c>b) and (b+c>a)) {
        cout << "Triangle can be formed" << endl;
    } else {
        cout << "Trianlge cannot be formed" << endl;
    }

    return 0;

    // Problem 8
    char firstChar;
    cout << "Enter a character: ";
    cin >> firstChar;
    if ((isupper(firstChar)) and isalpha(firstChar)) {
        cout << "It is uppercase and alphabetic" << endl;
    }
    if ((islower(firstChar)) and isalpha(firstChar)) {
        cout << "It is lowercase and alphabetic" << endl;
    }
    if (isalpha(firstChar) == false) {
        cout << "It is not alphabetic" << endl;
    }
    return 0;

    // Problem 9
    int speed;
    cout << "Enter a speed: " << endl;
    cin >> speed;

    if (speed < 20) {
        cout << "Too slow" << endl;
    } else if (speed > 80) {
        cout << "Too fast" << endl;
    } else {
        cout << "Just right" << endl;
    }

    return 0;

    // Problem 10
    float x1 = 0;
    float y1 = 0;
    float x2, y2;
    cin >> x2 >> y2;

    float distance = (pow(((pow((x2 - x1),2)) + (pow((y2 - y1),2))),0.5));

    if (distance < 10) {
        cout << "The point is within a circle" << endl;
    } else if (distance = 0) {
        cout << "The point is within a circle" << endl;
    } else {
        cout << "The point is not within a circle" << endl;
    }

    return 0;


    // Problem 11
    float weight;
    float price;

    float weight2;
    float price2;

    // // Package 1
    cout << "[p1] Enter a weight: " << endl;
    cin >> weight;
    cout << "[p1] Enter a price: " << endl;
    cin >> price;

    // Package 2
    cout << "[p2] Enter a weight: " << endl;
    cin >> weight2;
    cout << "[p2] Enter a price: " << endl;
    cin >> price2;

    double pack1 = weight / price;
    double pack2 = weight2 / price2;

    if (pack1 > pack2) {
        cout << "Package 1 is cheaper" << endl;
    } else if (pack1 < pack2) {
        cout << "Package 2 is cheaper" << endl;
    } else {
        cout << "Both packages have the same prices" << endl;
    }

    return 0;

    // Problem 12
    int num;
    cout << "Enter 3-digit number: " << endl;
    cin >> num;
    string reversed = "";
    string num_str = to_string(num);

    reversed += num_str[2];
    reversed += num_str[1];
    reversed += num_str[0];

    if (num_str == reversed) {
        cout << "It is a palindrom number" << endl;
    } else {
        cout << "it is not a palindrom number" << endl;
    }
    return 0;

    // Problem 13

    char user_input;

    cout << "Enter a command ('g' OR 'y' OR 'r'): " << endl;
    cin >> user_input;

    if (user_input == 'g') {
        cout << "Go!" << endl;
    } else if (user_input == 'y') {
        cout << "Get ready!" << endl;
    } else if (user_input == 'r') {
        cout << "Stop!" << endl;
    } else {
        cout << "You didn't enter any available commands. Program stopped. Please re-run" << endl;
    }

    return 0;

    // Problem 14
    vector<string> weekdays = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int day_request;
    cout << "Enter day number of week: " << endl;
    cin >> day_request;
    
    int daynum = day_request - 1;

    if (daynum > 6) {
        cout << "There is no such a day" << endl;
    } else {
        cout << weekdays[daynum] << endl;
    }
    return 0;

    // Problem 15
    vector<string> weekdays = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    int day_request;
    int future;
    
    cout << "Enter current day number of week: " << endl;
    cin >> day_request;
    cout << "Enter future date elapsed from today: " << endl;
    cin >> future;
    
    int daynum = day_request - 1;
    int futnum = (day_request - 1) + future;

    cout << "Current day is: " << weekdays[daynum] << endl;
    cout << "Future day is: " << weekdays[futnum%7] << endl;

    return 0;
    
    // Problem 16
    int student_grade;
    cout << "Enter your grade: " << endl;
    cin >> student_grade;

    if (student_grade >= 90 && student_grade <= 100) {
        cout << "Grade: A" << endl;
    } else if (student_grade >= 80 && student_grade <= 89) {
        cout << "Grade: B" << endl;
    } else if (student_grade >= 70 && student_grade <= 79) {
        cout << "Grade: C" << endl;
    } else if (student_grade >= 60 && student_grade <= 69) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;

    // Problem 17
    int just_number;
    cout << "Enter a number: " << endl;
    cin >> just_number;

    int category;

    if (just_number==0) {
        category = 0;
    } else if (just_number>=0) {
        category = 1;
    } else if (just_number<=1) {
        category = -1;
    }

    switch (category) {
        case (-1):
            cout << "It is negative" << endl;
            break;
        case 0:
            cout << "It is zero" << endl;
            break;
        case 1:
            cout << "It is positive" << endl;
            break;
    }

    return 0;

    // Problem 18
    string message;
    cout << "u - Uzbek\ne - English\nr - Russian\ng - German\nChoose a language: ";
    cin >> message;

    if (message=="u" || message=="U") {
        cout << "Assalomu aleykum!" << endl;
    } else if (message == "e" || message=="E") {
        cout << "Hi!" << endl;
    } else if (message == "r" || message=="R") {
        cout << "Привет!" << endl;
    } else if (message == "g" || message=="G") {
        cout << "Hallo!" << endl;
    } else {
        cout << "I don't know this language. Try again with available ones!" << endl;
    }
    return 0;
    
    // Problem 19 - v1
    float weight;
    cout << "Enter a weight (maximum 20kg):" << " " << endl;
    cin >> weight;

    if (weight > 0 && weight <=1) {
        cout << "3500 UZS" << endl;
    } else if (weight > 1 && weight <= 3) {
        cout << "5500 UZS" << endl;
    } else if (weight > 3 && weight <= 10) {
        cout << "8500 UZS" << endl;
    } else if (weight > 10 && weight <= 20) {
        cout << "10500 UZS" << endl;
    } else if (weight == 0 && weight < 0) {
        cout << "Invalid input" << endl;
    } else if (weight > 20) {
        cout << "The package cannot be shipped";
    } else {
        cout << "Enter a weight!" << endl;
    }
    return 0;

    // Problem 19 - v2
    float weight;
    cout << "Enter a weight (maximum 20kg):" << " " << endl;
    cin >> weight;
    int condition;

    // *
    // Invalid  = 0
    // Cannot be shipped = 1
    // 3500 = 2
    // 5500 = 3
    // 8500 = 4
    // 10500 = 5
    

    if (weight > 0 && weight <=1) {
        condition = 2;
    } else if (weight > 1 && weight <= 3) {
        condition = 3;
    } else if (weight > 3 && weight <= 10) {
        condition = 4;
    } else if (weight > 10 && weight <= 20) {
        condition = 5;
    } else if (weight == 0 && weight < 0) {
        condition = 0;
    } else if (weight > 20) {
        condition = 1;
    } 

    switch (condition) {
        case 0:
            cout << "Invalid input" << endl;
            break;
        case 1:
            cout << "Cannot be shipped" << endl;
            break;
        case 2:
            cout << "3500 UZS" << endl;
            break;
        case 3:
            cout << "5500 UZS" << endl;
            break;
        case 4:
            cout << "8500 UZS" << endl;
            break;
        case 5:
            cout << "10500 UZS" << endl;
            break;
    }
    return 0;

    // Problem 20
    int digit;
    cout << "Enter a digit: " << endl;
    cin >> digit;
    int condition;

    if (digit >= 0 && digit < 10) {
        condition = digit;
    } else {
        condition = 999;
        cout << "It is not a digit" << endl;
    }

    switch (condition) {
        case 0:
            cout << "Zero" << endl;
            break;
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        case 6:
            cout << "Six" << endl;
            break;
        case 7:
            cout << "Seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
    }
    return 0;

    // Problem 21
    // Holidays months only: 1,3,9,10,12
    // No holidays: the rest.

    // Jan 1 - New Year's
    // Jan 14 - Day of Defenders
    // March 8 - International Womens' Day
    // March 21 - Navruz
    // May 9 - Day of Remembrance 
    // Sep 1 - Independence day
    // Oct 1 - Teacher's Day
    // Dec 8 - Constitution Day

    int month;
    cout << "Enter a month number (1-12): " << endl;
    cin >> month;

    if (month==0 || month < 0) {
        cout << "Please enter month number from 1 to 12!" << endl;
    } else if (month==1) {
        cout << "Jan 1: New Year's Day\nJan 14: Day of Defenders of the Motherland" << endl;
    } else if (month==3) {
        cout << "March 8: International Womens' Day\nMarch 21 - Navruz" << endl;
    } else if (month==9) {
        cout << "Sep 1: Independence Day" << endl;
    } else if (month==10) {
        cout << "Oct 1: Teacher's Day" << endl;
    } else if (month==12) {
        cout << "Dec 8: Constitution Day" << endl;
    } else {
        cout << "There is no any Uzbek holiday in this month.";
    }
    return 0;
}
