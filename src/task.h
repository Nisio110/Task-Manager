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

class task {
private:
  std::string name{};
  std::string status{};
  std::string description{};
  std::string deadline{};
public:
  task();

  void saveTask(); // placeholder
  void deleteTask(){} // placeholder

  std::string getName();
  void setName();
  
  std::string getStatus();
  void setStatus();

  std::string getDescription();
  void setDescription();

  std::string getDeadline();
  void setDeadline();
};
