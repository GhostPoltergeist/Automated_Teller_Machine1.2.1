#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define p printf
#define g gotoxy
/*
 * The g is define as gotoxy, and p is define as printf this is for the shortage of a certain program
 * This is also to specify the functions in a letter
 */
COORD co = {0,0};
void gotoxy(int x, int y)
{
 co.X=x;
 co.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co);
}

int main()
{
system("COLOR 0A");
p("                                                                                                \n");
p(" =============================================================                                  \n");
p("                                       .         .           |[$]Automated Teller Machine       \n");
p("          .8.    8888888 8888888888   ,8.       ,8.          |[$]Developer: GhostPoltergeist    \n");
p("         .888.         8 8888        ,888.     ,888.         |[$]GitHub: GhostPoltergeist       \n");
p("        :88888.        8 8888       .`8888.   .`8888.        |[$]BugCrowd: GhostPoltergeist     \n");
p("       . `88888.       8 8888      ,8.`8888. ,8.`8888.       |              ^^                  \n");
p("      .8. `88888.      8 8888     ,8'8.`8888,8^8.`8888.      |              ||                  \n");
p("     .8`8. `88888.     8 8888    ,8' `8.`8888' `8.`8888.     |==============||                  \n");
p("    .8' `8. `88888.    8 8888   ,8'   `8.`88'   `8.`8888.    |==============||                  \n");
p("   .8'   `8. `88888.   8 8888  ,8'     `8.`'     `8.`8888.   |\n");
p("  .888888888. `88888.  8 8888 ,8'       `8        `8.`8888.  |\n");
p(" .8'       `8. `88888. 8 8888,8'         `         `8.`8888. |\n");
p(" =============================================================\n");
p(" |\n");
p(" |\n");
p(" |");

    char ques;
    char salary;
    char name;
    char email;
    int pin_number;
    int q;
    p("\n[$]Name: ");
    scanf("%s", &name);
    p(" |");
    p("\n[$]Pin-Number(NumbersOnly): ");
    scanf("%d", &pin_number);
    p(" |");
    p("\n[$]Enter Your Value [a: 500, b: 1000, c: 5000, d: 10,000]: ");
    scanf("%s", &salary);

     //CASE SALARY 1

    switch(salary){
     case 'a':
     p(" |");
     p("\n |--[$]You entered 500, your bill will be processed, give us a second\n");
      if(salary==500)
       p(" |");
       p(" |");sleep(5);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(5);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
      p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

      //CASE SALARY 2

     case 'b':
     p(" |");
     p("\n |--[$]You entered 1000, your bill will be processed, give us a second\n");
      if(salary==1000)
       p(" |");
       p(" |");sleep(5);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(4);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
      p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

      //CASE SALARY 3

     case 'c':
     p(" |");
     p("\n |--[$]You entered 5000, your bill will be processed, give us a second\n");
      if(salary==5000)
       p(" |");
       p(" |");sleep(5);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(4);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
      p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

       //CASE SALARY 4

     case 'd':
     p(" |");
     p("\n |--[$]You entered 10,000 your bill will be processed, give us a second\n");
      if(salary==10000)
       p(" |");
       p(" |");sleep(5);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(4);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
       p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

      //CASE SALARY DEFAULT

     default:
     p("\nYour salary cannot be reached\n");
    }
 getchar();
}

