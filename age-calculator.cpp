#include <iostream>
using namespace std;

int main()
{
    // ANSI color codes for colored terminal output
    string red = "\033[31m";    // Red color for errors
    string green = "\033[32m";  // Green color for user prompts
    string cyan = "\033[36m";   // Cyan color for titles and results
    string reset = "\033[0m";   // Reset color to default

    // Print the application title with colors
    cout << cyan << "==================================\n";
    cout << "== Calculate Your Age Application ==\n";
    cout << "==================================\n" << reset;

    int age;

    cout << green << "Please enter your age in years: " << reset;
    cin >> age;

    // Check if input failed (non-numeric input)
    if (cin.fail()) {
        cout << red << "\nInvalid input! Please enter a numeric value.\n" << reset;
        return 1;
    }

    // Validate that age is not negative
    if (age < 0) {
        cout << red << "\nInvalid age! Please enter a positive number.\n" << reset;
        return 1;
    }

    // Calculate age in days and hours
    int age_in_days = age * 365;       
    int age_in_hours = age_in_days * 24;

    // Output results with colors
    cout << "\n" << cyan;
    cout << "Your age in days  : " << age_in_days << " Days\n";
    cout << "Your age in hours : " << age_in_hours << " Hours\n";

    cout << "========================================\n";
    cout << "== Thank you for using the application ==\n";
    cout << "========================================\n" << reset;

    return 0;
}
