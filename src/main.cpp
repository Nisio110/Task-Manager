#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/ui.h"
#include "../include/user.h"

void testTaskSaving();
void program();
inline string dbg() {return "[DEBUG] ";}
inline string pfx() {return "~ ";}

int main(){
    program();
    return 0;
}

void program(){
    showLoginMenu();
}

void testTaskSaving(){
    cout << dbg() << "--- Testing task saving functionality ---\n";
    Task t("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    Task t2("SampleTask_2","A sample task created for testing purposes", "03/12/2025", "pending");
    User u("Oisin", "123");
    TaskData tf;
    tf.saveTask(u,t);
    tf.saveTask(u,t2);
    cout << dbg() << "------------ Test complete -------------\n";
}