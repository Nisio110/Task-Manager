#include "../include/ui.h"
#include "../include/task.h"
#include "../include/data.h"
#include "../include/user.h"
int main(){
    Task t("SampleTask");
    User u("Oisin", "123");
    TaskFile tf;
    tf.saveTask(u,t);
    return 0;
}
