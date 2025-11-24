#include "../include/ui.h"
#include "../include/task.h"

// Dummy functions to simulate user login and signup
bool LoginUser(string username) { 
  cout << " Function LoginUser called.\n"
       << endl; 
  return true;
}

bool signupUser(string username) { 
  cout << " Function signupUser called.\n" << endl;
  return true;
}
void viewtasks() {
  cout << " Function viewtasks is formed" << endl;
}
void addtasks() { 
  cout << " Function addTasks is formed" << endl;
}
void edittasks() {
  cout << " Function editTasks is formed" << endl;
}
void deletetasks() {
  cout << " Function deleteTasks is formed" << endl;
}
void switchuser() {
  cout << " Function switchuser is formed" << endl;
}
void logoutandquit() {
  cout << " Function logoutandquit is formed" << endl;
}
string currentUser = ""; 

void showloginMenu() {
  while (true) {
    int choice;
    cout << "=== Login Menu ===" << endl;
    cout << "1. Login" << endl;
    cout << "2. Signup" << endl;
    cout << "3. Exit" << endl;
    cout << "Select an option: ";
    cin >> choice;

    if (choice == 1) {              // Login option
      cout << "Enter username: ";
      cin >> currentUser;           // Sets currentUser variable to user input
      if (LoginUser(currentUser)) {
        cout << "Login successful. Welcome, " << currentUser << "!" << endl;
        break; // Exit loop on successful login
      } else {
        cout << "Login failed. Please try again." << endl;
      }
    } else if (choice == 2) { // Signup option
      cout << "Enter Username: ";
      cin >> currentUser;
      if (signupUser(currentUser)) {
        cout << "Signup successful. Welcome, " << currentUser << "!" << endl;
        break; // Exit loop on successful signup
      } else cout << "Signup failed. Please try again." << endl;
      
    } else if (choice == 3) {
      cout << "Exiting the program. Goodbye!" << endl;
      exit(0); // Exit the program
    } else cout << "Invalid option. Please try again." << endl; 
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
