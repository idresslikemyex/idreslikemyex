#include <iostream>
using namespace std;


void task_1(){
int a;
  std::cout<< "enter number: " ;
  std::cin >> a;
if(a >= 0) {
     std::cout<< "number greater than zero!: ";
     }
else{
    std::cout<< "number less than zero!: "; }
}


void checkEvenOdd() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "The number is even" << endl;
    else
        cout << "The number is odd" << endl;
}


void findMax() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum number is " << (a > b ? a : b) << endl;
}


void gradeEval() {
    int grade;
    cout << "Enter a grade (1-5): ";
    cin >> grade;
    if (grade >= 1 && grade <= 2)
        cout << "Unsatisfactory" << endl;
    else if (grade >= 3 && grade <= 5)
        cout << "Satisfactory or higher" << endl;
    else
        cout << "Invalid grade" << endl;
}


void vowelOrConsonant() {
    char ch;
    cout << "Enter a latin letter: ";
    cin >> ch;
    ch = tolower(ch);
    if ((ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "Vowel letter" << endl;
        else
            cout << "Consonant letter" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }
}


void checkLeapYear() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap year" << endl;
    else
        cout << "Not a leap year" << endl;
}


void simpleCalculator() {
    double x, y, result;
    char op;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+': result = x + y; break;
        case '-': result = x - y; break;
        case '*': result = x * y; break;
        case '/': result = x / y; break;  // division by zero is not checked as requested
        default: cout << "Invalid operator" << endl; return;
    }
    cout << "Result: " << result << endl;
}


void checkRange() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 10 && num <= 20)
        cout << "Number belongs to range [10, 20]" << endl;
    else
        cout << "Number does not belong to range [10, 20]" << endl;
}


void determineSeason() {
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;
    if (month == 12 || month == 1 || month == 2)
        cout << "Winter" << endl;
    else if (month >= 3 && month <= 5)
        cout << "Spring" << endl;
    else if (month >= 6 && month <= 8)
        cout << "Summer" << endl;
    else if (month >= 9 && month <= 11)
        cout << "Autumn" << endl;
    else
        cout << "Invalid month" << endl;
}


void checkPalindrome() {
    string num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    if (num.length() == 3 && isdigit(num[0]) &&; isdigit(num[1]) && isdigit(num[2])) {
        if (num[0] == num[2])
            cout << "The number is a palindrome" << endl;
        else
            cout << "The number is not a palindrome" << endl;
    } else {
        cout << "Invalid input" << endl;
    }
}

int main() {
     checkEvenOdd();
     findMax();
     gradeEval();
     vowelOrConsonant();
     checkLeapYear();
     simpleCalculator();
     checkRange();
     determineSeason();
     checkPalindrome();

    return 0;
}
