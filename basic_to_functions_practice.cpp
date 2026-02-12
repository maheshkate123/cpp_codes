// ===== C++ PRACTICE: BASIC TO FUNCTIONS =====
// Complete progression from basic concepts to functions

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// ============================================
// SECTION 1: BASIC CONCEPTS
// ============================================

void section1_variables_and_datatypes() {
    cout << "\n===== SECTION 1: VARIABLES & DATA TYPES =====\n";
    
    // Different data types
    int age = 25;
    float height = 5.9f;
    double salary = 50000.50;
    char grade = 'A';
    bool isStudent = true;
    string name = "John";
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
}

void section1_basic_input_output() {
    cout << "\n===== BASIC INPUT & OUTPUT =====\n";
    
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Sum: " << (num1 + num2) << endl;
    cout << "Product: " << (num1 * num2) << endl;
}

void section1_basic_arithmetic() {
    cout << "\n===== BASIC ARITHMETIC =====\n";
    
    int a = 10, b = 3;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;
}

// ============================================
// SECTION 2: CONDITIONAL STATEMENTS
// ============================================

void section2_if_else_basic() {
    cout << "\n===== IF-ELSE BASIC =====\n";
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num > 0) {
        cout << num << " is POSITIVE\n";
    } else if (num < 0) {
        cout << num << " is NEGATIVE\n";
    } else {
        cout << "Number is ZERO\n";
    }
}

void section2_even_odd() {
    cout << "\n===== EVEN OR ODD =====\n";
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << num << " is EVEN\n";
    } else {
        cout << num << " is ODD\n";
    }
}

void section2_simple_eligibility() {
    cout << "\n===== VOTING ELIGIBILITY =====\n";
    
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are ELIGIBLE to vote\n";
    } else {
        cout << "You are NOT ELIGIBLE to vote\n";
    }
}

void section2_switch_statement() {
    cout << "\n===== SWITCH STATEMENT =====\n";
    
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;
    
    switch(day) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid day!\n";
    }
}

void section2_nested_if() {
    cout << "\n===== NESTED IF-ELSE =====\n";
    
    int age, income;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter annual income: ";
    cin >> income;
    
    if (age >= 18) {
        if (income >= 100000) {
            cout << "Loan APPROVED\n";
        } else {
            cout << "Loan REJECTED - Income too low\n";
        }
    } else {
        cout << "Loan REJECTED - Age too low\n";
    }
}

// ============================================
// SECTION 3: LOOPS
// ============================================

void section3_for_loop_basic() {
    cout << "\n===== FOR LOOP BASIC =====\n";
    
    cout << "Numbers from 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void section3_for_loop_sum() {
    cout << "\n===== SUM OF 1 TO N =====\n";
    
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum from 1 to " << n << " = " << sum << endl;
}

void section3_multiplication_table() {
    cout << "\n===== MULTIPLICATION TABLE =====\n";
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

void section3_while_loop() {
    cout << "\n===== WHILE LOOP =====\n";
    
    int n = 5;
    cout << "Counting down from 5:\n";
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << "\nBlast off!\n";
}

void section3_do_while_loop() {
    cout << "\n===== DO-WHILE LOOP =====\n";
    
    int num = 1;
    cout << "Print until 5:\n";
    do {
        cout << num << " ";
        num++;
    } while (num <= 5);
    cout << endl;
}

void section3_nested_loops_table() {
    cout << "\n===== NESTED LOOPS - TIMES TABLE =====\n";
    
    cout << "Times table (1-3):\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << (i * j) << "\t";
        }
        cout << endl;
    }
}

