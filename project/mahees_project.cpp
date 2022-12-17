#include<bits/stdc++.h>
using namespace std;
int user=0;
int use=0;
int count4=0;
class ticket
{
public:
    string name[100],adress[100],nid[100],mobile[100],password[100];
    int i=0,temp[10],opt;
    static int p;
    static int k;
    static int r;

    void shown()
    {
        cout<<"                       ***FIFA  WORLD CUP TICKET BOOKING***                  "<<endl<<endl;
        cout<<" General Instructions->"<<endl<<endl;
        cout<<"     #.Already have an account?"<<endl;
        cout<<"             ->If Not Press [1]for Signing up OR Press [2] for signing in"<<endl<<endl;
    }

    void signup()
    {
        user=1;
        cout<<"Enter name: "<<endl;
        fflush(stdin);
        getline(cin,name[i]);
        cout<<"Enter NID: "<<endl;
        getline(cin,nid[i]);
        cout<<"Enter adress: "<<endl;
        getline(cin,adress[i]);
        cout<<"Enter mobile: "<<endl;
        getline(cin,mobile[i]);
        cout<<"Enter password: "<<endl;
        getline(cin,password[i]);
        fflush(stdin);
        i++;
        cout<<" **Wow! Sign Up Complete!!!** "<<endl<<endl;
        cout<<"#.Now Press [2] for signing in"<<endl;
    }
    void signin()
    {
        use=1;
        string x,y;
        int count=0;
        cout<<"Enter mobile: "<<endl;
        cin>>x;
        cout<<"Enter password: "<<endl;
        cin>>y;
        for(int j=0; j<i; j++)
        {
            if(x==mobile[j] && y==password[j])
            {
                cout<<" ***Wow! Sign in Complete!!!*** "<<endl;
                cout<<"        Choose one->"<<endl<<endl;
                cout<<"             4.Booking Seat."<<endl;
                cout<<"             5.Booking Hotel."<<endl;
                cout<<"             6.Exit From Website."<<endl;
                cout<<" Enter choice [4,5 0r 6....] -> ";
                count++;
                break;
            }
        }
        if(count==0)
        {
            cout<<"Wrong mobile no. or password!!!"<<endl;
            cout<<"**Try Again!!**"<<endl;
            cout<<" Press [2]......."<<endl;
        }
    }

    int count1=0;
    void match()
    {
        vector<pair<int,string>>v(4);
        v[0]= {3,"Arg_vs_Aus"};
        v[1]= {4,"Bra_vs_Gha"};
        v[2]= {5,"Spa_vs_Fra"};
        v[3]= {6,"Pol_vs_Jpa"};
        cout<<" DATE"<<"       "<<"MATCH"<<endl<<endl;
        for(int i=0; i<4; i++)
        {
            cout<<v[i].first<<"th Dec"<<"     "<<v[i].second<<endl;
        }
        cout<<endl;

        int date;
        cout<<"Enter Booking Date [3,4,5,6....] : "<<endl;
        cin>>date;
        int c=3;
        temp[c]=date;
        c++;
        booking();
    }

    void booking()
    {
        cout<<"OK!! Select one [6 or 7]->"<<endl;
        cout<<"     7.Normal Ticket(4500/=)"<<endl;
        cout<<"     8.Gallary Box(6500/=)"<<endl;
        int select;
        cin>>select;
        cout<<endl;
        cout<<"***Press 1 for Buy Ticket->"<<endl;
        cout<<"***Press 0 for back->"<<endl;
        int oo;
        cin>>oo;
        if(oo==1)
        {
            cout<<"Choose One payment method->"<<endl;
            cout<<"     10. Paypal"<<endl;
            cout<<"     11. IBBL VISA CARD"<<endl;
            cout<<"     12. Mayestro Card"<<endl;
            cout<<"Enter choice [10,11 or 12...]-> "<<endl;
            cin>>opt;
            cout<<"Enter amount->"<<endl;
            int cash;
            cin>>cash;
            if(select == 7 && cash == 4500)
            {
                cout<<"Paid Successfully!!"<<endl;
                displayticket();
            }

            else if(select == 8 && cash==6500)
            {
                cout<<"Paid Successfully!!"<<endl;
                displayticket();
            }

            else if(select == 7 && cash < 4500)
            {
                cout<<"Insufficient Amount"<<endl;
                cout<<"Write the proper amount-> ";
                cin>>cash;
                //goto hi;
            }

            else if(select ==8 && cash<6500)
            {
                cout<<"Insufficient Amount"<<endl;
                cout<<"Write the proper amount-> ";
                cin>>cash;
                //goto hi;
            }
        }
        else
            shown();
//hi :
        //displayticket();
    }

