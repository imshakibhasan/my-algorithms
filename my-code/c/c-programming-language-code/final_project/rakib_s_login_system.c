/*#include<stdio.h>
#include<string.h>
//#include<conio.h>
void registe();
void login();
struct login{
     char fname[100];
     char lname[20];
     char username[20];
     char password[20];
     };

int main() {
    int cho;
    printf("\npress '1' for register \npress '2' for log in\n");
    scanf("%d",&cho);
    if(cho==1) {
        system("CLS");
        //clrscr;
        registe();
    }
    else if(cho==2) {
        system("CLS");
        login();
    }
    else {
        printf("\nInvalid Input. Please enter correct number...\n");
    }
    return 0;
}

void registe() {
    FILE *log;
    log=fopen("login12.txt","w");
    struct login l;
    printf("Enter your first name: ");
    scanf("%s",l.fname);
    printf("Enter your last name: ");
    scanf("%s",l.lname);
    printf("Enter your username: ");
    scanf("%s",l.username);
    printf("Enter a password: ");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\nYour user name is your userid...\n");
    printf("Now login with userid and password...\n");
    printf("\nEnter any key to continue...");
    getc;
    system("CLS");
    login();
}

void login() {
    char username[200],password[20];
    FILE *log;
    log=fopen("login12.txt","r");
    struct login l;
    printf("userid: ");
    scanf("%s",username);
    printf("password: ");
    scanf("%s",password);

    while(fread(&l,sizeof(l),1,log)) {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0) {
            printf("succesful login\n");
        }
        else {
            printf("please enter correct id and password");
        }
    }
    fclose(log);
}*/

#include<stdio.h>
#include<string.h>
struct login{
     char fname[100];
     char lname[20];
     char username[20];
     char password[20];
     };
registe()
{
    FILE *log;
    log=fopen("login12.txt","a+");
    struct login l;
    printf("enter first name: ");scanf("%s",l.fname);
    printf("enter last name: ");scanf("%s",l.lname);
    printf("enter username: ");scanf("%s",l.username);
    printf("enter password: ");scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\nyour user name is userid\n");
    printf("now login with userid and password\n");
    printf("\nenter any key to continue.....");
    getch();
    system("CLS");
    login();

}
login()
{
    char username[200],password[20];
    FILE *log;
    log=fopen("login12.txt","r");
    struct login l;
    printf("userid: ");
    scanf("%s",username);
    printf("password: ");
    scanf("%s",password);

    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            printf("succesful login\n");
        }
        else
        {
            printf("please enter correct id and password\n");
        }
    }
    fclose(log);
}

main()
{
    int cho;
    printf("press '1' for register \npress '2' for log in\n");
    scanf("%d",&cho);
    if(cho==1)
    {
        system("CLS");
        registe();
    }
    else if(cho==2)
    {
        system("CLS");
        login();
    }
}

