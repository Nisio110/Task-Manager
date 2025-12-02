#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/userData.h"
#include "../include/ui.h"
#include "../include/user.h"

inline string dbg() {return "[DEBUG] ";}
inline string pfx() {return "~ ";}
void testTaskSaving();
void testUserSaving();
void program();

int main(){
    testUserSaving();
    return 0;
}

void program(){
    showLoginMenu();
}

void testUserSaving(){
    UserData ud;
    User u("Oisín");
    ud.saveUser(u);
}

void testTaskSaving(){
    cout << dbg() << "--- Testing task saving functionality ---\n";
    Task t("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    Task t2("SampleTask_2","A sample task created for testing purposes", "03/12/2025", "pending");
    User u("Oisin");
    TaskData tf;
    tf.saveTask(u,t);
    tf.saveTask(u,t2);
    cout << dbg() << "------------ Test complete -------------\n";
}