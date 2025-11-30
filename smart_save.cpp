#include <iostream>
#include <string>

using namespace std;

// ANSI color codes for console text styling
#define RESET   "\033[0m"    // Reset to default color
#define CYAN    "\033[36m"   // Cyan color
#define GREEN   "\033[32m"   // Green color
#define YELLOW  "\033[33m"   // Yellow color
#define RED     "\033[31m"   // Red color
#define BLUE    "\033[34m"   // Blue color
#define BOLD    "\033[1m"    // Bold text

int main() {
    string name, goal;  // Variables to store user name and financial goal
    int age, months;    // Age and number of months to reach goal
    double income, expenses, goalPrice; // Monthly income, expenses, and goal price

    // Print program header with colors
    cout << CYAN << "=============================" << RESET << endl;
    cout << BOLD << "     Smart Savings Planner 💰" << RESET << endl;
    cout << CYAN << "=============================\n\n" << RESET;

    // Prompt for user's name in blue
    cout << BLUE << "Enter your name: " << RESET;
    getline(cin, name);  // Read full line for name (to support spaces)

    // Prompt for age
    cout << BLUE << "Enter your age: " << RESET;
    cin >> age;

    // Prompt for monthly income
    cout << BLUE << "Enter your monthly income: " << RESET;
    cin >> income;

    // Prompt for monthly expenses
    cout << BLUE << "Enter your monthly expenses: " << RESET;
    cin >> expenses;

    // Clear the input buffer before using getline again
    cin.ignore();

    // Prompt for financial goal (string with spaces possible)
    cout << BLUE << "What is your financial goal? " << RESET;
    getline(cin, goal);

    // Prompt for price of the goal
    cout << BLUE << "How much does it cost? " << RESET;
    cin >> goalPrice;

    // Prompt for months to reach the goal
    cout << BLUE << "In how many months do you want to reach it? " << RESET;
    cin >> months;

    // Print input summary in green
    cout << "\n" << GREEN << "===== Input Summary =====" << RESET << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Income: " << income << endl;
    cout << "Expenses: " << expenses << endl;
    cout << "Goal: " << goal << " (" << goalPrice << ")" << endl;
    cout << "Duration: " << months << " months\n";

    // Calculate monthly savings (income - expenses)
    double monthlySavings = income - expenses;
    // Calculate total savings after the specified months
    double totalSavings = monthlySavings * months;

    // Analysis section in yellow
    cout << "\n" << YELLOW << "===== Analysis =====" << RESET << endl;
    cout << "You can save " << monthlySavings << " per month.\n";
    cout << "In " << months << " months, you will have saved " << totalSavings << ".\n";

    // Check if total savings can cover the goal price
    if (totalSavings >= goalPrice) {
        // If yes, print success message in green
        cout << GREEN << "🎉 Great! You can reach your goal of buying a " << goal << "!" << RESET << endl;
    } else {
        // If no, print how much more is needed in red and suggest improving finances
        double extraNeeded = goalPrice - totalSavings;
        cout << RED << "⚠️ You need " << extraNeeded << " more to reach your goal." << RESET << endl;
        cout << "Consider increasing income or reducing expenses.\n";
    }

    return 0;
}
// End of the Smart Savings Planner program

// This program helps users plan their savings to achieve financial goals

