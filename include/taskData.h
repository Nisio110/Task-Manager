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
  User *user;
  string filename;
public:
  void saveTask(Task &t);
  void loadTask(); // load saved tasks from disk
  void deleteTask();

  void openFile(ios_base::openmode om);
  void setFileName();
  void setUser(User &u){user = &u;};

  static void displayUserTasks(string current_user){}
};