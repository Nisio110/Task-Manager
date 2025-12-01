<<<<<<< HEAD
#include "../include/include.h"

void TasksFile::saveTask(User &user, Task &task){
    stringstream ss;
    string task_fn;
=======
#include "../include/data.h"
#include "../include/task.h"
#include "../include/user.h"
#include "../include/ui.h"
#include <fstream>
#include <sstream>
using std::fstream;
using std::stringstream;
using std::cout;

<<<<<<< HEAD
void Data::saveTask(User &user, Task &task){
    cout << dbg_prefix << "Saving task...\n";
>>>>>>> f76798f (adjusted the debugging statements in data.cpp)

    // Create filename
    ss << "data/User" << user.getID() << "Tasks.csv";
    ss >> task_fn;

<<<<<<< HEAD
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
=======
    int userID = user.getID();
    ss << "../data/User" << "1" << "Tasks.csv";
    ss >> task_filename;

    // create file using that filename
    cout << dbg_prefix << "Opening/Creating the file";
    fstream f;
    f.open("../test.txt");
    cout << dbg_prefix << "Filepath: " << task_filename << '\n';
    if (f.fail()) {
=======

void TaskFile::saveTask(User &user, Task &task){
    stringstream ss;
    int user_id;
    string task_fn;
    user_id = user.getID();

    // Create filename
    ss << "../data/" << "User" << user_id << "Tasks.csv";
    ss >> task_fn;
    
    // create file using that filename
    cout << dbg_prefix << "Opening file located at: " << task_fn << '\n';
    f.open(task_fn);
    if (f.fail()){
>>>>>>> 717ddc3 (rebasing to merge oscars ui changes)
        f.clear();
        cout << dbg_prefix << "File failed to open :(" << '\n';
    }else cout << dbg_prefix << "File opened successfully!" << '\n';
 
    // Add data to the file
    /*
    cout << dbg_prefix << "Saving task...\n";
    task_file[task.getID()] = &f;
    string commas = ",,,";
    *task_file[task.getID()] << "\"" << task.getID() << "\"" << commas
                             << "\"" << task.getName() << "\"" << commas
                             << "\"" << task.getDeadline() << "\"" << commas
                             << "\"" << task.getStatus() << "\"" << commas
                             << "\"" << task.getDeadline() << "\"" << commas
                             << "\n";
    
<<<<<<< HEAD
    task_file[task.getID()]->close();
    cout << dbg_prefix << "File closed\n";
>>>>>>> f76798f (adjusted the debugging statements in data.cpp)
=======
    */
    f.close();
    cout << dbg_prefix << "Closing file.\n";
>>>>>>> 717ddc3 (rebasing to merge oscars ui changes)
}
