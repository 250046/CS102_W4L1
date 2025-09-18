#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

int main()
{
    // Problem - 1
    
    // int x;
    // cin >> x;
    // if (x>0)
    // {
    //     cout << "Positive" << endl;
    // } else if (x == 0)
    // {
    //     cout << "It is ZERO" << endl;
    // } else
    // {
    //     cout << "Negative" << endl;
    // }
    // return 0;

    // Problem - 2
    // int x;
    // cin >> x;
    // if ((x>0) && (x % 2 == 0))
    // {
    //     cout << "The number is positive and even" << endl;
    // } else if ((x>0) && (x % 2 != 0)) {
    //     cout << "The number is positive, but odd" << endl;
    // } else if ((x < 0) && (x%2 == 0)) {
    //     cout << "The number is negative and even" << endl;
    // } else if (( x < 0) && (x%2 !=0 )) {
    //     cout << "The number is negative, but odd" << endl;
    // }
    // return 0;

    // Problem - 3

    // int a, b, c;
    // cin >> a >> b >> c;
    
    // if ((a > b) and (a > c)){
    //     cout << a << " is largest" << endl;
    // }
    // if ((b > a) and (b > c)){
    //     cout << b << " is largest" << endl;
    // }
    // if ((c > b) and (c > a)){
    //     cout << c << " is largest" << endl;
    // }


    // Problem 4
    // int a, b;
    // cin >> a >> b;

    // if ( a % b == 0){
    //     cout << a << " is divisible by " << b << endl;
    // } else {
    //     cout << a << " is not divisible by " << b << endl;
    // }
    // return 0;

    // Problem 5
    // int year;
    // cout << "Enter a year: " << endl;
    // cin >> year;

    // if (year % 4 == 0) {
    //     if (year % 100 == 0) {
    //         if (year % 400 == 0) {
    //             cout << "It is a leap year" << endl;
    //         } else {
    //             cout << "It is not a leap year" << endl;
    //         }
    //     } else {
    //         cout << "It is not a leap year" << endl;
    //     }
    // } else {
    //     cout << "It is not a leap year" << endl;
    // }

    // return 0;
    
    // Problem 6
    // float a, b, c;
    // cin >> a >> b >> c;

    // float discr = (b*b) - 4 * a * c;
    // float x1 = (-b + pow(discr, 0.5))/(2*a);
    // float x2 = (-b - pow(discr, 0.5))/(2*a);

    // cout << "x1=" << x1 << endl;
    // cout << "x2=" << x2 << endl;

    // return 0;

    
    // Problem 7
    // int a, b, c;
    // cout << "a: " << endl;
    // cin >> a;
    // cout << "b: " << endl;
    // cin >> b;
    // cout << "c: " << endl;
    // cin >> c;

    // if ((a+b>c) and (a+c>b) and (b+c>a)) {
    //     cout << "Triangle can be formed" << endl;
    // } else {
    //     cout << "Trianlge cannot be formed" << endl;
    // }

    // return 0;

    // Problem 8
    // char firstChar;
    // cout << "Enter a character: ";
    // cin >> firstChar;
    // if ((isupper(firstChar)) and isalpha(firstChar)) {
    //     cout << "It is uppercase and alphabetic" << endl;
    // }
    // if ((islower(firstChar)) and isalpha(firstChar)) {
    //     cout << "It is lowercase and alphabetic" << endl;
    // }
    // if (isalpha(firstChar) == false) {
    //     cout << "It is not alphabetic" << endl;
    // }
    // return 0;

    // Problem 9
    // int speed;
    // cout << "Enter a speed: " << endl;
    // cin >> speed;

    // if (speed < 20) {
    //     cout << "Too slow" << endl;
    // } else if (speed > 80) {
    //     cout << "Too fast" << endl;
    // } else {
    //     cout << "Just right" << endl;
    // }

    // return 0;

    // Problem 10
    // float x1 = 0;
    // float y1 = 0;
    // float x2, y2;
    // cin >> x2 >> y2;

    // float distance = (pow(((pow((x2 - x1),2)) + (pow((y2 - y1),2))),0.5));

    // if (distance < 10) {
    //     cout << "The point is within a circle" << endl;
    // } else if (distance = 0) {
    //     cout << "The point is within a circle" << endl;
    // } else {
    //     cout << "The point is not within a circle" << endl;
    // }

    // return 0;


    // Problem 11
    // float weight;
    // float price;

    // float weight2;
    // float price2;

    // // Package 1
    // cout << "[p1] Enter a weight: " << endl;
    // cin >> weight;
    // cout << "[p1] Enter a price: " << endl;
    // cin >> price;

    // // Package 2
    // cout << "[p2] Enter a weight: " << endl;
    // cin >> weight2;
    // cout << "[p2] Enter a price: " << endl;
    // cin >> price2;

    // double pack1 = weight / price;
    // double pack2 = weight2 / price2;

    // if (pack1 > pack2) {
    //     cout << "Package 1 is cheaper" << endl;
    // } else if (pack1 < pack2) {
    //     cout << "Package 2 is cheaper" << endl;
    // } else {
    //     cout << "Both packages have the same prices" << endl;
    // }

    // return 0;

    // Problem 12
    // int num;
    // cout << "Enter 3-digit number: " << endl;
    // cin >> num;
    // string reversed = "";
    // string num_str = to_string(num);

    // reversed += num_str[2];
    // reversed += num_str[1];
    // reversed += num_str[0];

    // if (num_str == reversed) {
    //     cout << "It is a palindrom number" << endl;
    // } else {
    //     cout << "it is not a palindrom number" << endl;
    // }
    // return 0;

    // Problem 13

    // char user_input;

    // cout << "Enter a command ('g' OR 'y' OR 'r'): " << endl;
    // cin >> user_input;

    // if (user_input == 'g') {
    //     cout << "Go!" << endl;
    // } else if (user_input == 'y') {
    //     cout << "Get ready!" << endl;
    // } else if (user_input == 'r') {
    //     cout << "Stop!" << endl;
    // } else {
    //     cout << "You didn't enter any available commands. Program stopped. Please re-run" << endl;
    // }

    // return 0;

    // Problem 14
    // vector<string> weekdays = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    // int day_request;
    // cout << "Enter day number of week: " << endl;
    // cin >> day_request;
    
    // int daynum = day_request - 1;

    // if (daynum > 6) {
    //     cout << "There is no such a day" << endl;
    // } else {
    //     cout << weekdays[daynum] << endl;
    // }
    // return 0;

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

    switch(student_grade) {
        case 90 <= student_grade  100:
            cout << "A" << endl;
            break;
    }

    return;
}
