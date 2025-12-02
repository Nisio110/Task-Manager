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

    // Create file using that filename
    cout << dbg() << "Creating file..." << '\n';
    f.open(task_fn, ios::app);
    if (f.fail()){
      f.clear();
      cout << dbg() << "File creation failed :(" << '\n';
    }else 
      cout << dbg() << "File created successfully!" << '\n'
           << dbg() << "Path: <CWD>/" << task_fn << '\n';

    // Add data to the file
    cout << dbg() << "Saving task...\n";
    string data_div = ",";
    string task_div = "\n";
    string q = "\"";
    f << q << task.getID() << q << data_div
      << q << task.getName() << q << data_div
      << q << task.getDescription() << q << data_div
      << q << task.getStatus() << q << data_div
      << q << task.getDeadline() << q << data_div
      << task_div;

    if (f.fail())
      cout << dbg() << "File saving failed :(" << '\n';
    else cout << dbg() << "File saved successfully!" << '\n';

    // Close file
    f.close();
    cout << dbg() << "Closing file.\n";
}