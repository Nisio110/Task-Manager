#pragma once
#include "../include/include.h"

// Forward declarations - only need these since we use pointers
class Task;
class User;

const static int MAX_TASKS = 3;

class TaskData{
private:
  int file_id{};
  int task_id{};
  fstream f;
  Task *t[MAX_TASKS];
public:
  void loadTasks();

  // Task Saving
  //void initaliseTasks(); //read saved tasks
  void saveTask(User &u, Task &t);
  void deleteTask();

  // Getters and setters
  //void setFileName(string n){file_name = n;}
  static void displayUserTasks(string current_user){}
};
