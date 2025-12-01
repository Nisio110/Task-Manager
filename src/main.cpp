#include "../include/task.h"
#include "../include/data.h"
#include "../include/user.h"
#include <iostream>

int main(){

    User u("Oisin", "123"); // Create a dummy user
    TaskFile tf;

    tf.clearFileForUser(u);


    std::cout << "SAVING TASKS" << std::endl;
    Task t1("First Task", "This is the first minimal task.", "2025-12-20", "In Progress");
    Task t2("Second Task", "Another minimal task.", "2025-12-22", "Completed");
    
    tf.saveTask(u, t1);
    tf.saveTask(u, t2);
    
    std::cout << "\nLOADING" << std::endl;

    tf.loadTasks(u);
    return 0;
}