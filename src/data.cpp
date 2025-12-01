#include "../include/data.h"
#include "../include/task.h"
#include "../include/user.h"
#include <fstream>
#include <sstream>
using std::fstream;
using std::stringstream;

void Data::saveTask(User &user, Task &task){
    std::cout << "Saving task...\n";

    // Create filename
    string task_filename;
    stringstream ss;

    int userID = user.getID();
    ss << "../data/User" << "1" << "Tasks.csv";
    ss >> task_filename;

    // create file using that filename
    fstream f;
    f.open("../test.txt");
    std::cout << "Filename: " << task_filename << '\n';
    if (f.fail()) {
        f.clear();
        std::cout << "File failed to open" << '\n';
    }else std::cout << "Task saved!" << '\n';
    task_file[task.getID()] = &f;
    string commas = ",,,";
    *task_file[task.getID()] << "\"" << task.getID() << "\"" << commas
                             << "\"" << task.getName() << "\"" << commas
                             << "\"" << task.getDeadline() << "\"" << commas
                             << "\"" << task.getStatus() << "\"" << commas
                             << "\"" << task.getDeadline() << "\"" << commas
                             << "\n";
    
    task_file[task.getID()]->close();
    std::cout << "[DEBUG] " << "File closed\n";
}