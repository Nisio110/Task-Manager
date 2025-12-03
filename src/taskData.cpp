#include "../include/include.h"
#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"

void TaskData::saveTask(Task &task){
    string task_fn;

    openFile(ios::app);

    // Add data to the file
    cout << dbg() << "Saving task...\n";
    string data_div = ",", task_div = "\n", qt = "\"";
    file << qt << task.getID() << qt << data_div
         << qt << task.getName() << qt << data_div
         << qt << task.getDescription() << qt << data_div
         << qt << task.getStatus() << qt << data_div
         << qt << task.getDeadline() << qt
         << task_div;

    if (file.fail())
      cout << dbg() << "File saving failed :(" << '\n';
    else cout << dbg() << "File saved successfully!" << '\n';

    // Close file
    file.close();
    cout << dbg() << "Closing file.\n";
}

void TaskData::openFile(ios_base::openmode om){
  setFileName();
  cout << dbg() << "Creating file..." << '\n';
  file.open(filename, om);
  if (file.fail()){
    file.clear();
    cout << dbg() << "File open failed :(" << '\n';
  }else 
    cout << dbg() << "...File created successfully!" << '\n'
         << dbg() << "Path: <CWD>/" << filename << '\n';
}

void TaskData::setFileName(){
    stringstream ss;
    //ss << "data/User" << *user.getID() << "Tasks.csv";
    ss << "data/User" << "1" << "Tasks.csv";
    ss >> filename;
}

void TaskData::loadTask(){
  openFile(ios::in);
  setFileName();
  cout << Task::getNumTasks();
  /*string *tasks[Task::getNumTasks()];
  for (int i{}; i <= Task::getNumTasks(); i++){
    getline(file,*tasks[i]);
    if (file.fail()) cout << "Task loading failed :(";
    else cout << "Task " << i << " loading success!";
  }

  // print for testing
  for (int i; i <= Task::getNumTasks(); i++)
    cout << *tasks[i] << '\n';
  */
}