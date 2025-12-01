#pragma once
#include <string>
using std::string;

class Task {
private:
  std::string name{};
  std::string status{};
  std::string description{};
  std::string deadline{};
  int id{};
public:
  // Constructor
  Task(string _name, string _description, string _deadline, string _status);

  // Getters
  inline std::string getName(){return name;}
  inline std::string getStatus(){return status;}
  inline std::string getDescription(){return description;}
  inline std::string getDeadline(){return deadline;}
  inline int getID(){return id;}
  inline void setID(int i){id = i;} // Added for loadTasks
};