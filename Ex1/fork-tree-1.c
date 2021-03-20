#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#define child 10
int main(int argc, char **argv)
{   int pid[child]={0};
    int flag=1; 
    for(int i=0;i<child;i++){
        pid[i]=fork();
        if(pid[i]<0) {
            printf("Create process failed!\n");
            return 0;
        }
        else if(pid[i]==0){
            printf("A Child process is created!\n");
            flag=0;
            break;
        }
    }
    if(flag){
        sleep(1);
        printf("Parent's Child process pid are:");
        for(int i=0;i<child;i++)
            printf("%d ",pid[i]);
        printf("\n");
    }
    getchar();
    return 1;
}