#include "../include/include.h"

void TasksFile::saveTask(User &user, Task &task){
    stringstream ss;
    string task_fn;

    // Create filename
    ss << "data/User" << user.getID() << "Tasks.csv";
    ss >> task_fn;

    // Create file using that filename
    cout << dbg_prefix << "Creating file..." << '\n';
    f.open(task_fn, ios::app);
    if (f.fail()){
        f.clear();
        cout << dbg_prefix << "File creation failed :(" << '\n';
    }else 
      cout << dbg_prefix << "File created successfully!" << '\n'
           << dbg_prefix << "Path: <CWD>/" << task_fn << '\n';

    // Add data to the file
    cout << dbg_prefix << "Saving task...\n";
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
      cout << dbg_prefix << "File saving failed :(" << '\n';
    else cout << dbg_prefix << "File saved successfully!" << '\n';

    // Close file
    f.close();
    cout << dbg_prefix << "Closing file.\n";
}
