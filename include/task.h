/*
# Tasks class
##Private 
### Data
  + Status - completed, pending, cancelled + Description + Deadline
  + Description
  + Deadline
### Functions
  + Save task to file
## Public
### Functions
  + Create task + Delete task
  + Edit task name
  + View tasks
  + Edit/remove description
  + Edit/remove deadline
*/
#pragma once
#include <string>
#include <iostream>
using std::string;

class Task {
private:
  std::string name{};
  std::string status{};
  std::string description{};
  std::string deadline{};
public:
  // Data Storage
  void initaliseTasks();
  void saveTask();
  void deleteTask();
  void printTaskDetails();

  // Constructors
  Task(string _name);
  Task(string _name, string _description);
  Task(string _name, string _description,string _deadline);
  Task(string _name, string _description,string _deadline, string _status);

  // Getters and setters
  inline std::string getName(){return name;}
  inline void setName(std::string s){name = s;}
  inline std::string getStatus(){return status;}
  inline void setStatus(std::string s){status = s;}
  inline std::string getDescription(){return description;}
  inline void setDescription(std::string s){description = s;}
  inline std::string getDeadline(){return deadline;}
  inline void setDeadline(std::string s){deadline = s;}
};
