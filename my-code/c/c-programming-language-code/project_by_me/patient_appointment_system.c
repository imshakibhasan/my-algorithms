#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void frontpage();
void login_page();
void registe();
void login();
void opening_page();
void choice_page();
void add_appointment();
void update_appointment();
void delete_appointment();
void view_appointment();
void doctor_choice();
void doctor_schedule();
struct info {
    char user_name[30];
    char password[33];
    char first_name[30];
    char last_name[30];
};
struct patient_details {
    char patient_name[30];
    char age[30];//4
    char blood_group[30];//4
    char disease[30];//20
    char address[30];
    char mobile_number[30];//12
};

int main() {
    int n, p;
    char ch;
    frontpage();
    system("clear");
    login_page();
    opening_page();
    choice_page();
    printf("\nPlease Enter Which Option You Want....");
    scanf("%d", &n);
    system("CLS");
    //system("clear");
    if ( n==1 ) {
        add_appointment();
    }
    /*else if ( n==2 ) {
        update_appointment();
    }
    else if ( n==3 ) {
        delete_appointment();
    }*/
    else if ( n==4 ) {
        view_appointment();
    }
   doctor_choice();
    

    return 0;
}


void frontpage() {
    //printf("           Patient Appointment System\n\n\n");
    char ch;
    for ( int i=0; i<2; i++ ) {
        for ( int j=0; j<46; j++ ) {
            printf("=");
        }
        printf("\n");
    }
    printf("========= Welcome To Apollo Hospital =========\n");
    for ( int i=0; i<2; i++ ) {
        for ( int j=0; j<46; j++ ) {
            printf("=");
        }
        printf("\n");
    }
    printf("\nPlease Enter Any Key to Next Page...\n");
    scanf("%c", &ch);
}
void login_page() {
    int n;
    char ch;
    printf("           Patient Appointment System\n\n\n");
    printf("\n1. Sign Up\n");
    printf("\n2. Sign In\n");
    printf(" \nEnter Your Choice: \n");
    scanf("%d", &n);
    if ( n==1 ) {
        //system("clear");
        system("CLS");
        registe();
    }
    else if ( n==2) {
        login();
    }
    else {
        printf("\nInvalid Choice...\nPlease Enter Correct Number...\n");
        login();
    }
   // printf("\nPlease Enter Any Key To Next...\n");
   // scanf("%c", &ch);
}
void registe() {
    char ch;
    struct info s1;
    FILE *fp;
    fp = fopen("register_info.txt", "w");
    printf("\nEnter Your First Name: ");
    scanf("%s", s1.first_name);
    printf("\nEnter Your Last Name: ");
    scanf("%s", s1.last_name);
    printf("\nEnter A Password: ");
    scanf("%s", s1.password);
    printf("\nEnter Your User Name: ");
    scanf("%s", s1.user_name);
    scanf("%c", &ch);
    fwrite(&s1, sizeof(struct info), 1, fp);
    fclose(fp);
    printf("\n\n\nSign Up Completed.\nPlease Enter Any Key to Login...: ");
    scanf("%c", &ch);
    system("CLS");
    //system("clear");
    login();
}
void login() {
    char ch, user_name[30];
    char password[33];
    char entered_username[30];
    char entered_password[33];
    FILE *fp;
    fp = fopen("register_info.txt", "r");
    printf("\nPlease Enter Your Username... ");
    scanf("%s", user_name);
    printf("\nPlease Enter Your Password... ");
    scanf("%s", password);
    fread(&entered_username, 30, 1, fp);
    fread(&entered_password, 33, 1, fp);
    fclose(fp);
    //printf("user name  %s", entered_username);
    //printf("\npassword  %s", entered_password);
    if ( (strcmp(user_name, entered_username) && strcmp(password, entered_password))==0 ) {
        printf("Login Sucessfully...\nplease Enter Any key To Next...\n");
        scanf("%c", &ch);
        scanf("%c", &ch);
       // system("clear");
       system("CLS");
        //opening_page();
        //return;
    }
    else {
        printf("Invalid user_name or password\nPlease Enter Again>>>\n");
        login();
    }
}

void opening_page() {
    char ch;
    for (int j=0; j<2; j++ ) {
        for ( int i=0; i<46; i++ ) {
            printf(">");
        }
        printf("\n");
    }
    printf(">>>>>>>>>>>>>>>>>  Welcome To >>>>>>>>>>>>>>>>\n");
    printf(">>>>>>>>>>>>>> Appointment System >>>>>>>>>>>>>\n");
    for (int j=0; j<2; j++ ) {
        for ( int i=0; i<46; i++ ) {
            printf(">");
        }
        printf("\n");
    }
    printf("Please Enter Any Key To Next...\n");
    scanf("%c", &ch);
    scanf("%c", &ch);
    //system("clear");
    system("CLS");    
}

