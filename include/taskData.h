#pragma once
#include "../include/include.h"

// Forward declarations - only need these since we use pointers
class Task;
class User;

class TaskData{
private:
  const static int MAX_TASKS = 3;
  int file_id{};
  int task_id{};
  fstream file;
  Task *task[MAX_TASKS];
public:
  // Task Saving
  void loadTasks(); // load saved tasks from disk
  void saveTask(User &u, Task &t);
  void deleteTask();

  // Getters and setters
  //void setFileName(string n){file_name = n;}
  static void displayUserTasks(string current_user){}
};