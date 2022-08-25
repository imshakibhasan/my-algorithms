#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#include <stdlib.h>
//#include<windows.h>
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
    printf("\n\n\t\t\t\t\t\tenter first name: ");scanf("%s",l.fname);
    printf("\t\t\t\t\t\tenter last name: ");scanf("%s",l.lname);
    printf("\t\t\t\t\t\tenter username: ");scanf("%s",l.username);
    printf("\t\t\t\t\t\tenter password: ");scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\n\t\t\t\t\t\tyour user name is userid\n");
    printf("\t\t\t\t\t\tnow login with userid and password\n");
    printf("\n\t\t\t\t\t\tenter any key to continue.....");
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
    printf("\n\n\t\t\t\t\t\tuserid: ");
    scanf("%s",&username);
    printf("\t\t\t\t\t\tpassword: ");
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
struct paitent{
    char name[20],blood_grup[3],address[100],disease[30],sex[6];
    int age;
    struct apointment_time{
        int s_hour,e_hour,s_min,e_min;
    }time;
    struct apintment_date{
        int date,month,year;
    }date;
    bool free;
} p[500];
struct doctor{
    char name[20],working_area[10];
    struct boocked_date_and_time{
        int s_hour,e_hour,s_min,e_min,date,month,year;
    }dot;
}d[500];
void header();
void invalid();
void welcome_page();
void paitent_detail();
bool homepage();
void create();
int view_paitent();
int select_doctor();
void take_appintment();
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main(){
    input();
    int cho;
    printf("\t\t\t\t\t\tWelcome to Appolo Hospital\n\n\n");
    printf("\t\t\t\t\t\t press '1' for register \n\t\t\t\t\t\t press '2' for log in\n");
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
    for (int i=0;i<500;i++)p[i].free=1;
    while(homepage());
    create();
    return 0;
}
void header(){
    gotoxy(40,5);
    printf("Welcome to paitent management system\n");
}
void invalid(){
    system("cls");
    header();
    system("Color 04");
    gotoxy(38,7);printf("Invalid choice press any key and try again\n");
    getch();system("Color 0F");
}
void create(){
    system("cls");
    char c;
    for (int i=0;i<500;i++){
        if (p[i].free){
            header();
            p[i].free=0;
            scanf("%c",&c);
            gotoxy(40,6);printf("Enter patient name: ");
            scanf("%[^\n]s",p[i].name);
            scanf("%c",&c);
            gotoxy(40,7);printf("Enter patient blood group: ");
            scanf("%[^\n]s",p[i].blood_grup);
            scanf("%c",&c);
            gotoxy(40,8);printf("Enter patient address: ");
            scanf("%[^\n]s",p[i].address);
            scanf("%c",&c);
            gotoxy(40,9);printf("Enter patient deasese: ");
            scanf("%[^\n]s",p[i].disease);
            scanf("%c",&c);
            gotoxy(40,10);printf("Enter patient sex: ");
            scanf("%[^\n]s",p[i].sex);
            scanf("%c",&c);
            gotoxy(40,11);printf("Enter patient age: ");
            scanf("%d",&p[i].age);
            take_appintment(i);
            break;
        }
    }
}

int view_paitent(int k){
    system("cls");
    header();
    system("Color 0F");
    int ar[500];
    int j=1;
   gotoxy(36,6);printf("Paitent name\tage\tblood Group\taddress\t\tdisease\t\tsex\n");
    for (int i=0;i<500;i++){
        if(p[i].free==0){

                gotoxy(36,6+j);printf("%d)%s\t%d\t%s\t%s\t%s\t%s\n",j,p[i].name,p[i].age,p[i].blood_grup,p[i].address,p[i].disease,p[i].sex);
                ar[j-1]=i;
        j++;
        }
    }if (k==-1){
    gotoxy(36,6+j);printf("Enter patient number whose appointment you want to cancel:\n");
    scanf("%d",&k);
    return ar[k-1];
    }
    else{gotoxy(36,6+j);printf("press any key to exit");getch();}
}
int select_doctor(int k){
    system("cls");
    header();
    system("Color 0F");
    gotoxy(36,6);printf("Enter your preferable choice of doctor: ");
    int j=1;
    int ar[501];
    for (int i=0;i<500;i++){
        if (strcmp(d[i].working_area,p[k].disease)==0){
            gotoxy(36,6+j);printf(" %d)%s\n",j,d[i].name);
            ar[j]=i;
            j++;
        }
    }
    gotoxy(75,6+j);scanf("%d",&j);
    return ar[j];

}
bool homepage(){
    while(1){
        system("cls");
        system("Color 0F");
        header();
        int n;
        gotoxy(50,9);printf("press 1 to enter\n");
        gotoxy(50,10);printf("press 0 to exit\n");
        gotoxy(58,11);scanf("%d",&n);
        if (n==1)welcome_page();
        else if (n==0)main();
        else invalid();
    }
}
void dlt(){
    system("cls");
    header();
    system("Color 0F");
p[view_paitent(-1)].free=1;
system("cls");
    header();
    system("Color 0A");
    gotoxy(35,10);printf("Appointment deleted successfully press any key to exit");getch();
     system("Color 0F");
}
void welcome_page(){
    while(1){
    system("cls");
        system("Color 0F");
        header();
        int n;
        gotoxy(40,7);printf("Select your desire option: \n");
        gotoxy(40,8);printf("press 1 to create a new appointment\n");
        gotoxy(40,9);printf("press 2 to view all stored patient details and modify\n");
        gotoxy(40,10);printf("press 3 to delete an appoinment\n");
        gotoxy(40,12);printf("press 0 to go to homepage\n");
        gotoxy(67,7);scanf("%d",&n);
        if (n==1)create();
        else if (n==0)homepage();
        else if (n==2)view_paitent(0);
        else if (n==3)dlt();
        else invalid();
    }
}

void patient_detail(int i){
    gotoxy(30,8);printf("Paitent name\tage\tblood Group\taddress\t\tdisease\t\tsex\n");
    gotoxy(30,9);printf("%12s\t%d\t%s\t%s\t%s\t%s\n",p[i].name,p[i].age,p[i].blood_grup,p[i].address,p[i].disease,p[i].sex);

    }
void take_appintment(int j){
    int i=select_doctor(j);
    system("cls");
    header();
    patient_detail(i);
    gotoxy(30,10);
    printf("appointment is given to the selected doctor\n");

    d[i].dot.e_hour+=2;
    if(d[i].dot.e_hour>5){
        d[i].dot.date++;

    }
gotoxy(30,11);printf("doctor name           :%s\n",d[i].name);
gotoxy(30,12);printf("deasese               :%s\n",d[i].working_area);
gotoxy(30,13);printf("appointment starts at :%02d:%02d %02d:%02d\n",d[i].dot.e_hour-2,0,d[i].dot.e_hour,0);
gotoxy(30,14);printf("appointment date      :%d-%d-%d\n",d[i].dot.date,d[i].dot.month,d[i].dot.year);
gotoxy(38,15);printf("Press any key to exit\n");
    getch();


}

void input(){
    FILE *F;
    F=fopen("doctor.txt", "r");
    for(int i=0;i<50;i++){
        fscanf(F,"%s %s %d %d %d %d %d %d %d",d[i].name,d[i].working_area,&d[i].dot.s_hour,&d[i].dot.e_hour,&d[i].dot.s_min,&d[i].dot.e_min,&d[i].dot.date,&d[i].dot.month,&d[i].dot.year);

    }
}