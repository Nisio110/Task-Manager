#pragma once

class Data{
private:
  int num_users{};
  int num_tasks{};
public:
  void loadTasks();
  void loadUsers();
};
