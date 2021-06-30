#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
#include<ctime>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;
class team
{
  public:
  void formation();
  int display(int f);
};
void team::formation()
{
  cout<<"\n\n\t\t\t\tSelect playing Formation -"<<endl;
  cout<<"\t\t1) 4-3-3\t"<<"2) 4-4-2\t"<<"3) 4-2-2-2\t"<<"4) 3-4-3\t"<<endl;
  cout<<"\t\t5) 3-5-2\t"<<"6) 4-1-2-1-2\t"<<"7) 4-5-1\t"<<"8) 4-2-3-1\t"<<endl;
  cout<<"\t\t9) EXIT"<<endl;
}
int team::display(int f)
{
  string formation;
  cout<<"\n\n\n\n";

  if(f==1){
    formation = "[4-3-3]";
    cout<<"\t\t\t\t    [RW]---[ST]---[LW]"<<endl;
    cout<<"\t\t\t\t      |     |      | "<<endl;
    cout<<"\t\t\t\t    [CM]---[CM]---[CM]"<<endl;
    cout<<"\t\t\t\t    / \\    / \\    / \\  "<<endl;
    cout<<"\t\t\t\t[LB]---[CB]---[CB]---[RB]"<<endl;
    cout<<"\t\t\t\t          \\  /         "<<endl;
    cout<<"\t\t\t\t          [GK]"<<endl;
    }
  if(f==2){
    formation = "[4-4-2]";
    cout<<"\t\t\t\t       [ST]---[ST]"<<endl;
     cout<<"\t\t\t\t    /   |      |  \\    "<<endl;
    cout<<"\t\t\t\t[LM]---[CM]---[CM]---[RM]"<<endl;
    cout<<"\t\t\t\t  |      |      |      |    "<<endl;
    cout<<"\t\t\t\t[LB]---[CB]---[CB]---[RB]"<<endl;
    cout<<"\t\t\t\t          \\  /         "<<endl;
    cout<<"\t\t\t\t          [GK]"<<endl;
    }
  if(f==3){
    formation = "[4-2-2-2]";
    cout<<"\t\t\t\t       [ST]---[ST]"<<endl;
    cout<<"\t\t\t\t      /           \\"<<endl;
    cout<<"\t\t\t\t[CAM]               [CAM]"<<endl;
    cout<<"\t\t\t\t  |  \\             /  |  "<<endl;
    cout<<"\t\t\t\t  |   [CDM]---[CDM]   |  "<<endl;
    cout<<"\t\t\t\t  |  /  |       |  \\  |  "<<endl;
    cout<<"\t\t\t\t[LB]---[CB]---[CB]---[RB]"<<endl;
    cout<<"\t\t\t\t          \\  /         "<<endl;
    cout<<"\t\t\t\t          [GK]           "<<endl;
    }
  if(f==4){formation = "[3-4-3]";
  cout<<"\t\t\t\t   [LW]---[ST]---[RW]"<<endl;
  cout<<"\t\t\t\t   /      /  \\     \\      "<<endl;
  cout<<"\t\t\t\t[LM]---[CM]---[CM]---[RM]"<<endl;
  cout<<"\t\t\t\t   \\      \\   /     /    "<<endl;
  cout<<"\t\t\t\t    [CB]---[CB]---[CB]"<<endl;
  cout<<"\t\t\t\t       \\   |    /      "<<endl;
  cout<<"\t\t\t\t          [GK]"<<endl;
  }
  if(f==5){formation = "[3-5-2]";
  cout<<"\t\t\t\t       [ST]---[ST]"<<endl;
  cout<<"\t\t\t\t      /   \\  /   \\      "<<endl;
  cout<<"\t\t\t\t     /    [CAM]   \\         "<<endl;
  cout<<"\t\t\t\t    /     /   \\    \\      "<<endl;
  cout<<"\t\t\t\t[LM]---[CM]---[CM]---[RM] "<<endl;
  cout<<"\t\t\t\t   \\      \\   /     /         "<<endl;
  cout<<"\t\t\t\t   [CB]---[CB]---[CB]"<<endl;
  cout<<"\t\t\t\t       \\   |   /      "<<endl;
  cout<<"\t\t\t\t          [GK]"<<endl;
  }
  if(f==6){
    formation = "[4-1-2-1-2]";
    cout<<"\t\t\t\t       [ST]---[ST]"<<endl;
    cout<<"\t\t\t\t          \\  /       "<<endl;
    cout<<"\t\t\t\t          [CAM]"<<endl;
    cout<<"\t\t\t\t          /  \\"<<endl;
    cout<<"\t\t\t\t       [CM]   [CM]"<<endl;
    cout<<"\t\t\t\t      /   \\  /   \\    "<<endl;
    cout<<"\t\t\t\t     /    [CDM]   \\    "<<endl;
    cout<<"\t\t\t\t    /     /  \\     \\     "<<endl;
    cout<<"\t\t\t\t[LB]---[CB]---[CB]---[RB]"<<endl;
    cout<<"\t\t\t\t          \\  /         "<<endl;
    cout<<"\t\t\t\t          [GK]"<<endl;
    }
  if(f==7){
    formation = "[4-5-1]";
    cout<<"\t\t\t\t          [ST]            "<<endl;
    cout<<"\t\t\t\t         /  |  \\           "<<endl;
    cout<<"\t\t\t\t       /  [CAM]  \\         "<<endl;
    cout<<"\t\t\t\t     /    /   \\    \\"<<endl;
    cout<<"\t\t\t\t[LM]---[CM]---[CM]---[RM] "<<endl;
    cout<<"\t\t\t\t  |      |      |      |    "<<endl;
    cout<<"\t\t\t\t[LB]---[CB]---[CB]---[RB]"<<endl;
    cout<<"\t\t\t\t          \\  /         "<<endl;
    cout<<"\t\t\t\t          [GK]"<<endl;
    }
  if(f==8)
  {formation = "[4-2-3-1]";
  cout<<"\t\t\t\t          [ST]"<<endl;
  cout<<"\t\t\t\t        /   |  \\          "<<endl;
  cout<<"\t\t\t\t  [CAM]---[CAM]---[CAM] "<<endl;
  cout<<"\t\t\t\t     \\   /   \\   /      "<<endl;
  cout<<"\t\t\t\t      [CDM]---[CDM]       "<<endl;
  cout<<"\t\t\t\t    /  |       |  \\    "<<endl;
  cout<<"\t\t\t\t[LB]---[CB]---[CB]---[RB]"<<endl;
  cout<<"\t\t\t\t          \\  /         "<<endl;
  cout<<"\t\t\t\t           [GK]"<<endl;
  }
  if(f==9){return 0;}
  if(f>9 || f<1 )
  {
      cout<<"\t\t\t\t<INVALID SELECTION>"<<endl;
  }
  if(f>=1 && f<=9)
  {
      cout<<"\t\t\t\tSelected Formation-"<<formation<<endl;
  }
}



