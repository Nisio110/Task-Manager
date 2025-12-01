#pragma once
#include <string>
#include <fstream>
#include "../include/user.h"
#include "../include/task.h"
using std::fstream;
using std::string;

const static int MAX_TASKS = 3;

class TaskFile{
private:
  int file_id{};
  int task_id{};
  fstream f;
  Task *t[MAX_TASKS];
public:
  void loadTasks();
  void saveTask();

  // Task Saving
  //void initaliseTasks();
  void saveTask(User &u, Task &t);
  void deleteTask();

  // Getters and setters
  //void setFileName(string n){file_name = n;}

};
