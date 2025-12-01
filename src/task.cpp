#include "../include/include.h"

<<<<<<< HEAD
Task::Task(string _name){
  name = _name;
}
Task::Task(string _name, string _description){
  name = _name;
  description = _description;
}
Task::Task(string _name, string _description,string _deadline){
  name = _name;
  description = _description;
  deadline = _deadline;
}
Task::Task(string _name, string _description,string _deadline, string _status){
  name = _name;
  description = _description;
  deadline = _deadline;
  status = _status;
=======
Task::Task(std::string name){
  Data::saveTask(name);

>>>>>>> ddd406b ("merged oscars ui changes")
}
