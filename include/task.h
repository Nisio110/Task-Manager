#pragma once
#include "../include/include.h"

class Task {
private:
  std::string name{"N/a"};
  std::string status{"N/a"};
  std::string description{"N/a"};
  std::string deadline{"N/a"};
  int id;
  static int num_tasks;
public:
  // Data Storage
  void initaliseTasks();
  void saveTask(Task &t);
  void deleteTask();
  void printTaskDetails();

  // Constructors
  Task();
  Task(string _name);
  Task(string _name, string _description);
  Task(string _name, string _description,string _deadline);
  Task(string _name, string _description,string _deadline, string _status);

  // Getters
  static inline int getNumTasks(){return num_tasks;}
  inline int getID(){return id;}
  inline std::string getName(){return name;}
  inline std::string getStatus(){return status;}
  inline std::string getDescription(){return description;}
  inline std::string getDeadline(){return deadline;}
  // Setters
  inline void incNumTasks(){num_tasks += 1;} //increment number of tasks
  inline void setID(int i){id = i;}
  inline void setName(std::string s){name = s;}
  inline void setStatus(std::string s){status = s;}
  inline void setDescription(std::string s){description = s;}
  inline void setDeadline(std::string s){deadline = s;}

  int createID();
  static void deleteTask(int id){}
  static void createTask(string current_user, string name, string desc, string deadline, string status){}
  static void updateTaskName(int id, string new_name){}
  static void updateTaskDescription(int id, string new_desc){}
  static void updateTaskDeadline(int id, string new_deadline){}
  static void updateTaskStatus(int id, string new_status){}
};
