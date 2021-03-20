#include<stdio.h>
#include<unistd.h>
int degree=11;
int main(int argc, char **argv)
{   int i=0;               //degree of tree 
    int pid;
Create:    
    pid=fork();
    if(pid<0){
        printf("Create process failed!\n");
        return 0;
    }else if(pid>0){
        printf("Degree %d: Create Child success! Child is %d\n",i,pid);
    }else if(i<degree-1&&pid==0){
        i++;
        goto Create;
    }

    getchar();
}