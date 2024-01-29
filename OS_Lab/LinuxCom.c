#include<stdio.h>
#include<conio.h>
#include<dir.h>

void main(int argc, char*argv[]) //argv is a pointer array while argc is argument counter
{
    clrscr();
    if(argc==1){
        printf("\nInvalid Parameters.");
    }
    if(argc>2){
        printf("\nToo Many Parameters.");
    }
    if(argc==2){
        if((chdir(argv[1]))==0){
            printf("\nDirectory Created");
        }
        else{
            perror("Error");
        }
    }
    getch();
}