#include "../include/include.h"
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
  int id;
  id = num_tasks + 1;
  num_tasks += 1;
  return id;
}