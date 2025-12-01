#pragma once

class TaskFile{
private:
<<<<<<< HEAD
  int num_users{};
  int num_tasks{};
=======
  int file_id{};
  int task_id{};
  fstream f;
  Task *t[MAX_TASKS];
>>>>>>> 717ddc3 (rebasing to merge oscars ui changes)
public:
  void loadTasks();
  void saveTask();

  // Task Saving
  friend void initaliseTasks();
  void saveTask();
  void deleteTask();
};
