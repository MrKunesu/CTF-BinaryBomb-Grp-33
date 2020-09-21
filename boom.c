#include <stdio.h>
#include <stdlib.h>
#include "stages.h"
#include "setup.h"

//NEED TO FIX SIG UNUSED PARAMETER
FILE *infile;
char input_strings[80];

int main(int argc, char *argv[]){
    char *input = NULL;
     
    //File IO
    if (argc == 1){
        infile = stdin;
    }

    else if (argc == 2){
        infile = fopen(argv[1], "r");
        if (infile == NULL){
            printf("Error: Couldn't open given file");
            exit(8);
        }
    }
    else{
        printf("Successful open\n");
        exit(8);
    }//END FILE IO

    //secret bomb setup lol.
    bomb_setup();

    //JUST SOME BANTER
    printf("GET READY TO SPECTACULARLY FAIL THE UPCOMING 5 STAGES!\n");
    printf("BUT FIRST WE START OF WITH AN EASY ONE\n");
    printf("\n\n");

    //STAGES START HERE
    //STAGE 1 --- WHAT IS MY PASSWORD AGAIN? GOOD LUCK.
    printf("WHAT IS MY PASSWORD AGAIN?\n");
    input = reader();
    stage1(input);
    // phase_defused();
    //SUCCESS FOR STAGE1
    printf("WOW, WELL DONE, ONE DOWN 4 MORE TO GO\n");
    printf("\n\n");
    printf("ACTIVATING HARDER STAGE NOW\n");
    printf("\n\n");

    //STAGE 2 --- WHAT IS MY BIRTHDAY DD MM YYYY (NEEDS WORK LOL)
    printf("STAGE 2\n");
    printf("LETS SEE YOUR MATH SKILLS\n");
    printf("LETS SEE IF YOU CAN FIGURE OUT MY 3 NUMBER PASSCODE\n");
    input = reader();
    stage2(input);
    // phase_defused();
    printf("WELL WELL WELL, YOU'RE NOT TOO BAD AFTER ALL!\n");
    printf("THATS 2 DOWN 3 MORE TO GO!!!");
    printf("\n\n");

    //STAGE 3 --- NEED SOMETHING EVIL MUAHAHAHA

}