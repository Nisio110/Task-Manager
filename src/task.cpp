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

// Technically, it is checking how many tasks are in the file
void Task::setNumTasks(){
  stringstream ss;
  string fn;
  ss << "data/User" << u->getID() << "Tasks.csv";
  ss >> fn;

  fstream file(fn);
  int temp_num_tasks;
  while(!file.eof()){
    file.seekg('\n');
    temp_num_tasks += 1;
  }
  for (int i; i < temp_num_tasks; ++i){
    int x = 4;
    char a[x];
    file.get(a,x);
    string id = a;
    // get rid 
    cout << "id = " << id << '\n'; 
    for (int i = 0; i < x; i++)
        if (id[i] == '"') id[i] = 0;
    string clean_id = id;
    cout << "clean id = " << clean_id << '\n';
  }
}
