#include "../include/include.h"
#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"

void TaskData::saveTask(User &user, Task &task){
    stringstream ss;
    string task_fn;

    // Create filename
    ss << "data/User" << user.getID() << "Tasks.csv";
    ss >> task_fn;
    // ^^ This can be done in the class, not here

    // Create file using that filename
    cout << dbg() << "Creating file..." << '\n';
    file.open(task_fn, ios::app);
    if (file.fail()){
      file.clear();
      cout << dbg() << "File creation failed :(" << '\n';
    }else 
      cout << dbg() << "File created successfully!" << '\n'
           << dbg() << "Path: <CWD>/" << task_fn << '\n';
    // ^^ This should probably be its own function
          
          
    // Add data to the file
    cout << dbg() << "Saving task...\n";
    string data_div = ",";
    string task_div = "\n";
    string qt = "\"";
    file << qt << task.getID() << qt << data_div
         << qt << task.getName() << qt << data_div
         << qt << task.getDescription() << qt << data_div
         << qt << task.getStatus() << qt << data_div
         << qt << task.getDeadline() << qt << data_div
         << task_div;

    if (file.fail())
      cout << dbg() << "File saving failed :(" << '\n';
    else cout << dbg() << "File saved successfully!" << '\n';

    // Close file
    file.close();
    cout << dbg() << "Closing file.\n";
}