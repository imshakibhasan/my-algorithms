#include<stdio.h> 
#include <stdbool.h> 
#include <stdlib.h> 
//#include<windows.h> 
//#include<ncurses.h>

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
    }list[100]; 
}d[500]; 
void header(); 
void invalid(); 
void welcome_page(); 
bool homepage(); 
void create(); 
void view_paitent(); 
int select_doctor(); 
void take_appintment(); 
void gotoxy(int x,int y){ 
    //COORD c; 
   // c.X = x; 
    //c.Y = y; 
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c); 
} 
int main(){
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
        getch();
    }
void create(){
    system("cls");
    char c;
    for (int i=0;i<500;i++){
        if (p[i].free){
        header();
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

void view_paitent(){
    //    printf("Paitent name\tage\tblood Group\taddress\t\tdisease\t\tsex\n"); 
    //    for (int i=0;i<500;i++){ 
    //        printf("%s\t%d\t%s\t%s\t%s\t%s\n",) 
    //    } 
}
int select_doctor(int k){ 
    system("cls"); 
    header(); 
    system("Color 0F"); 
    gotoxy(36,6);printf("Enter your preferable choice of doctor: "); 
    int j=1; 
    int ar[501]; 
    for (int i=0;i<500;i++){ 
        if (d[i].working_area==p[i].disease){ 
            gotoxy(36,6+j);printf(" %d)%s\n",j,d[i].name); 
            ar[j]=i; 
            j++; 
        } 
    } 
    gotoxy(75,6);scanf("%d",&j); 
    return ar[j]; 
 
} 
bool homepage(){ 
    while(1){ 
        system("cls"); 
        system("Color 0F"); 
        header(); 
        int n; 
        gotoxy(50,9);printf("press 1 to enter\n"); 
        gotoxy(58,11);scanf("%d",&n); 
            if (n==1) {
                welcome_page(); 
            }
            else if (n==0) { 
                return 0; 
            }
            else {
                invalid(); 
            } 
    } 
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
        gotoxy(40,10);printf("press 3 to select doctor based on your deasese type\n"); 
        gotoxy(40,11);printf("press 0 to go to homepage\n");
        gotoxy(67,7);scanf("%d",&n); 
        if (n==1) { 
            create(); 
        }
        else if (n==0) {
            homepage(); 
        }
        else if (n==2) { 
            view_paitent();
        }
        else if (n==3) { 
            select_doctor(0);
        } 
        else { 
            invalid(); 
        }
    }
}
void take_appintment(int j){ 
    int i=select_doctor(j); 
    printf("appointment is given to the selected doctor\n"); 
    paitent_detail(); 
    printf("doctor name: %s\n",d[i].name);
}
