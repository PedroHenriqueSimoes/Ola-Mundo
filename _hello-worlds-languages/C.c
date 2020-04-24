#include <stdio.h>

void systemPause(){
    printf("Type enter to continue...");
    getchar();
}

int main(){
    printf("Hello World!\n");
    systemPause();
    return 0;
}