    void displayticket()
    {
        vector<pair<float,string>>v1(10);
        v1[3]= {10.00,"Al_Thumama_Stadium"};
        v1[4]= {1.00,"Al_Bayt "};
        v1[5]= {10.00,"Al_Janoub_Stadium"};
        v1[6]= {1.00,"Lusail_Stadium"};
        vector<pair<int,string>>v3(20);
        v3[10]= {10," Paypal"};
        v3[11]= {11,"IBBL VISA CARD "};
        v3[12]= {12,"Mayestro Card"};
        int ss=3;
        cout<<endl;
        cout<<"************************YOUR TICKET**************************"<<endl;
        cout<<"                                                                                                      "<<endl;
        cout<<"*                    NAME: "<<name[p]<<endl;
        cout<<"*                    Ticket No: "<<k++<<endl;
        cout<<"*                    Venue: "<<v1[temp[ss]].second<<endl;
        cout<<"*                    Time: "<<v1[temp[ss]].first<<"pm"<<endl;
        cout<<"*                    Paid by "<<v3[opt].second<<endl;
        cout<<"*                                                                                                     "<<endl;
        cout<<"**********************************************************************************"<<endl<<endl;
        cout<<"        Choose one->"<<endl<<endl;
        cout<<"             4.Booking Seat."<<endl;
        cout<<"             5.Booking Hotel."<<endl;
        cout<<"             6.Exit From Website."<<endl;
        cout<<" Enter choice [4,5 0r 6....] -> ";
    }

    void hotel_booking()
    {
        vector<pair<long long,string>>v1(22);
        v1[11]= {70456,"Century Hotel Doha"};
        v1[12]= {87675,"Hampton By Hilton Doha Old Town"};
        v1[13]= {126000,"Kingsgate Hotel Doha"};
        v1[14]= {45050,"The Curve Hotel"};
        v1[15]= {46009,"Premier Inn Doha Education City"};
        v1[16]= {65490,"Sapphire Plaza Hotel"};
        v1[17]= {79087,"Hampton By Hilton Doha Old Town"};
        v1[18]= {87123,"La Villa Hotel"};
        v1[19]= {98769,"Al Liwan Suites"};
        cout<<"Choose Hotel: "<<endl<<endl;
        for(int i=11; i<=19 ; i++)
        {
            cout<<i<<". "<<v1[i].second<<" ("<<v1[i].first<<" BDT/N)"<<endl<<endl;
        }
        cout<<"Enter Hotel Number: ";
        int choose;
        cin>>choose;
        cout<<"How many room you want to BUY??"<<endl;
        cout<<"Room number: ";
        int room;
        cin>>room;
        cout<<"You Have selected ["<<room<<"] room. "<<"Please Pay ["<<v1[choose].first * room<<"] BDT"<<endl<<endl;
        cout<<"Payment Method: "<<endl<<endl;
        vector<pair<int,string>>v3(30);
        v3[22]= {22,"Paypal"};
        v3[23]= {23,"IBBL VISA CARD "};
        v3[24]= {24,"Mayestro Card"};
        for(int i=22; i<=24; i++)
        {
            cout<<i<<". "<<v3[i].second<<endl;
        }
        cout<<endl<<"Select One Method [22,23 or 24...] : ";
        int method;
        cin>>method;
payment:
        cout<<endl<<"Enter Payment amount: ";
        long long payment;
        cin>>payment;
        if(payment < v1[choose].first * room)
        {
            cout<<"Insufficient Amount!!! "<<endl<<endl;
            goto payment;
        }
        else
        {
            cout<<"Payment Successfully "<<endl<<endl;
            cout<<"Your Room Number is: ";
            for(int i=1102; i<=1101+room; i++)
            {
                if(i==1101+room)
                    cout<<i<<".";
                else
                 cout<<i<<",";
            }
            cout<<endl<<endl;
            cout<<"******** Thank You  "<<name[p]<<" *********"<<endl<<endl;
            cout<<"        Choose one->"<<endl<<endl;
            cout<<"             4.Booking Seat."<<endl;
            cout<<"             5.Booking Hotel."<<endl;
            cout<<"             6.Exit From Website."<<endl;
            cout<<" Enter choice [4,5 0r 6....] -> ";
        }
    }
};

int ticket :: p;
int ticket ::  k=5287;

int main()
{
    int n;
    ticket t,t1;
    t1.shown();
    cin>>n;
    while(1)
    {
        if(n==1)
        {
            t.signup();
        }
        else if(n!=1 && user==0)
        {
            cout<<"Sign Up First"<<endl;
            cout<<"Press [1] for sign up..........."<<endl;
        }

        else if(n!=2 && use==0)
        {
            cout<<"Sign in First"<<endl;
            cout<<"Press [2] for sign in..........."<<endl;
        }
        else  if(n==2)
        {
            t.signin();
        }
        else if(n==4)
        {
            t.match();
        }
        else if(n==5)
        {
            t.hotel_booking();
        }
        else if(n==6)
        {
            count4++;
            exit(0);
        }
        cin>>n;
    }
}