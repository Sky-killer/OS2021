#include<stdio.h>
#include<unistd.h>
#define child 10
int main(int argc, char **argv)
{   int pid[child]={0};
    for(int i=0;i<child;i++){
        int pid[i]=fork();
        if(pid<0) printf("Create process failed!\n");
        else if(pid==0) printf("A Child process is created! pid=%d\n",pid[i]),getchar();
    }
    printf("Parent's Child process pid are:")
    for(int i=0;i<child;i++)
        printf("%d ",pid[i]);
    getchar();
    return 0;
}