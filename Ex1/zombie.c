#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char **argv ){
    int pid=fork();
    if(pid<0) {
            printf("Create process failed!\n");
            return 0;
        }else if(pid==0){
            printf("A Child process is created!\n");
            exit(0);
        }else{
            sleep(10);
            //wait(NULL);
        }
        return 1;
}