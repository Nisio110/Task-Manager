#include "../include/include.h"

int main(){
    Task t("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    Task t2("SampleTask","A sample task created for testing purposes", "03/12/2025", "pending");
    User u("Oisin", "123");
<<<<<<< HEAD
<<<<<<< HEAD
    TasksFile tf;
    tf.saveTask(u,t);
    tf.saveTask(u,t2);
=======
    TaskFile tf;
    tf.saveTask(u,t);
>>>>>>> 717ddc3 (rebasing to merge oscars ui changes)
=======
    TasksFile tf;
    tf.saveTask(u,t);
    tf.saveTask(u,t2);
>>>>>>> 8e6b010 (rebasing)
    return 0;
}