void choice_page() {
    printf("\n1. Add Appointment");
    printf("\n2. Update Appointment");
    printf("\n3. Delete Appointment");
    printf("\n4. View Appointment");
    //printf("\nPlease Enter Which Option You Want....");
}

void add_appointment() {
    char ch;
    struct patient_details p1;
    FILE *file;
    file = fopen("patient_info.txt", "w");
    printf("\nEnter Patient Name: ");
    scanf("%s", p1.patient_name);
    printf("\nEnter Patient Age: ");
    scanf("%s", p1.age);
    printf("\nEnter Patient Blood Group: ");
    scanf("%s", p1.blood_group);
    printf("\nEnter Patient Disease: ");
    scanf("%s", p1.disease);
    printf("\nEnter Patient Address: ");
    scanf("%s", p1.address);
    printf("\nEnter Patient Contact Number: ");
    scanf("%s", p1.mobile_number);
    fwrite(&p1, sizeof(p1), 1, file);
    fclose(file);
    //scanf("%c", &ch);
    //scanf("%c", &ch);
    //system("clear");

}

void doctor_choice() {
    int n;
    char ch;
    char ap[]="1>> Dr. Md Apon";
    char on[]="    MBBS, FCPS(Medicine)";
    printf("%s\n", ap);
    printf("%s\n\n", on);

    char ma[]="2>> Dr. Maliha Jaman";
    char ja[]="    MBBS, FCPS(Gastrology)";
    printf("%s\n", ma);
    printf("%s\n\n", ja);

    char apu[]="3>> Dr. Apurba Biswas Shykat";
    char bis[]="    MBBS, FCPS(Sergery)"; 
    printf("%s\n", apu);
    printf("%s\n\n", bis);

    char ab[]="4>> Dr. Abdus Sadik";
    char sad[]="    MBBS, FCPS(Medicine)";
    printf("%s\n", ab);
    printf("%s\n\n", sad);
    printf("\nPlease Enter Your Requared Doctor code...");
    scanf("%c", &ch);
    scanf("%d", &n);
    FILE *fp;
    fp = fopen("patient_info.txt" , "a");
    if ( n==1 ) {
        fputs(ap,fp);
        fputs(on, fp);
    }
    else if ( n==2 ) {
        fputs(ma,fp);
        fputs(ja, fp);
    }
    else if ( n==3 ) {
        fputs(apu, fp);
        fputs(bis, fp);
    }
    else if ( n==4 ) {
        fputs(ab, fp);
        fputs(sad, fp);
    }
    fclose(fp);
    printf("\nTo Select Schedule\nPlease Enter Any Key...\n");
    scanf("%c", &ch);
    scanf("%c", &ch);
    doctor_schedule();

    //return n;
}

void doctor_schedule() {
    int t;
    char ch;
    printf("1>> 10.00 AM\n\n2>> 12.00 PM\n\n3>> 2.00 PM\n\n4>> 4.00 PM\n\n5>> 7.00PM\n");
    printf("\nEnter Your Schedule Time...");
    scanf("%c", &ch);
    scanf("%d", &t);
    FILE *fp;
    fp =fopen("patient_info.txt","a");
    if ( t==1 ) {
        fputs("10.00 AM", fp);
    }
    else if ( t==2 ) {
        fputs("12.00 PM", fp);
    }
    else if ( t==3 ) {
        fputs("2.00 PM", fp);
    }
    else if ( t==4 ) {
        fputs("4.00 PM", fp);
    }
    else if ( t==1 ) {
        fputs("7.00 PM", fp);
    }
    fclose(fp);
    printf("\nTo see your Appointment Details...\nPlease Enter Any Key...\n");
    scanf("%c", &ch);
    scanf("%c", &ch);
    view_appointment();
    //if()
}

void view_appointment() {
    int count=0;
    char ch, c, app_details[400];
    FILE *fp;
    fp =fopen("patient_info.txt","r");
    //while(fread(&app_details, 30, 1, fp)!=0) {
    //    printf("%s", app_details);
    //}
    printf("\nName\tAge\tBloodGroup\tDisease\tContact Number\tDr Name\tSchedule\n");
    while ( !feof(fp)) {
        c = fgetc(fp);
        printf("%c", c);
        count++;
        if( count==29 ) {
            printf("\t");
            count=0;
        }
    }
    fclose(fp);
    scanf("%c", &ch);
    scanf("%c", &ch);

}
