#include "../include/task.h"
#include "../include/taskData.h"
#include "../include/userData.h"
#include "../include/ui.h"
#include "../include/user.h"

string dbg() {return "[DEBUG] ";}
string pfx() {return "~ ";}
void testTaskSaving();
void testUserSaving();
void program();

int main(){
    fstream file("data/User1Tasks.csv");
    int x = 4;
    char a[x];
    file.get(a,x);
    string id = a;
    cout << "id = " << id << '\n'; 
    for (int i = 0; i < x; i++)
        if (id[i] == '"') id[i] = 0;
    string clean_id = id;
    cout << "clean id = " << clean_id << '\n';
    return 0;
}

void program(){
    showLoginMenu();
}

void testUserSaving(){
    cout << dbg() << "--- Testing user saving functionality ---\n";
    UserData ud;
    User u("Oisín");
    ud.saveUser(u);
    cout << dbg() << "------------ Test complete -------------\n";
}

void testTaskSaving(){
    cout << dbg() << "--- Testing task saving functionality ---\n";
    Task t("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    Task t2("SampleTask_2","A sample task created for testing purposes", "03/12/2025", "pending");
    User u("Oisin");
    TaskData tf;
    tf.saveTask(t);
    tf.saveTask(t2);
    cout << dbg() << "------------ Test complete -------------\n";
}