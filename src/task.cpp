#include "../include/include.h"
#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"
// Static member variable definition
int Task::num_tasks = 0;

Task::Task(){
  setID(createID());
}

Task::Task(string _name){
  setID(createID());
  setName(_name);
}

Task::Task(string _name, string _description){
  setID(createID());
  setName(_name);
  setDescription(_description);
}

Task::Task(string _name, string _description,string _deadline){
  setID(createID());
  setName(_name);
  setDescription(_description);
  setDeadline(_deadline);
}

Task::Task(string _name, string _description,string _deadline, string _status){
  setID(createID());
  setName(_name);
  setDescription(_description);
  setDeadline(_deadline);
  setStatus(_status);
}

int Task::createID(){
  incNumTasks();
  int id{getNumTasks()};
  return id;
}

void Task::setNumTasks(){
  stringstream ss;
  string fn;
  ss << "data/User" << u->getID() << "Tasks.csv";
  ss >> fn;
  fstream file(fn);
  char a[3];
  file.get(a,3);
  string id = a;
  cout << "id = " << id;
}