class players
{
    string position;
    int pace;
    int dribbling;
    int passing;
    int physical;
    int shooting;
    int defending;
    float rating;
public:
    int no;
    void getdata();
    void displaydata();
    string Position();
    float Rating();
};


void players::getdata()
{
    pace=rand()%100;
    dribbling=rand()%100;
    passing=rand()%100;
    physical=rand()%100;
    defending=rand()%100;
    shooting=rand()%100;
     switch(rand()%7+1)
    {
    case 1:
        position="ST";
        shooting=rand()%30+70;
        dribbling=rand()%30+70;
        rating=0.2*pace+0.22*dribbling+0.1*physical+0.15*passing+0.33*shooting+0.0*defending;
        break;
    case 2:
        position="W";
        dribbling=rand()%30+70;
        pace=rand()%30+70;
        rating=0.25*pace+0.3*dribbling+0.05*physical+0.2*passing+0.2*shooting+0.0*defending;
        break;
    case 3:
        position="AM";
        shooting=rand()%30+70;
        passing=rand()%30+70;
        rating=0.2*pace+0.2*dribbling+0.05*physical+0.25*passing+0.25*shooting+0.05*defending;
        break;
    case 4:
        position="CM";
        passing=rand()%25+75;
        rating=0.17*pace+0.1*dribbling+0.1*physical+0.35*passing+0.13*shooting+0.15*defending;
        break;
    case 5:
        position="DM";
        defending=rand()%30+70;
        physical=rand()%30+70;
        rating=0.1*pace+0.05*dribbling+0.2*physical+0.2*passing+0.1*shooting+0.35*defending;
        break;
    case 6:
        position="FB";
        pace=rand()%30+70;
        defending=rand()%30+70;
        rating=0.25*pace+0.15*dribbling+0.1*physical+0.2*passing+0.1*shooting+0.2*defending;
        break;
    case 7:
        position="CB";
        defending=rand()%30+70;
        physical=rand()%30+70;
        rating=0.1*pace+0.0*dribbling+0.25*physical+0.2*passing+0.05*shooting+0.40*defending;
        break;
    default:
        break;
    }
}

