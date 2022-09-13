#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> operands;
    int choice;
    int num;
    string op;

    while (true) {
        cout << "Operand(1), operator(2), or exit(-1)? ";
        cin >> choice;

        if (choice == 1) {
            cout << "Input operand: ";
            cin >> num;
            operands.push(num);
        }
        else if (choice == 2) {
            cout << "Input operator: ";
            cin >> op;

            if (operands.size() < 2) {
                cout << "Too few operands for an operation!" << endl;
                continue;
            }

            int val1 = operands.top();
            operands.pop();
            int val2 = operands.top();
            operands.pop();

            if (op == "+") {
                operands.push(val1 + val2);
            }
            else if (op == "-") {
                operands.push(val1 - val2);
            }
            else if (op == "*") {
                operands.push(val1 * val2);
            }
            else if (op == "/") {
                operands.push(val1 / val2);
            }
            else {
                cout << "Invalid operation!" << endl;
                operands.push(val2);
                operands.push(val1);
            }
        }
        else if (choice == -1) {
            int result = operands.top();
            cout << result << endl;

            return(0);
        }
    }
}
