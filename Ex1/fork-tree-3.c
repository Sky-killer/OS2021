#include<stdio.h>
#include<unistd.h>
int degree=4;
int main(int argc, char **argv)
{   int i=0;               //degree of tree 
    int pid1=0,pid2=0;
Create:
    if(i>=degree-1) goto Over;   
    pid1=fork();
    if(i<degree-1&&pid1==0){  //first child;
        i++;
        goto Create;
    }
    pid2=fork();
    if(pid1<0||pid2<0){
        printf("Create process failed!\n");
        return 0;
    }else if(pid1>0&&pid2>0){
        printf("Degree %d: Create Child success! Child is %d %d\n",i,pid1,pid2);
    }else if(i<degree-1&&pid2==0){  //second Child
        i++;
        goto Create;
    }
Over:
    getchar();
}