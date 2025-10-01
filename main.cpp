#include <iostream>
#include <cmath>
#include <cstdlib> // for rand()
#include <ctime>

using namespace std;

int main() {
    
    // Project - 1
    
    int x;
    cin >> x;

    if ((x>0) || (x==0)) {
        cout << "Positive" << endl;
    } else if (x<0) {
        cout << "Negative" << endl;
    }
    return 0;

    // Project - 2

    int x;
    cin >> x;
    if ((x>0) && (x%2==0)) {
        cout << "Positive and even" << endl;
    } else if ((x<0) && (x%2==0)) {
        cout << "Negative and even" << endl;
    } else if ((x>0) || (x==0) && (x%2!=0)) {
        cout << "Positive and odd" << endl;
    } else if ((x<0) && (x%2!=0)) {
        cout << "Negative and odd" << endl;
    } else {
        cout << "This is Zero" << endl;
    }
    return 0;

    // Project - 3
    int a, b, c;
    cin >> a >> b >> c;

    int largest;

    if ((a>b) && (a>c)) {
        largest = a;
        cout << "Largest is " << largest << endl;
    } else if ((b>a) && (b>c)) {
        largest = b;
        cout << "Largest is " << largest << endl;
    } else if ((c>a) && (c>b)) {
        largest = c;
        cout << "Largest is " << largest << endl;
    }

    return 0;

    // Project - 4
    int a, b;
    cin >> a >> b;

    if (a%b==0) {
        cout << a << " is divisible by " << b << endl;
    } else if (a%b!=0) {
        cout << a << " is not divisible by " << b << endl;

    return 0;
    
    // Project -5
    int year;
    cin >> year;

    if ((year%4==0) && (year%100==0) && (year%400==0)) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
    }

    return 0;

    // Project - 6
    float a, b, c;
    cin >> a >> b >> c;

    float discriminant = (b*b) - (4 * a * c);
    
    float x1 = ((-b + sqrt(discriminant))/(2*a));
    float x2 = ((-b - sqrt(discriminant))/(2*a));

    cout << "x1 equals to: " << x1 << endl;
    cout << "x2 equals to: " << x2 << endl;

    return 0;

    // Project - 7
    int a, b, c;
    cin >> a >> b >> c;

    if (((a+b) > c) && ((a+c) > b) && ((b+c)  > a)) {
        cout << "The triangle is valid" << endl;
    } else {
        cout << "The triangle is not valid" << endl;
    }

    return 0;

    // Project - 8
    char userChar;
    cin >> userChar;

    if (userChar >= 'A' && userChar <= 'Z') {
        cout << "Uppercase letter\n" << endl;
    } else if (userChar >= 'a' && userChar <= 'z') {
        cout << "Lowercase letter\n" << endl;
    } else {
        cout << "Not an alphabet\n" << endl;
    }

    return 0;

    // Project - 9
    int speed;
    cin >> speed;

    if (speed<20) {
        cout << "Too slow" << endl;
    } else if (speed > 80) {
        cout << "Too fast" << endl;
    } else {
        cout << "Just right" << endl;
    }
    
    return 0;

    // Project - 10
    int x1 = 0;
    int y1 = 0;
    int x2, y2;
    cin >> x2 >> y2;
    int radius = 10;


    float distance = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));

    if ((distance < 10) || (distance = 0)) {
        cout << "Point (" << x2 << "," << y2 << ") is in circle" << endl;
    } else {
        cout << "Point (" << x2 << "," << y2 << ") is not in circle" << endl;
    }

    return 0;

    // Project - 11

    // Package - 1
    float weight1, price1;
    cin >> weight1 >> price1;
    // Package - 2
    float weight2, price2;
    cin >> weight2 >> price2;

    float total_price1 = (weight1/price1);
    float total_price2 = (weight2/price2);

    if (total_price1>total_price2) {
        cout << "Package 1 has a better price" << endl;
    } else if (total_price2>total_price1) {
        cout << "Package 2 has a better price" << endl;
    } else if (total_price1==total_price2) {
        cout << "Two packages have the same price." << endl;
    }

    return 0;

    // Project - 12
    int num, original, reversed = 0, digit;
    cout << "Enter a number: " << endl;
    cin >> num;

    original = num;

    while (num>0) { // num=121 // num = 12.1 // num = 1.21
        digit = num % 10; // digit = 1 // digit = 2 // digit = 1.21
        reversed = reversed * 10 + digit; // reversed = 1 // reversed = 12 // reversed = 121 == > reversed = 121;
        num /= 10; // num = 12.1 // num = 1.21 //  // num = 0.121 ==> while breaks.
    }

    if (original == reversed) {
        cout << "Palyndrome" << endl;
    } else if (original != reversed) {
        cout << "Not Palyndrme" << endl;
    }

    return 0;

    // Project - 13
    char userChar;
    cin >> userChar;

    if (userChar == 'g' || userChar == 'G') {
        cout << "Go!" << endl;
    } else if (userChar == 'y' || userChar == 'Y') {
        cout << "Get ready!" << endl;
    } else if (userChar == 'r' || userChar == 'R') {
        cout << "Stop!" << endl;
    }

    return 0;

    // Project - 14
    int day_num;
    cout << "Enter a day number (1-7): " << endl;
    cin >> day_num;

    switch (day_num) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
    }

    return 0;

    // Project - 15
    int today, after;
    cin >> today >> after;

    int future = (today + after) % 7;

    cout << "Today is ";
    switch (today) {
        case 0: cout << "Sunday\n"; break;
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
    }

    cout << "Future date is ";
    switch (future) {
        case 0: cout << "Sunday\n"; break;
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
    }

    return 0;

    // Project - 16
    int grade;
    cin >> grade;
    int result;

    if ((grade>90) && (grade<100)) {
        result = 5;
    } else if ((grade>80) && (grade<89)) {
        result = 4;
    } else if ((grade>70) && (grade<79)) {
        result = 3;
    } else if ((grade>60) && (grade<69)) {
        result = 2;
    } else if ((grade>0) && (grade<59)) {
        result = 1;
    }

    switch(result) {
        case 5: cout << "A" << endl; break;
        case 4: cout << "B" << endl; break;
        case 3: cout << "C" << endl; break;
        case 2: cout << "D" << endl; break;
        case 1: cout << "F" << endl; break;
    }

    return 0;

    // Project - 17

    int num, condition;
    cin >> num;

    if (num>0) {
        condition = 1;
    } else if (num < 0) {
        condition = 2;
    } else if (num == 0) {
        condition = 3;
    }

    switch(condition) {
        case 1: cout << "Positive" << endl; break;
        case 2: cout << "Negative" << endl; break;
        case 3: cout << "Zero" << endl; break;
    }

    return 0;

    char langChoose;
    cin >> langChoose;

    switch (langChoose) {
        case 'u': cout << "Assalomu aleykum!" << endl; break;
        case 'U': cout << "Assalomu aleykum!" << endl; break;

        case 'e': cout << "Hello!" << endl; break;
        case 'E': cout << "Hello!" << endl; break;

        case 'r': cout << "Привет!" << endl; break;
        case 'R': cout << "Привет!" << endl; break;

        case 'g': cout << "Halo!" << endl; break;
        case 'G': cout << "Halo!" << endl; break;
    }

    return 0;


    // Project - 19

    float weight;
    cin >> weight;
    int condition;

    // program - 1
    if ((weight>0) && (weight<1) && (weight=1)) {
        cout << "3500" << endl;
    } else if ((weight>1) && (weight<3) && (weight=3)) {
        cout << "5500" << endl;
    } else if ((weight>3) && (weight<10) && (weight=10)) {
        cout << "8500" << endl;
    } else if ((weight>10) && (weight<20) && (weight=20)) {
        cout << "10500" << endl;
    } else if ((weight<0) && (weight==0)) {
        cout << "Invalid input" << endl;
    } else if (weight>20) {
        cout << "The package cannot be shipped" << endl;
    }
    return 0;

    // Program - 2
    if ((weight>0) && (weight<1) && (weight=1)) {
        condition = 1;

    } else if ((weight>1) && (weight<3) && (weight=3)) {
        condition = 2;

    } else if ((weight>3) && (weight<10) && (weight=10)) {
        condition = 3;

    } else if ((weight>10) && (weight<20) && (weight=20)) {
        condition = 4;

    } else if ((weight<0) && (weight==0)) {
        condition = 5;

    } else if (weight>20) {
        condition = 6;
    }

    switch (condition) {
        case 1: cout << "3500" << endl; break;
        case 2: cout << "5500" << endl; break;
        case 3: cout << "8500" << endl; break;
        case 4: cout << "10500" << endl; break;
        case 5: cout << "Invalid input" << endl; break;
        case 6: cout << "The package cannot be shipped" << endl; break;
    }

    return 0;

    // Project - 20
    int digit;
    cin >> digit;

    if (digit>9) {
        cout << "it is not a digit" << endl;
    }
    
    switch(digit) {
        case 0: cout << "Zero" << endl; break;
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "Four" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Six" << endl; break;
        case 7: cout << "Seven" << endl; break;
        case 8: cout << "Eight" << endl; break;
        case 9: cout << "Nine" << endl; break;
    }

    return 0;

    // Project - 21
    int month;
    cout << "Enter a month ( 1 - 12 ): ";
    cin >> month;

    switch (month) {
        case 1: cout << "Jan 1 - New Year's Day\nJan 14 - Defenders' Day" << endl; break;
        case 2: cout << "There is no holidy in this month" << endl; break;
        case 3: cout << "Mar 8 - Women's Day\n Mar 21 - Navruz" << endl; break;
        case 4: cout << "April - Ramadan Hayit" << endl; break;
        case 5: cout << "May 9 - Day of Memory and Honor" << endl; break;
        case 6: cout << "There is no holidy in this month" << endl; break;
        case 7: cout << "Jul - Kurban Hayit" << endl; break;
        case 8: cout << "There is no holidy in this month" << endl; break;
        case 9: cout << "Sep 1 - Independence Day" << endl; break;
        case 10: cout << "Oct 1 - Teachers' Day" << endl; break;
        case 11: cout << "There is no holidy in this month" << endl; break;
        case 12: cout << "Dec 8 - Constitution Day" << endl; break;
        case 0: cout << "It is zero. Nothing." << endl; break;
    }

    return 0;

    // Project - 22

    int userGuess;
    bool even, odd;
    cout << "Guess even or odd: ( 1 - even, 0 - odd): " << endl;
    cin >> userGuess;

    srand(time(0));
    int random = rand();

    cout << "Random number generated: " << random << endl;

    if (random % 2 == 0) {  // even number
        cout << "It is even. ";
        if (userGuess == 1) {
            cout << "You are correct!" << endl;
        } else {
            cout << "You are incorrect!" << endl;
        }
    } else {  // odd number
        cout << "It is odd. ";
        if (userGuess == 0) {
            cout << "You are correct!" << endl;
        } else {
            cout << "You are incorrect!" << endl;
        }
    }

    return 0;

    // Project - 23

    srand(time(0));

    int random_rank = rand() % 13 + 1;

    switch (random_rank) {
        case 1: cout << "Ace "; break;
        case 2: cout << "2 "; break;
        case 3: cout << "3 "; break;
        case 4: cout << "4 "; break;
        case 5: cout << "5 "; break;
        case 6: cout << "6 "; break;
        case 7: cout << "7 "; break;
        case 8: cout << "8 "; break;
        case 9: cout << "9 "; break;
        case 10: cout << "10 "; break;
        case 11: cout << "Jack "; break;
        case 12: cout << "Queen "; break;
        case 13: cout << "King "; break;
    }

    int random_suit = rand() % 4 + 1;

    switch (random_suit) {
        case 1: cout << "Clubs" << endl; break;
        case 2: cout << "Diamonds" << endl; break;
        case 3: cout << "Hearts" << endl; break;
        case 4: cout << "Spades" << endl; break;
    }

    return 0;

    // Project - 24
    srand(time(0));

    int random = rand() % 99 - 10;
    
    int userNum;
    cin >> userNum;

    int randTens = random / 10;
    int randOnes = random % 10;
    int userTens = userNum / 10;
    int userOnes = userNum % 10;
    

    if ( ((randTens==userTens) && (randOnes==userOnes)) || ((randTens==userOnes) && (randOnes==userTens)) ) {
        cout << "100%" << endl;
        cout << random;
    } else if ( ((randTens==userTens) || (randOnes==userOnes)) || ((randTens==userOnes) || (randOnes==userTens)) ) {
        cout << "50%" << endl;
    } else {
        cout << "0%" << endl;
    }

    return 0;

}
