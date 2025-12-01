#include "../include/data.h"
#include "../include/task.h"
#include "../include/user.h"
#include "../include/ui.h"
#include <fstream>
#include <sstream>
using std::fstream;
using std::stringstream;
using std::cout;


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
    
    */
    f.close();
    cout << dbg_prefix << "Closing file.\n";
}