void section3_nested_loops_pattern() {
    cout << "\n===== NESTED LOOPS - PATTERN =====\n";
    
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

void section3_factorial() {
    cout << "\n===== FACTORIAL =====\n";
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact << endl;
}

void section3_fibonacci() {
    cout << "\n===== FIBONACCI SERIES =====\n";
    
    int n;
    cout << "Enter number of terms: ";
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

// ============================================
// SECTION 4: ARRAYS
// ============================================

void section4_array_basics() {
    cout << "\n===== ARRAY BASICS =====\n";
    
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array elements:\n";
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

void section4_array_input() {
    cout << "\n===== ARRAY INPUT & OUTPUT =====\n";
    
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i+1) << ": ";
        cin >> arr[i];
    }
    
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void section4_array_sum() {
    cout << "\n===== SUM OF ARRAY ELEMENTS =====\n";
    
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
}

void section4_array_max_min() {
    cout << "\n===== FIND MAX & MIN IN ARRAY =====\n";
    
    int arr[5] = {45, 23, 67, 12, 89};
    int max = arr[0], min = arr[0];
    
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}

void section4_linear_search() {
    cout << "\n===== LINEAR SEARCH =====\n";
    
    int arr[5] = {10, 25, 30, 45, 50};
    int search;
    
    cout << "Array: 10, 25, 30, 45, 50\n";
    cout << "Enter number to search: ";
    cin >> search;
    
    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            cout << "Found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found!\n";
    }
}

// ============================================
// SECTION 5: FUNCTIONS
// ============================================

// Function with no parameters and no return value
void greet() {
    cout << "Hello! Welcome to C++ Functions!\n";
}

// Function with parameters but no return value
void add_and_print(int a, int b) {
    cout << a << " + " << b << " = " << (a + b) << endl;
}

// Function with parameters and return value
int multiply(int a, int b) {
    return a * b;
}

// Function to check even or odd
bool is_even(int num) {
    return (num % 2 == 0);
}

// Function to calculate factorial
long long factorial_func(int n) {
    if (n <= 1) return 1;
    
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to find maximum of two numbers
int max_func(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find maximum of three numbers
int max_three(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// Function to check prime number
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to reverse a number
int reverse_num(int num) {
    int reversed = 0;
    num = abs(num);
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

// Function with array parameter
int array_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find average
double array_average(int arr[], int size) {
    if (size == 0) return 0;
    return (double)array_sum(arr, size) / size;
}

// Function practice demonstrations
void section5_function_no_params() {
    cout << "\n===== FUNCTION WITH NO PARAMETERS =====\n";
    greet();
}

void section5_function_with_params() {
    cout << "\n===== FUNCTION WITH PARAMETERS =====\n";
    
    int a = 5, b = 3;
    add_and_print(a, b);
    add_and_print(10, 20);
}

void section5_function_with_return() {
    cout << "\n===== FUNCTION WITH RETURN VALUE =====\n";
    
    int result = multiply(4, 5);
    cout << "4 x 5 = " << result << endl;
    
    cout << "7 x 8 = " << multiply(7, 8) << endl;
}

void section5_even_odd_func() {
    cout << "\n===== USING FUNCTION - EVEN OR ODD =====\n";
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (is_even(num)) {
        cout << num << " is EVEN\n";
    } else {
        cout << num << " is ODD\n";
    }
}

void section5_factorial_func() {
    cout << "\n===== USING FUNCTION - FACTORIAL =====\n";
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Factorial of " << n << " = " << factorial_func(n) << endl;
}

void section5_max_func() {
    cout << "\n===== USING FUNCTION - MAXIMUM =====\n";
    
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    cout << "Maximum: " << max_three(a, b, c) << endl;
}

void section5_prime_func() {
    cout << "\n===== USING FUNCTION - PRIME CHECK =====\n";
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (is_prime(num)) {
        cout << num << " is PRIME\n";
    } else {
        cout << num << " is NOT PRIME\n";
    }
}

void section5_reverse_func() {
    cout << "\n===== USING FUNCTION - REVERSE NUMBER =====\n";
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Reversed: " << reverse_num(num) << endl;
}

void section5_array_func() {
    cout << "\n===== FUNCTION WITH ARRAY PARAMETER =====\n";
    
    int arr[5];
    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << (i+1) << ": ";
        cin >> arr[i];
    }
    
    cout << "Sum: " << array_sum(arr, 5) << endl;
    cout << "Average: " << array_average(arr, 5) << endl;
}

// Function overloading - same function name, different parameters
void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(double num) {
    cout << "Double: " << num << endl;
}

void display(string str) {
    cout << "String: " << str << endl;
}

void section5_function_overloading() {
    cout << "\n===== FUNCTION OVERLOADING =====\n";
    
    display(10);
    display(3.14);
    display("Hello");
}

// ============================================
// MAIN MENU
// ============================================

int main() {
    int choice;
    
    while (true) {
        cout << "\n========== C++ PRACTICE: BASIC TO FUNCTIONS ==========\n";
        cout << "\nSECTION 1 - BASIC CONCEPTS:\n";
        cout << "1. Variables & Data Types\n";
        cout << "2. Basic Input & Output\n";
        cout << "3. Arithmetic Operations\n";
        
        cout << "\nSECTION 2 - CONDITIONAL STATEMENTS:\n";
        cout << "4. If-Else Basic\n";
        cout << "5. Even or Odd\n";
        cout << "6. Voting Eligibility\n";
        cout << "7. Switch Statement\n";
        cout << "8. Nested If-Else\n";
        
        cout << "\nSECTION 3 - LOOPS:\n";
        cout << "9. For Loop Basic\n";
        cout << "10. Sum of 1 to N\n";
        cout << "11. Multiplication Table\n";
        cout << "12. While Loop\n";
        cout << "13. Do-While Loop\n";
        cout << "14. Nested Loops - Table\n";
        cout << "15. Nested Loops - Pattern\n";
        cout << "16. Factorial\n";
        cout << "17. Fibonacci Series\n";
        
        cout << "\nSECTION 4 - ARRAYS:\n";
        cout << "18. Array Basics\n";
        cout << "19. Array Input & Output\n";
        cout << "20. Sum of Array Elements\n";
        cout << "21. Find Max & Min\n";
        cout << "22. Linear Search\n";
        
        cout << "\nSECTION 5 - FUNCTIONS:\n";
        cout << "23. Function - No Parameters\n";
        cout << "24. Function - With Parameters\n";
        cout << "25. Function - With Return Value\n";
        cout << "26. Function - Even or Odd\n";
        cout << "27. Function - Factorial\n";
        cout << "28. Function - Maximum\n";
        cout << "29. Function - Prime Check\n";
        cout << "30. Function - Reverse Number\n";
        cout << "31. Function - Array Parameters\n";
        cout << "32. Function Overloading\n";
        
        cout << "0. Exit\n";
        cout << "======================================================\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            // Section 1
            case 1: section1_variables_and_datatypes(); break;
            case 2: section1_basic_input_output(); break;
            case 3: section1_basic_arithmetic(); break;
            
            // Section 2
            case 4: section2_if_else_basic(); break;
            case 5: section2_even_odd(); break;
            case 6: section2_simple_eligibility(); break;
            case 7: section2_switch_statement(); break;
            case 8: section2_nested_if(); break;
            
            // Section 3
            case 9: section3_for_loop_basic(); break;
            case 10: section3_for_loop_sum(); break;
            case 11: section3_multiplication_table(); break;
            case 12: section3_while_loop(); break;
            case 13: section3_do_while_loop(); break;
            case 14: section3_nested_loops_table(); break;
            case 15: section3_nested_loops_pattern(); break;
            case 16: section3_factorial(); break;
            case 17: section3_fibonacci(); break;
            
            // Section 4
            case 18: section4_array_basics(); break;
            case 19: section4_array_input(); break;
            case 20: section4_array_sum(); break;
            case 21: section4_array_max_min(); break;
            case 22: section4_linear_search(); break;
            
            // Section 5
            case 23: section5_function_no_params(); break;
            case 24: section5_function_with_params(); break;
            case 25: section5_function_with_return(); break;
            case 26: section5_even_odd_func(); break;
            case 27: section5_factorial_func(); break;
            case 28: section5_max_func(); break;
            case 29: section5_prime_func(); break;
            case 30: section5_reverse_func(); break;
            case 31: section5_array_func(); break;
            case 32: section5_function_overloading(); break;
            
            case 0:
                cout << "\nThank you for practicing! Keep coding!\n";
                return 0;
            
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
