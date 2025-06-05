#include <iostream>
#include <cstring>
using namespace std;

struct EMPLOYEE {
    char chName[40];
    int nEmpId;
    char chGender;
    double dBasicSalary;
};

void sortEmployees(EMPLOYEE employees[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (employees[j].nEmpId > employees[j + 1].nEmpId) {
                EMPLOYEE temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

void printEmployees(EMPLOYEE employees[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Employee ID: " << employees[i].nEmpId << "\n";
        cout << "Name: " << employees[i].chName << "\n";
        cout << "Gender: " << employees[i].chGender << "\n";
        cout << "Basic Salary: " << employees[i].dBasicSalary << "\n\n";
    }
}

void searchEmployee(EMPLOYEE employees[], int n, int empId) {
    for (int i = 0; i < n; ++i) {
        if (employees[i].nEmpId == empId) {
            cout << "Employee found:\n";
            cout << "Employee ID: " << employees[i].nEmpId << "\n";
            cout << "Name: " << employees[i].chName << "\n";
            cout << "Gender: " << employees[i].chGender << "\n";
            cout << "Basic Salary: " << employees[i].dBasicSalary << "\n";
            return;
        }
    }
    cout << "Employee with such an ID does not exist.\n";
}

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after the number input

    EMPLOYEE employees[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin.getline(employees[i].chName, 40);
        cout << "Employee ID: ";
        cin >> employees[i].nEmpId;
        cout << "Gender (M/F): ";
        cin >> employees[i].chGender;
        cout << "Basic Salary: ";
        cin >> employees[i].dBasicSalary;
        cin.ignore(); // To ignore the newline character after each input
    }

    int choice, empId;
    do {
        cout << "\nMenu:\n";
        cout << "1. Sort employees based on employee ID\n";
        cout << "2. Print employees list\n";
        cout << "3. Search for an employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sortEmployees(employees, n);
                cout << "Employees sorted by ID.\n";
                break;
            case 2:
                printEmployees(employees, n);
                break;
            case 3:
                cout << "Enter employee ID to search: ";
                cin >> empId;
                searchEmployee(employees, n, empId);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
