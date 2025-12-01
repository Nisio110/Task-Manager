#pragma once
#include <string>
#include <fstream>
#include "../include/user.h"
#include "../include/task.h"
using std::fstream;
using std::string;

const static int MAX_TASKS = 3;

class Data{
private:
  int num_users{};
  int num_tasks{};
  fstream *user_file;
  fstream *task_file[MAX_TASKS];
public:
  void loadTasks();
  void loadUsers();
  void saveTask();

  // Task Saving
  //void initaliseTasks();
  void saveTask(User &u, Task &t);
  void deleteTask();

  // Getters and setters
  //void setFileName(string n){file_name = n;}

};
