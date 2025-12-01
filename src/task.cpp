#include "../include/task.h"
#include <iostream> // For potential future debug prints

// Global counter for task IDs
static int next_task_id = 0; 

Task::Task(string _name, string _description, string _deadline, string _status) {
    id = ++next_task_id; // Assign a unique ID
    name = _name;
    description = _description;
    deadline = _deadline;
    status = _status;
}