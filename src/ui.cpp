#include "../include/include.h"

void showLoginMenu() {
  while (true) {
    int choice;
    cout << "=== Login Menu ===" << endl;
    cout << "1. Login" << endl;
    cout << "2. Signup" << endl;
    cout << "3. Exit" << endl;
    cout << "Select an option: ";
    cin >> choice;

    if (choice == 1) { // Login option
      cout << "Enter username: ";
      cin >> current_user ;
      
      if (userLogin(current_user)) {
        cout << "Login successful. Welcome, " << current_user << "!" << endl;
        break; 
      } 
      else {
        cout << "Login failed. Please try again." << endl;
      }
    } 
    else if (choice == 2) { // Signup option
      cout << "Enter Username: ";
      cin >> current_user ;
      if (userSignup(current_user)){
        cout << "Signup successful. Welcome, " << current_user << "!" << endl;
        break; // Exit loop on successful signup
      } else cout << "Signup failed. Please try again." << endl;
      
    }
    else if (choice == 3) { // Exit option
      cout << "Exiting the program. Goodbye!" << endl;
      exit(0);
    }
    else cout << "Invalid option. Please try again." << endl; 
  }
}

void showMainMenu() {
  while (true) {
    int choice;
    cout << "=== Main Menu ===" << endl;
    cout << "1. View Tasks" << endl;
    cout << "2. Add Task" << endl;
    cout << "3. Edit Task" << endl;
    cout << "4. Delete task" << endl;
    cout << "5. Switch User " << endl;
    cout << "6. Logout and quit" << endl;
    cout << "Select an option: ";
    cin >> choice; // Sets choice variable to user input

    if (choice == 1) {
      viewtasks();
    } else if (choice == 2) {
      addtasks();
    } else if (choice == 3) {
      edittasks();
    } else if (choice == 4) {
      deletetasks();
    } else if (choice == 5) {
      switchuser();
    } else if (choice == 6) {
      logoutandquit();
    }

  }
}

void viewtasks(){
  
}





