#include "../include/data.h"
#include "../include/task.h"
#include "../include/user.h"
#include "../include/ui.h"
#include <fstream>
#include <sstream>
using std::fstream;
using std::stringstream;
using std::cout;

void Data::saveTask(User &user, Task &task){
    cout << dbg_prefix << "Saving task...\n";

    // Create filename
    string task_filename;
    stringstream ss;

    int userID = user.getID();
    ss << "../data/User" << "1" << "Tasks.csv";
    ss >> task_filename;

    // create file using that filename
    cout << dbg_prefix << "Opening/Creating the file\n";
    fstream f;
    f.open("../test.txt");
    cout << dbg_prefix << "Filepath: " << task_filename << '\n';
    if (f.fail()) {
        f.clear();
        cout << dbg_prefix << "File failed to open :(" << '\n';
    }else cout << dbg_prefix << "File opened successfully!" << '\n';
    task_file[task.getID()] = &f;
    string commas = ",,,";
    *task_file[task.getID()] << "\"" << task.getID() << "\"" << commas
                             << "\"" << task.getName() << "\"" << commas
                             << "\"" << task.getDeadline() << "\"" << commas
                             << "\"" << task.getStatus() << "\"" << commas
                             << "\"" << task.getDeadline() << "\"" << commas
                             << "\n";
    
    task_file[task.getID()]->close();
    cout << dbg_prefix << "File closed\n";
}