void players::displaydata()
{
  cout<<no<<"\t     "<<position<<"\t\t "<<pace<<"\t "<<dribbling<<"\t    "<<passing<<"\t \t"<<shooting<<"\t    "<<defending<<"\t       "<<physical<<"\t "<<rating<<endl;

}
string players::Position()
{
    return position;
}
float players::Rating()
{
    return rating;
}
class goalkeeper
{
    int diving;
    int kicking;
    int handling;
    int reflexes;
    int positioning;
    int physical;
    float rating;
public:
    int no;
    void getdata();
    void displaydata();
    float Rating();
};
void goalkeeper::getdata()
{
    diving=rand()%60+40;
    handling=rand()%60+40;
    reflexes=rand()%60+40;
    positioning=rand()%60+40;
    kicking=rand()%60+40;
    physical=rand()%90+10;
    rating=0.18*(diving+handling+reflexes+positioning+kicking)+0.1*(physical);
}
void goalkeeper::displaydata()
{
    cout<<no<<"\t     "<<diving<<"\t\t "<<handling<<"          "<<reflexes<<"          "<<positioning<<"\t      "<<kicking<<"      "<<physical<<"\t"<<rating<<endl;
}
float goalkeeper::Rating()
{
    return rating;
}
int main()
{
    system("color 3E");
  system("cls");
  cout << "    \t\t\t\t     ============================================================================= ";
   cout << "\n \t\t\t\t ******************|F O O T B A L L   T E A M   S I M U L A T I O N|************************" << endl;
      cout << "  \t\t\t\t    ============================================================================= "<<endl;
 cout<<"\n\n\n";
cout<<"\t\t\t\t\t                                                                  ,/)           "<<endl;
cout<<"\t\t\t\t\t                                                                  |_|          "<<endl;
cout<<"\t\t\t\t\t            _          _          _          _          _         ].[       "<<endl;
cout<<"\t\t\t\t\t           |.|        |.|        |.|        |.|        |.|      /~`-'~\\          "<<endl;
cout<<"\t\t\t\t\t           ]^[        ]^[        ]^[        ]^[        ]^[     (<|%  |>)         "<<endl;
cout<<"\t\t\t\t\t         /~`-'~\\    /~`-'~\\    /~`-'~\\    /~`-'~\\    /~`-'~\\    \\|___|/              "<<endl;
cout<<"\t\t\t\t\t        {<|%  |>}  {<|%  |>}  {<|%  |>}  {<|%  |>}  {<|%  |>}   {/   \\}             "<<endl;
cout<<"\t\t\t\t\t         \\|___|/    \\|___|/    \\|___|/    \\|___|/    \\|___|/    /__|__\\            "<<endl;
cout<<"\t\t\t\t\t         /\\   \\      /   \\      /   \\      /   \\      /   \\     | / \\ |              "<<endl;
cout<<"\t\t\t\t\t        |/>/|__\\    /__|__\\    /__|__\\    /__|__\\    /__|__\\    |/   \\|             "<<endl;
cout<<"\t\t\t\t\t        |)   \\ |    | / \\ |    | / \\ |    | / \\ |    | / \\ |    {}   {}       "<<endl;
cout<<"\t\t\t\t\t      (_,|    \\)    (/   \\)    (/   \\)    (/   \\)    (/   \\)    |)   (|     "<<endl;
cout<<"\t\t\t\t\t      / \\     (|_  _|)   (|_  _|)   (|_  _|)   (|_  _|)   (|_  _||   ||_           "<<endl;
cout<<"\t\t\t\t\t   .,.\\_/,...,|,_)(_,|,.,|,_)(_,|,.,|,_)(_,|,.,|,_)(_,|,.,|,_)(_,|.,.|,_).,.         "<<endl;


cout<<"\n\n\n\t\t\t\t\t\t\t                                          BY:-VIRAJ DANGWAL";
cout<<"\n\t\t\t\t\t\t\t                                               YASH KUMAR";
cout<<"\n\n\n\n\t\t\t PRESS ENTER TO CONTINUE...........";
getch();
  system("cls");
    srand(time(0));
    int n,m;
    cout<<"\n\n\n\t\t\tEnter number of outfield players(atleast 100) :";
    cin>>n;
    players player[n];
    Sleep(5000);
    cout<<"Player no.   Position   Pace    Dribbling   Passing\tShooting   Defending  Physical   Rating\n";
    for(int i=0;i<n;i++)
    {
        player[i].no=i+1;
        player[i].getdata();
        player[i].displaydata();
    }

    cout<<"\n\n";
    cout<<"\n\n\n\t\t\tEnter number Goalkeepers (atleast 10) ";
    cin>>m;
    Sleep(2000);
    cout<<"\nPlayer no.   Diving      Handling    Reflexes   Positioning  Kicking  Physical  Rating \n";
    goalkeeper keeper[m];
    for(int i=0;i<m;i++)
    {
        keeper[i].no=i+n+1;
        keeper[i].getdata();
        keeper[i].displaydata();
    }
    float first=-1.0,second=-1.0,third=-1.0,fourth=-1.0;
    int g1=-1,g2=-1,g3=-1,g4=-1;
    for(int i=0;i<m;i++)
    {
        if(keeper[i].Rating()>first)
        {
            fourth=third;
            third=second;
            second=first;
            first=keeper[i].Rating();
            g4=g3;
            g3=g2;
            g2=g1;
            g1=i;
        }
        else if(keeper[i].Rating()>second)
        {
            fourth=third;
            third=second;
            second=keeper[i].Rating();
            g4=g3;
            g3=g2;
            g2=i;
        }
        else if(keeper[i].Rating()>third)
        {
            fourth=third;
            third=keeper[i].Rating();
            g4=g3;
            g3=i;
        }
        else if(keeper[i].Rating()>fourth)
        {
            fourth=keeper[i].Rating();
            g4=i;
        }

    }
    getch();
    float large1=-1.0,large2=-1.0,large3=-1.0,large4=-1.0,large5=-1.0,large6=-1.0,large7=-1.0,large8=-1.0;
    int l1=-1,l2=-1,l3=-1,l4=-1,l5=-1,l6=-1,l7=-1,l8=-1;
    for (int i=0;i<n;i++)
    {
        if(player[i].Position()=="CB")
        {
            if(player[i].Rating()>large1)
           {
               large4=large3;
               large3=large2;
               large2=large1;
               large1=player[i].Rating();
               l4=l3;
               l3=l2;
               l2=l1;
               l1=i;
           }

            else if(player[i].Rating()>large2)
           {
               large4=large3;
               large3=large2;
               large2=player[i].Rating();
               l4=l3;
               l3=l2;
               l2=i;

           }
            else if(player[i].Rating()>large3)
           {
               large4=large3;
               large3=player[i].Rating();
               l4=l3;
               l3=i;
           }
            else if(player[i].Rating()>large4)
           {
            large4=player[i].Rating();
            l4=i;
           }
        }
    }
    for (int i=0;i<n;i++)
    {
        if(player[i].Position()=="FB")
        {
            if(player[i].Rating()>large5)
           {
               large8=large7;
               large7=large6;
               large6=large5;
               large5=player[i].Rating();
               l8=l7;
               l7=l6;
               l6=l5;
               l5=i;
           }

            else if(player[i].Rating()>large6)
           {
               large8=large7;
               large7=large6;
               large6=player[i].Rating();
               l8=l7;
               l7=l6;
               l6=i;

           }
            else if(player[i].Rating()>large7)
           {
               large8=large7;
               large7=player[i].Rating();
               l8=l7;
               l7=i;
           }
            else if(player[i].Rating()>large8)
           {
            large8=player[i].Rating();
            l8=i;
           }
        }
    }
    cout<<"\n\n\t\t\t\tPlayers Selected for squad(players selected :32)";
    cout<<"\n\n\nPlayer No. Position  Rating\n";
    int g[4]={g1,g2,g3,g4};
    int a[8]={l1,l2,l3,l4,l5,l6,l7,l8};
    for(int i=0;i<4;i++)
    {
        cout<<keeper[g[i]].no<<"        "<<"GK"<<"\t     "<<keeper[g[i]].Rating()<<endl;
    }

    for(int i=0;i<8;i++)
    {
        cout<<player[a[i]].no<<"         "<<player[a[i]].Position()<<"\t     "<<player[a[i]].Rating()<<endl;
    }

    float large9=-1.0,large10=-1.0,large11=-1.0,large12=-1.0,large13=-1.0,large14=-1.0,large15=-1.0,large16=-1.0;
    int l9=-1,l10=-1,l11=-1,l12=-1,l13=-1,l14=-1,l15=-1,l16=-1;
    for (int i=0;i<n;i++)
    {
        if(player[i].Position()=="CM")
        {
            if(player[i].Rating()>large9)
           {
               large12=large11;
               large11=large10;
               large10=large9;
               large9=player[i].Rating();
               l12=l11;
               l11=l10;
               l10=l9;
               l9=i;
           }

            else if(player[i].Rating()>large10)
           {
               large12=large11;
               large11=large10;
               large10=player[i].Rating();
               l12=l11;
               l11=l10;
               l10=i;

           }
            else if(player[i].Rating()>large11)
           {
               large12=large11;
               large11=player[i].Rating();
               l12=l11;
               l11=i;
           }
            else if(player[i].Rating()>large12)
           {
            large12=player[i].Rating();
            l12=i;
           }
        }
    }
     for (int i=0;i<n;i++)
    {
        if(player[i].Position()=="DM")
        {
            if(player[i].Rating()>large13)
           {
               large16=large15;
               large15=large14;
               large14=large13;
               large13=player[i].Rating();
               l16=l15;
               l15=l14;
               l14=l13;
               l13=i;
           }

            else if(player[i].Rating()>large14)
           {
               large16=large15;
               large15=large14;
               large14=player[i].Rating();
               l16=l15;
               l15=l14;
               l14=i;

           }
            else if(player[i].Rating()>large15)
           {
               large16=large15;
               large15=player[i].Rating();
               l16=l15;
               l15=i;
           }
            else if(player[i].Rating()>large16)
           {
            large16=player[i].Rating();
            l16=i;
           }
        }
    }
     float large17=-1.0,large18=-1.0,large19=-1.0,large20=-1.0;
      int l17=-1,l18=-1,l19=-1,l20=-1;
     for (int i=0;i<n;i++)
    {
        if(player[i].Position()=="AM")
        {
            if(player[i].Rating()>large17)
           {
               large20=large19;
               large19=large18;
               large18=large17;
               large17=player[i].Rating();
               l20=l19;
               l19=l18;
               l18=l17;
               l17=i;
           }

            else if(player[i].Rating()>large18)
           {
               large20=large19;
               large19=large18;
               large18=player[i].Rating();
               l20=l19;
               l19=l18;
               l18=i;

           }
            else if(player[i].Rating()>large19)
           {
               large20=large19;
               large19=player[i].Rating();
               l20=l19;
               l19=i;
           }
            else if(player[i].Rating()>large20)
           {
            large20=player[i].Rating();
            l20=i;
           }
        }
    }
    int b[12]={l9,l10,l11,l12,l13,l14,l15,l16,l17,l18,l19,l20};
        for(int i=0;i<12;i++)
    {
        cout<<player[b[i]].no<<"         "<<player[b[i]].Position()<<"\t     "<<player[b[i]].Rating()<<endl;
    }
 float large21=-1.0,large22=-1.0,large23=-1.0,large24=-1.0,large25=-1.0,large26=-1.0,large27=-1.0,large28=-1.0;
     int l21=-1,l22=-1,l23=-1,l24=-1,l25=-1,l26=-1,l27=-1,l28=-1;
    for (int i=0;i<n;i++)
    {
        if(player[i].Position()=="W")
        {
            if(player[i].Rating()>large21)
           {
               large24=large23;
               large23=large22;
               large22=large21;
               large21=player[i].Rating();
               l24=l23;
               l23=l22;
               l22=l21;
               l21=i;
           }

            else if(player[i].Rating()>large22)
           {
               large24=large23;
               large23=large22;
               large22=player[i].Rating();
               l24=l23;
               l23=l22;
               l22=i;

           }
            else if(player[i].Rating()>large23)
           {
               large24=large23;
               large23=player[i].Rating();
               l24=l23;
               l23=i;
           }
            else if(player[i].Rating()>large24)
           {
            large24=player[i].Rating();
            l24=i;
           }
        }
    }
     for (int i=0;i<n;i++)
    {
        if(player[i].Position()=="ST")
        {
            if(player[i].Rating()>large25)
           {
               large28=large27;
               large27=large26;
               large26=large25;
               large25=player[i].Rating();
               l28=l27;
               l27=l26;
               l26=l25;
               l25=i;
           }

            else if(player[i].Rating()>large26)
           {
               large28=large27;
               large27=large26;
               large26=player[i].Rating();
               l28=l27;
               l27=l26;
               l26=i;

           }
            else if(player[i].Rating()>large27)
           {
               large28=large27;
               large27=player[i].Rating();
               l28=l27;
               l27=i;
           }
            else if(player[i].Rating()>large28)
           {
            large28=player[i].Rating();
            l28=i;
           }
        }
    }
    int c[8]={l21,l22,l23,l24,l25,l26,l27,l28};
    for(int i=0;i<8;i++)
    {
        cout<<player[c[i]].no<<"         "<<player[c[i]].Position()<<"\t     "<<player[c[i]].Rating()<<endl;
    }

  int f;
  do
{
    team obj;
    obj.formation();
  cout<<"\t\t\t\tEnter your FORMATION:";
  cin>>f;
  Sleep(5000);
  obj.display(f);
  if(f==1)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l5].no<<"\t   "<<player[l5].Position()<<"       "<<player[l5].Rating()<<endl;
     cout<<player[l6].no<<"\t   "<<player[l6].Position()<<"       "<<player[l6].Rating()<<endl;
     cout<<player[l9].no<<"\t   "<<player[l9].Position()<<"       "<<player[l9].Rating()<<endl;
     cout<<player[l10].no<<"\t   "<<player[l10].Position()<<"       "<<player[l10].Rating()<<endl;
     cout<<player[l11].no<<"\t   "<<player[l11].Position()<<"       "<<player[l11].Rating()<<endl;
     cout<<player[l21].no<<"\t   "<<player[l21].Position()<<"        "<<player[l21].Rating()<<endl;
     cout<<player[l22].no<<"\t   "<<player[l22].Position()<<"        "<<player[l22].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"       "<<player[l25].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l7].no<<"\t   "<<player[l7].Position()<<"       "<<player[l7].Rating()<<endl;
     cout<<player[l12].no<<"\t   "<<player[l12].Position()<<"       "<<player[l12].Rating()<<endl;
     cout<<player[l23].no<<"\t   "<<player[l23].Position()<<"        "<<player[l23].Rating()<<endl;
     cout<<player[l24].no<<"\t   "<<player[l24].Position()<<"        "<<player[l24].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;

  }
    if(f==2)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l5].no<<"\t   "<<player[l5].Position()<<"       "<<player[l5].Rating()<<endl;
     cout<<player[l6].no<<"\t   "<<player[l6].Position()<<"       "<<player[l6].Rating()<<endl;
     cout<<player[l9].no<<"\t   "<<player[l9].Position()<<"       "<<player[l9].Rating()<<endl;
     cout<<player[l10].no<<"\t   "<<player[l10].Position()<<"       "<<player[l10].Rating()<<endl;
     cout<<player[l21].no<<"\t   "<<player[l21].Position()<<"       "<<player[l21].Rating()<<endl;
     cout<<player[l22].no<<"\t   "<<player[l22].Position()<<"        "<<player[l22].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"        "<<player[l25].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l7].no<<"\t   "<<player[l7].Position()<<"       "<<player[l7].Rating()<<endl;
     cout<<player[l11].no<<"\t   "<<player[l11].Position()<<"       "<<player[l11].Rating()<<endl;
     cout<<player[l23].no<<"\t   "<<player[l23].Position()<<"        "<<player[l23].Rating()<<endl;
     cout<<player[l24].no<<"\t   "<<player[l24].Position()<<"        "<<player[l24].Rating()<<endl;
     cout<<player[l27].no<<"\t   "<<player[l27].Position()<<"       "<<player[l27].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;
  }
    if(f==3)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l5].no<<"\t   "<<player[l5].Position()<<"       "<<player[l5].Rating()<<endl;
     cout<<player[l6].no<<"\t   "<<player[l6].Position()<<"       "<<player[l6].Rating()<<endl;
     cout<<player[l13].no<<"\t   "<<player[l13].Position()<<"       "<<player[l13].Rating()<<endl;
     cout<<player[l14].no<<"\t   "<<player[l14].Position()<<"       "<<player[l14].Rating()<<endl;
     cout<<player[l17].no<<"\t   "<<player[l17].Position()<<"       "<<player[l17].Rating()<<endl;
     cout<<player[l18].no<<"\t   "<<player[l18].Position()<<"       "<<player[l18].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"       "<<player[l25].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l7].no<<"\t   "<<player[l7].Position()<<"       "<<player[l7].Rating()<<endl;
     cout<<player[l15].no<<"\t   "<<player[l15].Position()<<"       "<<player[l15].Rating()<<endl;
     cout<<player[l16].no<<"\t   "<<player[l16].Position()<<"       "<<player[l16].Rating()<<endl;
     cout<<player[l19].no<<"\t   "<<player[l19].Position()<<"        "<<player[l19].Rating()<<endl;
     cout<<player[l27].no<<"\t   "<<player[l27].Position()<<"        "<<player[l27].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;
  }
    if(f==4)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l9].no<<"\t   "<<player[l9].Position()<<"       "<<player[l9].Rating()<<endl;
     cout<<player[l10].no<<"\t   "<<player[l10].Position()<<"       "<<player[l10].Rating()<<endl;
     cout<<player[l21].no<<"\t   "<<player[l21].Position()<<"        "<<player[l21].Rating()<<endl;
     cout<<player[l22].no<<"\t   "<<player[l22].Position()<<"        "<<player[l22].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"       "<<player[l25].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<player[l27].no<<"\t   "<<player[l27].Position()<<"       "<<player[l27].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l4].no<<"\t   "<<player[l4].Position()<<"       "<<player[l4].Rating()<<endl;
     cout<<player[l7].no<<"\t   "<<player[l7].Position()<<"       "<<player[l7].Rating()<<endl;
     cout<<player[l12].no<<"\t   "<<player[l12].Position()<<"       "<<player[l12].Rating()<<endl;
     cout<<player[l23].no<<"\t   "<<player[l23].Position()<<"        "<<player[l23].Rating()<<endl;
     cout<<player[l24].no<<"\t   "<<player[l24].Position()<<"        "<<player[l24].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;
  }
  if(f==5)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l9].no<<"\t   "<<player[l9].Position()<<"       "<<player[l9].Rating()<<endl;
     cout<<player[l10].no<<"\t   "<<player[l10].Position()<<"       "<<player[l10].Rating()<<endl;
     cout<<player[l17].no<<"\t   "<<player[l17].Position()<<"       "<<player[l17].Rating()<<endl;
     cout<<player[l21].no<<"\t   "<<player[l21].Position()<<"        "<<player[l21].Rating()<<endl;
     cout<<player[l22].no<<"\t   "<<player[l22].Position()<<"        "<<player[l22].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"       "<<player[l25].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l4].no<<"\t   "<<player[l4].Position()<<"       "<<player[l4].Rating()<<endl;
     cout<<player[l11].no<<"\t   "<<player[l11].Position()<<"       "<<player[l11].Rating()<<endl;
     cout<<player[l18].no<<"\t   "<<player[l18].Position()<<"       "<<player[l18].Rating()<<endl;
     cout<<player[l23].no<<"\t   "<<player[l23].Position()<<"        "<<player[l23].Rating()<<endl;
     cout<<player[l24].no<<"\t   "<<player[l24].Position()<<"        "<<player[l24].Rating()<<endl;
     cout<<player[l27].no<<"\t   "<<player[l27].Position()<<"       "<<player[l27].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;
  }
    if(f==6)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l5].no<<"\t   "<<player[l5].Position()<<"       "<<player[l5].Rating()<<endl;
     cout<<player[l6].no<<"\t   "<<player[l6].Position()<<"       "<<player[l6].Rating()<<endl;
     cout<<player[l13].no<<"\t   "<<player[l13].Position()<<"       "<<player[l13].Rating()<<endl;
     cout<<player[l9].no<<"\t   "<<player[l9].Position()<<"       "<<player[l9].Rating()<<endl;
     cout<<player[l10].no<<"\t   "<<player[l10].Position()<<"       "<<player[l10].Rating()<<endl;
     cout<<player[l17].no<<"\t   "<<player[l17].Position()<<"       "<<player[l17].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"       "<<player[l25].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l7].no<<"\t   "<<player[l7].Position()<<"       "<<player[l7].Rating()<<endl;
     cout<<player[l12].no<<"\t   "<<player[l12].Position()<<"       "<<player[l12].Rating()<<endl;
     cout<<player[l14].no<<"\t   "<<player[l14].Position()<<"       "<<player[l14].Rating()<<endl;
     cout<<player[l18].no<<"\t   "<<player[l18].Position()<<"       "<<player[l18].Rating()<<endl;
     cout<<player[l27].no<<"\t   "<<player[l27].Position()<<"       "<<player[l27].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;
  }
  if(f==7)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l5].no<<"\t   "<<player[l5].Position()<<"       "<<player[l5].Rating()<<endl;
     cout<<player[l6].no<<"\t   "<<player[l6].Position()<<"       "<<player[l6].Rating()<<endl;
     cout<<player[l9].no<<"\t   "<<player[l9].Position()<<"       "<<player[l9].Rating()<<endl;
     cout<<player[l10].no<<"\t   "<<player[l10].Position()<<"       "<<player[l10].Rating()<<endl;
     cout<<player[l17].no<<"\t   "<<player[l17].Position()<<"       "<<player[l17].Rating()<<endl;
     cout<<player[l21].no<<"\t   "<<player[l21].Position()<<"        "<<player[l21].Rating()<<endl;
     cout<<player[l22].no<<"\t   "<<player[l22].Position()<<"        "<<player[l22].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"       "<<player[l25].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l7].no<<"\t   "<<player[l7].Position()<<"       "<<player[l7].Rating()<<endl;
     cout<<player[l11].no<<"\t   "<<player[l11].Position()<<"       "<<player[l11].Rating()<<endl;
     cout<<player[l18].no<<"\t   "<<player[l18].Position()<<"       "<<player[l18].Rating()<<endl;
     cout<<player[l23].no<<"\t   "<<player[l23].Position()<<"        "<<player[l23].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;
  }
  if(f==8)
  {
     cout<<"Players selected for playing 11 are:\n\n"<<endl;
     cout<<"Player No. Position Rating\n";
     cout<<player[l1].no<<"\t   "<<player[l1].Position()<<"       "<<player[l1].Rating()<<endl;
     cout<<player[l2].no<<"\t   "<<player[l2].Position()<<"       "<<player[l2].Rating()<<endl;
     cout<<player[l5].no<<"\t   "<<player[l5].Position()<<"       "<<player[l5].Rating()<<endl;
     cout<<player[l6].no<<"\t   "<<player[l6].Position()<<"       "<<player[l6].Rating()<<endl;
     cout<<player[l13].no<<"\t   "<<player[l13].Position()<<"       "<<player[l13].Rating()<<endl;
     cout<<player[l14].no<<"\t   "<<player[l14].Position()<<"       "<<player[l14].Rating()<<endl;
     cout<<player[l17].no<<"\t   "<<player[l17].Position()<<"       "<<player[l17].Rating()<<endl;
     cout<<player[l18].no<<"\t   "<<player[l18].Position()<<"       "<<player[l18].Rating()<<endl;
     cout<<player[l19].no<<"\t   "<<player[l19].Position()<<"       "<<player[l19].Rating()<<endl;
     cout<<player[l25].no<<"\t   "<<player[l25].Position()<<"       "<<player[l25].Rating()<<endl;
     cout<<keeper[g1].no<<"\t   "<<"GK"<<"       "<<keeper[g1].Rating()<<endl;
     cout<<"\n\nPlayers selected for subsitutes\n\n\n";
     cout<<"Player No. Position Rating\n";
     cout<<player[l3].no<<"\t   "<<player[l3].Position()<<"       "<<player[l3].Rating()<<endl;
     cout<<player[l7].no<<"\t   "<<player[l7].Position()<<"       "<<player[l7].Rating()<<endl;
     cout<<player[l15].no<<"\t   "<<player[l15].Position()<<"       "<<player[l15].Rating()<<endl;
     cout<<player[l16].no<<"\t   "<<player[l16].Position()<<"       "<<player[l16].Rating()<<endl;
     cout<<player[l20].no<<"\t   "<<player[l20].Position()<<"       "<<player[l20].Rating()<<endl;
     cout<<player[l26].no<<"\t   "<<player[l26].Position()<<"       "<<player[l26].Rating()<<endl;
     cout<<keeper[g2].no<<"\t   "<<"GK"<<"       "<<keeper[g2].Rating()<<endl;
  }
}while(f>0&&f<9);
  cout<<"\n\n\n\t\t\t\tPRESS ENTER TO EXIT.....";
    getch();
    system("cls");
}
