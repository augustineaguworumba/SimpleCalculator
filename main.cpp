#include <iostream>
#include <iomanip>
#include <array>
#include <stdexcept>    // for std::runtime_error

using namespace std;

class CalculatorOps {
    double num1, num2;
public:
    // constructor
    CalculatorOps(double v1, double v2) : num1{v1}, num2{v2} {}
        
    // addition operation
    double addition() const {
        return num1 + num2;
    }
    // subtraction operation
    double subtraction() const {
        return num1 - num2;
    }
    // multiplication operation
    double multiplication() const {
        return num1 * num2;
    }
    // division operation
    double division() const {
        if (num2 == 0.0) 
            throw runtime_error("Division by zero");
        return num1 / num2;
    }
};


int main(){
    cout << fixed << setprecision(2);
    
    // Read the two operands
    double numb1{}, numb2{}; 
    cout << "Enter first number: ";
     if (!(cin >> numb1)) {
        cerr << "Invalid input for first number\n";
        return 1;
    }
    
    cout << "Enter second number: ";
    if (!(cin >> numb2)) {
        cerr << "Invalid input for second number\n";
        return 1;
    }
    
    // Read and validate the operator
    array<char,4> mathOps{'+', '-', '*', '/'};  // or char mathOps[] = {'+', '-', '*', '/'};

    char op{};
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    // check for a valid operator entry
    bool valid_op = false;
    for (char candidate : mathOps) {
        if (op == candidate) {
            valid_op = true;
            break;
        }
    }
    if (!valid_op) {
        cerr << "Invalid operator: " << op << "\n";
        return 1;
    }
    
    
    CalculatorOps calc{numb1, numb2};
    double result{};
    
    try {
        switch (op) {
        case '+':
            result = calc.addition();
            break;
        case '-':
            result = calc.subtraction();
            break;
        case '*':
            result = calc.multiplication();
            break;
        case '/':
            result = calc.division();
            break;
    }
    cout << "\nResult: " << numb1 << ' ' << op << ' ' << numb2 << " = " << result << "\n";
    }
    catch (const runtime_error &e) {
        cerr << "Error: " << e.what() << "\n";
        return 1;
    }
    
    return 0;
    }
















class SimpleCalc{
    double x, y;
    public:
        // constructor func
        SimpleCalc(double a, double b) : x{a}, y{b} {}
        
        // addition
        double addition() const {
            return x + y;
        }
        
        // subtraction
        double subtraction() const {
            return x - y;
        }
        
        // multiplication
        double multiplication() const {
            return x * y;
        }
        
        // division
        double division() const {
            if(y == 0)
                cerr << throw runtime-error << "Undefined... invalid entry" << "\n";
            return x/y;
        }
    };
    int main() const {
        cout << fixed << setprecision(2);
        double num1, num2;
        
        // validate two inputs
        if(!num1) {
            cerr << "invalid first input, try again" << "\n";
            return 1;
        }
        
        if(!num2) {
            cerr << "invalid second input, try again" << "\n";
            return 1;
        }
        
        array<char, 4> mathOp{'+', '-', '*',  '/'};
        char op;
        cout << "Choose an operator ['+', '-', '*',  '/']" << "\n";
        cin >> op;
        
        for(char selectedOp : mathOp){
            if(!(op == selectedOp)) {
                cerr << "invalid operator" << "\n";
                return 1
            }
            
SimpleCalc calcOperation{num1, num2};
double result;
    switch (op) {
        case '+':
        result = calcOperation.addition();
        break;
        case '-':
        result = calcOperation.subtraction();
        break;
        case '*':
        result = calcOperation.multiplication();
        break;
        case '/':
        result = calcOperation.division();
        break;
    }

        return 0;
    }
