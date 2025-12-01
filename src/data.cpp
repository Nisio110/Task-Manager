#include "../include/data.h"
#include "../include/task.h"
#include "../include/user.h"
#include <fstream>
#include <sstream>
#include <iostream> // For std::endl

using std::fstream;
using std::stringstream;
using std::cout;
using std::string;

TaskFile::TaskFile() {
    for (int i = 0; i < MAX_TASKS; ++i) {
        t[i] = nullptr;
    }
}

void TaskFile::saveTask(User &user, Task &task){
    stringstream ss;
    int user_id;
    string task_fn;
    user_id = user.getID();

    // Create filename
    ss << "../data/" << "User" << user_id << "Tasks.csv";
    ss >> task_fn;
    
    // create file using that filename
    f.open(task_fn, std::ios::out | std::ios::app); // Open in append mode
    if (f.fail()){
        f.clear();
        cout << "File failed to open :( " << task_fn << '\n';
    }else cout << "File opened successfully!" << '\n';
 
    // Add data to the file
    string commas = ",,,";
    f << "\"" << task.getID() << "\"" << commas
      << "\"" << task.getName() << "\"" << commas
      << "\"" << task.getDeadline() << "\"" << commas
      << "\"" << task.getStatus() << "\"" << commas
      << "\"" << task.getDescription() << "\"" << commas;
      
    
f.close();
}

void TaskFile::loadTasks(User &user) {
    stringstream ss;
    int user_id;
    string task_fn;
    user_id = user.getID();

    // Create filename
    ss << "../data/" << "User" << user_id << "Tasks.csv";
    ss >> task_fn;

    std::ifstream inFile(task_fn);
    if (!inFile.is_open()) {
        cout << "Could not open file for reading: " << task_fn << std::endl;
        return;
    }

    cout << "Reading from file: " << task_fn << std::endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << std::endl;
    }
    inFile.close();
}

void TaskFile::clearFileForUser(User &user) {
    stringstream ss;
    int user_id;
    string task_fn;
    user_id = user.getID();

    // Create filename
    ss << "../data/" << "User" << user_id << "Tasks.csv";
    ss >> task_fn;
    
    // open file in truncate mode to clear it
    f.open(task_fn, std::ios::out | std::ios::trunc);
    f.close();
}


// Dummy implementations for declared but not used functions
void TaskFile::saveTask() {}
void TaskFile::deleteTask() {}