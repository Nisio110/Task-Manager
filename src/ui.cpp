#include "../include/ui.h"
#include "../include/task.h"
#include "../include/user.h"
#include <string>
using std::string;


void showLoginMenu() {

  int choice;

  while (true) {
    
    cout << "=== Login Menu ===" << endl;
    cout << "1. Login" << endl;
    cout << "2. Signup" << endl;
    cout << "3. Exit" << endl;
    cout << "Select an option: ";
    cin >> choice;

    if (choice == 1) {                                                                     // Login option
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
      else if (choice == 2) {                                                                 // Signup option
        cout << "Enter Username: ";
        cin >> current_user ;
        if (userSignup(current_user)){
          cout << "Signup successful. Welcome, " << current_user << "!" << endl;
            break;   
        }
            else {
              cout << "Signup failed. Please try again." << endl;
            }
      }
        else if (choice == 3) {                                                                 // Exit option
          cout << "Exiting the program. Goodbye!" << endl;
          exit(0);
        }
          else {
            cout << "Invalid option. Please try again." << endl;
          }
        }
      }
    
void showMainMenu() {
    int choice;

    while (true) {
      cout << "=== Main Menu ===" << endl;
      cout << "1. View Tasks" << endl;
      cout << "2. Add Task" << endl;
      cout << "3. Edit Task" << endl;
      cout << "4. Delete task" << endl;
      cout << "5. Switch User " << endl;
      cout << "6. Logout and quit" << endl;
      cout << "Select an option: ";
      cin >> choice;                                                                            // Sets choice variable to user input

      switch (choice) {
        case 1:
          viewtasks();
          break;
        case 2:
          addtasks();
          break;
        case 3:
          edittasks();
          break;
        case 4:
          deletetasks();
          break;
        case 5:
          switchuser();
          break;
        case 6:
          logoutandquit();
          break;
        default:
          cout << "Inavlid choice" << endl;
          break;
      }
    }
}
      


void viewtasks() {
  cout << "===== View Tasks =====" << endl;                                                        
  cout << "Tasks for user: " << current_user << endl;   
  displayUserTasks(current_user);                       //dummy function
  cout << "Press Enter to exit" << endl;                // Tasks will contain the name, description, status and deadline
  cin.ignore();
  cin.get();
}

void addtasks(){  
  cout << "===== Add Tasks =====" << endl;
  string taskName, description, deadline, status;  

  cin.ignore();                                 //Get Name, description, deadline and status
  cout << "Enter task name: " << endl;
  getline(cin, taskName);

  cout << "Enter task description: " << endl;
  getline(cin, description);

  cout << "Enter task deadline: " << endl;
  getline(cin, deadline);

  cout << "Enter task status: " << endl;
  getline(cin, status);


  createTask(current_user, taskName, description, deadline, status);                 //dummy fucntion

  cout << "Task added successfully" << endl;
  cout << "Press Enter to exit" << endl;
  cin.ignore();
  cin.get();  
}

void edittasks() {

     int editChoice;
     int task_id;
     string newName;
     string newDescription;
     string newDeadline;
     string newStatus;
     int statusChoice;
     
    cout << "===== Edit Tasks =====" << endl;
    cout << "Enter task ID to edit: ";
    cin >> task_id;

    cout << "What would you like to edit?" << endl;
    cout << "1. Task Name" << endl;
    cout << "2. Description" << endl;
    cout << "3. Deadline" << endl;
    cout << "4. Status" << endl;
    cout << "Choice: ";
    cin >> editChoice;

    cin.ignore();

    switch (editChoice) {
        case 1: {
            cout << "Enter new task name: ";
            getline(cin, newName);
            updateTaskName(task_id, newName);                           //dummy fucntion
            cout << "Task name updated successfully" << endl;
            break;
        }
        case 2: {            
            cout << "Enter new description: ";
            getline(cin, newDescription);
            updateTaskDescription(task_id, newDescription);             //dummy fucntion
            cout << "Description updated successfully" << endl;
            break;
        }
        case 3: {           
            cout << "Enter new deadline: ";
            getline(cin, newDeadline);
            updateTaskDeadline(task_id, newDeadline);                   //dummy fucntion
            cout << "Deadline updated successfully" << endl;
            break;
        }
        case 4: {           
            cout << "Enter status choice: " << endl;
            cout << "1. Completed" << endl;
            cout << "2. Pending " << endl;
            cin >> statusChoice;


            if(statusChoice ==1){
              newStatus = "Completed";
            }
            else if (statusChoice == 2){
              newStatus = "Pending";
            }
            else{
              cout << "Invalid option" << endl;
              cin.ignore();
              break;
            }

            updateTaskStatus(task_id, newStatus);         //dummy fucntion

            cout << "Status updated successfully" << endl;
            cin.ignore();
            break;
        }
        default:  
            cout << "Invalid option" << endl;
            break;
    }

    cout << "Press Enter to continue";
    cin.ignore();
    cin.get();
}

void deletetasks() {
  int task_id;
  
  cout << "===== Delete Tasks =====" << endl;
  cout << "Enter task id to delete" << endl;
  cin >> task_id;

  deletetask(task_id);                                    //dummy functions
  cout << "Task deleted successfully" << endl;

  cout << "Press Enter to continue";
  cin.ignore();
  cin.get();
}

void switchuser(){
  cout << "===== Switch User =====" << endl;
  current_user = "";
  showLoginMenu();
}

void logoutandquit(){
  int choice;
  cout << "===== Log Out And Quit =====" << endl;
  cout << "Are you sure you want to logout and quit?" << endl;
  cout << "1.Yes" << endl;
  cout << "2.No"  << endl;
  cin >> choice;

  if (choice == 1){
    exit(0);
  }
  else if (choice == 2){
    cout << "Logout cancelled" << endl;
    cout << "Press Enter to continue" << endl;
    cin.ignore();
    cin.get();
  }
  else{
    cout << "Invalid option" << endl;
    cout << "Press Enter to continue" << endl;
    cin.ignore();
    cin.get();
  }
}