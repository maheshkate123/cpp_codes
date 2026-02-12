// ===== C++ BASIC PRACTICE EXAMPLES =====
// This file contains multiple practice problems from basic to intermediate level

#include <iostream>
#include <cmath>
using namespace std;

// ===== EXAMPLE 1: Simple Input & Output =====
void example1_input_output() {
    cout << "\n--- EXAMPLE 1: Input & Output ---\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: " << num << endl;
}

// ===== EXAMPLE 2: Arithmetic Operations =====
void example2_arithmetic() {
    cout << "\n--- EXAMPLE 2: Arithmetic Operations ---\n";
    int a = 10, b = 3;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
}

// ===== EXAMPLE 3: Even or Odd =====
void example3_even_odd() {
    cout << "\n--- EXAMPLE 3: Check Even or Odd ---\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << num << " is EVEN\n";
    } else {
        cout << num << " is ODD\n";
    }
}

// ===== EXAMPLE 4: Largest of Three Numbers =====
void example4_largest() {
    cout << "\n--- EXAMPLE 4: Largest of Three Numbers ---\n";
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    
    cout << "Largest number: " << largest << endl;
}

// ===== EXAMPLE 5: Sum of Numbers 1 to N =====
void example5_sum_1_to_n() {
    cout << "\n--- EXAMPLE 5: Sum of 1 to N ---\n";
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum from 1 to " << n << " = " << sum << endl;
}

// ===== EXAMPLE 6: Multiplication Table =====
void example6_multiplication_table() {
    cout << "\n--- EXAMPLE 6: Multiplication Table ---\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Multiplication table of " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

// ===== EXAMPLE 7: Factorial =====
void example7_factorial() {
    cout << "\n--- EXAMPLE 7: Factorial ---\n";
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial << endl;
}

// ===== EXAMPLE 8: Fibonacci Series =====
void example8_fibonacci() {
    cout << "\n--- EXAMPLE 8: Fibonacci Series ---\n";
    int n;
    cout << "Enter how many terms: ";
    cin >> n;
    
    int a = 0, b = 1;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

// ===== EXAMPLE 9: Prime Number Check =====
void example9_prime_check() {
    cout << "\n--- EXAMPLE 9: Prime Number Check ---\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    bool is_prime = true;
    if (num <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    
    if (is_prime) {
        cout << num << " is PRIME\n";
    } else {
        cout << num << " is NOT PRIME\n";
    }
}

// ===== EXAMPLE 10: Count Digits =====
void example10_count_digits() {
    cout << "\n--- EXAMPLE 10: Count Digits ---\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int count = 0;
    int temp = abs(num);
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    cout << "Number of digits: " << count << endl;
}

// ===== EXAMPLE 11: Reverse a Number =====
void example11_reverse_number() {
    cout << "\n--- EXAMPLE 11: Reverse a Number ---\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int reversed = 0;
    int temp = abs(num);
    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
}

// ===== EXAMPLE 12: Simple Calculator =====
void example12_calculator() {
    cout << "\n--- EXAMPLE 12: Simple Calculator ---\n";
    double a, b;
    char op;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;
    
    double result;
    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) {
                result = a / b;
            } else {
                cout << "Error: Division by zero!\n";
                return;
            }
            break;
        default:
            cout << "Invalid operator!\n";
            return;
    }
    cout << "Result: " << result << endl;
}

// ===== EXAMPLE 13: While Loop - Count Down =====
void example13_countdown() {
    cout << "\n--- EXAMPLE 13: Count Down ---\n";
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Count down: ";
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << "Done!\n";
}

// ===== EXAMPLE 14: Nested Loops - Pattern =====
void example14_pattern() {
    cout << "\n--- EXAMPLE 14: Triangle Pattern ---\n";
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// ===== EXAMPLE 15: Arrays - Find Maximum =====
void example15_array_max() {
    cout << "\n--- EXAMPLE 15: Find Maximum in Array ---\n";
    int arr[5] = {15, 8, 42, 23, 16};
    
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum value: " << max << endl;
}

// ===== EXAMPLE 16: Sum of Array Elements =====
void example16_array_sum() {
    cout << "\n--- EXAMPLE 16: Sum of Array ---\n";
    int arr[5];
    
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum of elements: " << sum << endl;
}

// ===== EXAMPLE 17: Linear Search =====
void example17_linear_search() {
    cout << "\n--- EXAMPLE 17: Linear Search ---\n";
    int arr[5] = {10, 25, 30, 45, 50};
    int search;
    
    cout << "Array: 10, 25, 30, 45, 50\n";
    cout << "Enter number to search: ";
    cin >> search;
    
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            cout << "Found at position: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found!\n";
    }
}

// ===== EXAMPLE 18: Temperature Conversion =====
void example18_temperature() {
    cout << "\n--- EXAMPLE 18: Temperature Conversion ---\n";
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << "°C = " << fahrenheit << "°F\n";
}

// ===== EXAMPLE 19: Grade Calculator =====
void example19_grade() {
    cout << "\n--- EXAMPLE 19: Grade Calculator ---\n";
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    
    char grade;
    if (marks >= 90) grade = 'A';
    else if (marks >= 80) grade = 'B';
    else if (marks >= 70) grade = 'C';
    else if (marks >= 60) grade = 'D';
    else grade = 'F';
    
    cout << "Grade: " << grade << endl;
}

// ===== EXAMPLE 20: String Length =====
void example20_string_length() {
    cout << "\n--- EXAMPLE 20: String Length ---\n";
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "Length: " << str.length() << endl;
}

// ===== MAIN MENU =====
int main() {
    int choice;
    
    while (true) {
        cout << "\n========== C++ PRACTICE EXAMPLES ==========\n";
        cout << "1. Input & Output\n";
        cout << "2. Arithmetic Operations\n";
        cout << "3. Even or Odd\n";
        cout << "4. Largest of Three Numbers\n";
        cout << "5. Sum of 1 to N\n";
        cout << "6. Multiplication Table\n";
        cout << "7. Factorial\n";
        cout << "8. Fibonacci Series\n";
        cout << "9. Prime Number Check\n";
        cout << "10. Count Digits\n";
        cout << "11. Reverse Number\n";
        cout << "12. Simple Calculator\n";
        cout << "13. Count Down\n";
        cout << "14. Triangle Pattern\n";
        cout << "15. Find Maximum in Array\n";
        cout << "16. Sum of Array\n";
        cout << "17. Linear Search\n";
        cout << "18. Temperature Conversion\n";
        cout << "19. Grade Calculator\n";
        cout << "20. String Length\n";
        cout << "0. Exit\n";
        cout << "=========================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: example1_input_output(); break;
            case 2: example2_arithmetic(); break;
            case 3: example3_even_odd(); break;
            case 4: example4_largest(); break;
            case 5: example5_sum_1_to_n(); break;
            case 6: example6_multiplication_table(); break;
            case 7: example7_factorial(); break;
            case 8: example8_fibonacci(); break;
            case 9: example9_prime_check(); break;
            case 10: example10_count_digits(); break;
            case 11: example11_reverse_number(); break;
            case 12: example12_calculator(); break;
            case 13: example13_countdown(); break;
            case 14: example14_pattern(); break;
            case 15: example15_array_max(); break;
            case 16: example16_array_sum(); break;
            case 17: example17_linear_search(); break;
            case 18: example18_temperature(); break;
            case 19: example19_grade(); break;
            case 20: example20_string_length(); break;
            case 0: 
                cout << "Thank you for practicing!\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}
