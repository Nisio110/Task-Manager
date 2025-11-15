#include <iostream>                                 // Standard library header for the input and output stream
#include <vector>                                   // Dynamic array                
#include <string>                                   // Sequence of charcters

using namespace std;                                // Contains common C++ things

// Dummy functions to simulate user login and signup
bool LoginUser(string username){                    // Function to login user, bool can be true or false
cout << " Function LoginUser called.\n" << endl;    // Shows that the function is being called
    return true;
}

bool signupUser(string username){                   // Function to signup user, bool can be true or false
cout << " Function signupUser called.\n" << endl;
    return true;
}



string currentUser = "";                            // Variable to store current user

void showloginMenu() {                              // Function to show login menu
    while (true) {                                  // Infinite loop
        int choice;                                 // Declare an integer variable choice
        cout << "=== Login Menu ===" << endl;       // Prints login menu header
        cout << "1. Login" << endl;
        cout << "2. Signup" << endl;
        cout << "3. Exit" << endl;
        cout << "Select an option: ";               // Prompt user to select an option
        cin >> choice;                              // Sets choice variable to user input

        if (choice == 1) {                          // Login option
            cout << "Enter username: ";             // Prompt user to enter username
            cin >> currentUser;                     // Sets currentUser variable to user input
            if (LoginUser(currentUser)) {           // Calls LoginUser function with currentUser as argument
                cout << "Login successful. Welcome, " << currentUser << "!" << endl;
                break;                              // Exit loop on successful login
            } else {
                cout << "Login failed. Please try again." << endl;
            }
        } else if (choice == 2) {                   // Signup option
            cout << "Enter Username: ";
            cin >> currentUser;
            if (signupUser(currentUser)) {
                cout << "Signup successful. Welcome, " << currentUser << "!" << endl;
                break;                              // Exit loop on successful signup
            } else {
                cout << "Signup failed. Please try again." << endl;
            }
        } else if (choice == 3) {
            cout << "Exiting the program. Goodbye!" << endl;
            exit(0);                                // Exit the program
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }
}

void showMainMenu() {                                   // Function to show main menu
        while(true) {                                   // Infinite loop
        int choice;                                     // Declare an integer variable choice
        cout << "=== Main Menu ===" << endl;            // Prints main menu header
        cout << "1. View Tasks" << endl;
        cout << " Switch User " << endl;
        cout << "2. Logout and quit" << endl;
        cout << "Select an option: ";                   // Prompt user to select an option
        cin >> choice;                                  // Sets choice variable to user input
        // Further implementation goes here
    }   