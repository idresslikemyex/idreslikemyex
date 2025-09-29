#include <iostream>
#include <string>
using namespace std;

bool isTwoDigitPositive() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return (num >= 10 && num <= 99);
}

double squareRoot(double x) {
    if (x < 0) return -1; 
    double guess = x / 2.0;
    for (int i = 0; i < 20; i++) {
        if (guess == 0) break;
        guess = (guess + x / guess) / 2.0;
    }
    return guess;
}

void solveQuadratic() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        if (b != 0) cout << "Linear equation, solution: " << -c / b << "\n";
        else cout << (c == 0 ? "Infinite solutions" : "No solutions") << "\n";
        return;
    }
    double d = b*b - 4*a*c;
    if (d > 0) {
        double rootD = squareRoot(d);
        if (rootD < 0) {
            cout << "No real roots\n";
            return;
        }
        cout << "Roots: " << (-b + rootD) / (2*a) << " and " << (-b - rootD) / (2*a) << "\n";
    } else if (d == 0) {
        cout << "One root: " << -b / (2*a) << "\n";
    } else {
        cout << "No real roots\n";
    }
}

bool checkPassword() {
    string pwd;
    cout << "Enter password: ";
    cin >> pwd;
    if (pwd.length() < 8) return false;
    for (int i = 0; i < (int)pwd.length(); i++) {
        if (pwd[i] >= '0' && pwd[i] <= '9') return true;
    }
    return false;
}

bool triangleExists() {
    double a, b, c;
    cout << "Enter sides of triangle a, b, c: ";
    cin >> a >> b >> c;
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool isRightTriangle() {
    double a, b, c;
    cout << "Enter sides of triangle a, b, c: ";
    cin >> a >> b >> c;
    double maxSide = a, side1 = b, side2 = c;
    if (b > maxSide) { maxSide = b; side1 = a; side2 = c; }
    if (c > maxSide) { maxSide = c; side1 = a; side2 = b; }
    double sumSquares = side1*side1 + side2*side2;
    double maxSquare = maxSide*maxSide;
    double diff = sumSquares - maxSquare;
    if (diff < 0) diff = -diff;
    return diff < 1e-9;
}

void calculator() {
    double a, b;
    char op;
    cout << "Enter operation (a op b), e.g. 5 * 3: ";
    cin >> a >> op >> b;
    if (op == '+') cout << "Result: " << a + b << "\n";
    else if (op == '-') cout << "Result: " << a - b << "\n";
    else if (op == '*') cout << "Result: " << a * b << "\n";
    else if (op == '/') {
        if (b == 0) cout << "Error! Division by zero.\n";
        else cout << "Result: " << a / b << "\n";
    } else cout << "Unknown operation\n";
}

string triangleType() {
    double a, b, c;
    cout << "Enter sides of triangle a, b, c: ";
    cin >> a >> b >> c;
    if (a == b && b == c) return "Equilateral";
    if (a == b || b == c || a == c) return "Isosceles";
    return "Scalene";
}

bool pointInRectangle() {
    double x, y, x1, y1, x2, y2;
    cout << "Enter point coordinates x y: ";
    cin >> x >> y;
    cout << "Enter rectangle corner coordinates x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;double left = (x1 < x2) ? x1 : x2;
    double right = (x1 > x2) ? x1 : x2;
    double bottom = (y1 < y2) ? y1 : y2;
    double top = (y1 > y2) ? y1 : y2;
    return (x >= left && x <= right && y >= bottom && y <= top);
}

string zodiacSign() {
    int day, month;
    cout << "Enter day and month (space-separated): ";
    cin >> day >> month;
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return "Aries";
    if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return "Taurus";
    if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return "Gemini";
    if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return "Cancer";
    if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return "Leo";
    if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return "Virgo";
    if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return "Libra";
    if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return "Scorpio";
    if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return "Sagittarius";
    if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return "Capricorn";
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return "Aquarius";
    if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) return "Pisces";
    return "Invalid date";
}

void checkYear() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    bool leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    cout << year << (leap ? " is a leap year.\n" : " is not a leap year.\n");

    cout << ((year % 4 == 0) ? "Olympic candidate year.\n" : "Not an Olympic year.\n");
}

int main() {
    cout << boolalpha;

    cout << "1. Check two-digit positive number: " << isTwoDigitPositive() << "\n";

    cout << "2. Solve quadratic equation:\n";
    solveQuadratic();

    cout << "3. Check password: " << checkPassword() << "\n";

    cout << "4. Triangle exist check: " << triangleExists() << "\n";

    cout << "5. Right triangle check: " << isRightTriangle() << "\n";

    cout << "6. Calculator:\n";
    calculator();

    cout << "7. Triangle type: " << triangleType() << "\n";

    cout << "8. Point inside rectangle: " << pointInRectangle() << "\n";

    cout << "9. Zodiac sign: " << zodiacSign() << "\n";

    cout << "10. Year check:\n";
    checkYear();

    return 0;
}
