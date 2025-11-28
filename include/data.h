#pragma once

class Data{
private:
  int num_users{};
  int num_tasks{};
public:
  void loadTasks();
  void loadUsers();
  void saveTask();

  // Task Saving
  friend void initaliseTasks();
  void saveTask();
  void deleteTask();
};
