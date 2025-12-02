#include "../include/include.h"
#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"

void showLoginMenu(){
  int choice;
  while (true) {
    cout << "=== Login Menu ===" << endl;
    cout << "1. Login" << endl;
    cout << "2. Signup" << endl;
    cout << "3. Exit" << endl;
    cout << "Select an option: ";
    cin >> choice;

    switch (choice){
      case 1: { // Login option
        cout << "Enter username: ";
        string s;
        cin >> s;
        User::setCurrentUser(s);
        
        if (User::userLogin(User::getCurrentUser())) {
          cout << "Login successful. Welcome, " << User::getCurrentUser() << "!" << endl;
          break; 
        } 
        else {
          cout << "Login failed. Please try again." << endl;
        }
      } 
      case 2: { // Signup option
        cout << "Enter Username: ";
        string s2;
        cin >> s2;
        User::setCurrentUser(s2) ;
        if (User::userSignup(User::getCurrentUser())){
          cout << "Signup successful. Welcome, " << User::getCurrentUser()<< "!" << endl;
            break;   
        }
            else {
              cout << "Signup failed. Please try again." << endl;
            }
      }
      case 3: { // Exit option
        cout << "Exiting the program. Goodbye!" << endl;
        exit(0);
      }
      default: {
        cout << "Invalid option. Please try again." << endl;
      }
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
          viewTasks();
          break;
        case 2:
          addTasks();
          break;
        case 3:
          editTasks();
          break;
        case 4:
          deleteTasks();
          break;
        case 5:
          switchUser();
          break;
        case 6:
          logout();
          break;
        default:
          cout << "Inavlid choice" << endl;
          break;
        break;
      }
    }
}
      


void viewTasks() {
  cout << "===== View Tasks =====" << endl;                                                        
  cout << "Tasks for user: " << User::getCurrentUser()<< endl;   
  TaskData::displayUserTasks(User::getCurrentUser());                       //dummy function
  cout << "Press Enter to exit" << endl;                // Tasks will contain the name, description, status and deadline
  cin.ignore();
  cin.get();
}

void addTasks(){  
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

  Task::createTask(User::getCurrentUser(), taskName, description, deadline, status);                 //dummy fucntion

  cout << "Task added successfully" << endl;
  cout << "Press Enter to exit" << endl;
  cin.ignore();
  cin.get();  
}

void editTasks() {
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
            Task::updateTaskName(task_id, newName);
            cout << "Task name updated successfully" << endl;
            break;
        }
        case 2: {            
            cout << "Enter new description: ";
            getline(cin, newDescription);
            Task::updateTaskDescription(task_id, newDescription);             //dummy fucntion
            cout << "Description updated successfully" << endl;
            break;
        }
        case 3: {           
            cout << "Enter new deadline: ";
            getline(cin, newDeadline);
            Task::updateTaskDeadline(task_id, newDeadline);                   //dummy fucntion
            cout << "Deadline updated successfully" << endl;
            break;
        }
        case 4: {           
            cout << "Enter status choice: " << endl;
            cout << "1. Completed" << endl;
            cout << "2. Pending " << endl;
            cin >> statusChoice;


            switch (statusChoice){
              case 1:{
                newStatus = "Completed";
                break;
              }
              case 2:{
                newStatus = "Pending";
                break;
              }
              default: {
                cout << "Invalid option" << endl;
                cin.ignore();
                break;
              }
            }

            Task::updateTaskStatus(task_id, newStatus);

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

void deleteTasks() {
  int task_id;
  
  cout << "===== Delete Tasks =====" << endl;
  cout << "Enter task id to delete" << endl;
  cin >> task_id;

  Task::deleteTask(task_id);
  cout << "Task deleted successfully" << endl;
  cout << "Press Enter to continue";
  cin.ignore();
  cin.get();
}

void switchUser(){
  cout << "===== Switch User =====" << endl;
  User::getCurrentUser()= "";
  showLoginMenu();
}

void logout(){
  int choice;
  cout << "===== Log Out And Quit =====" << endl;
  cout << "Are you sure you want to logout and quit?" << endl;
  cout << "1.Yes" << endl;
  cout << "2.No"  << endl;
  cin >> choice;

  switch (choice){
    case 1: {
      exit(0);
      break;
    }
    case 2: {
      cout << "Logout cancelled" << endl;
      cout << "Press Enter to continue" << endl;
      cin.ignore();
      cin.get();
      break;
    }
    default: {
      cout << "Invalid option" << endl;
      cout << "Press Enter to continue" << endl;
      cin.ignore();
      cin.get();
      break;
    }
  }
}
