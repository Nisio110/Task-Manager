#include "../include/include.h"

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
}
