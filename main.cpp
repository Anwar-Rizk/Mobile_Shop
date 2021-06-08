#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#define sz(x) x.size()
#define h GetStdHandle(STD_OUTPUT_HANDLE)
using namespace std;

int i = 0;               // i -> index of SM line:69
int stupid = 0;
string dpass = "admin";

//Hierarchical  inheritance:

//Base Class
class Mobile{
public:
    string brand, model, Rcamera, Fcamera, screen,
            OS, processor, storage, ram, price, battery;
    int id;

public:
    void print();
};

//Derived Classes
class Samsung :public Mobile{
public:

    void SetData();
}S;
class Oppo :public Mobile{
public:

    void SetData();
}O;
class Apple :public Mobile{
public:

    void SetData();
}A;
class Huawei :public Mobile{
public:

    void SetData();
}H;
class Nokia :public Mobile{
public:

    void Setdata();
}N;
class Infinix :public Mobile{
public:

    void Setdata();
}I;
class Xiaomi :public Mobile{
public:

    void Setdata();
}X;

//class to save details of customers
class SelledMobiles{
public:
    int c_id, m_id, age;
    string fname, lname, gender, phone, MO_name;
}SM[20];        //SM -> selled mobiles

//declaration of functions
void project_interface();               // to show beautiful shape at starting project
void choose_mobile();                   // allow user to navigate between mobiles
void CollectData(int &);                // add customer details to SM[]
void statistics();                      // display all details about buyers
void setdata(){
    S.SetData();
    O.SetData();
    A.SetData();
    H.SetData();
    N.Setdata();
    I.Setdata();
    X.Setdata();
}                     // function to gather all setdata_functions from classes
void System();                          // function to management system
void search_customer_id(int);           // function to find data of a customer using customer_id
int main()
{   project_interface();
    setdata();

    Main:
    SetConsoleTextAttribute(h, 10);
    cout << "\t\t\t\t\t+----------------------+\n\t\t\t\t\t|       Main Page      |\n\t\t\t\t\t+----------------------+\n";
    cout << "\t\t\t\t\t 1 -> Choose Mobile\n\t\t\t\t\t 2 -> System\n\t\t\t\t\t 0 -> Exit\n";
    cout << " \t\t\t\t\t  --> ";

    int check;                      cin >> check;

    if(check == 1)                  {system("cls"); choose_mobile();}
    else if(check == 2){
        system("cls");
        System();
    }
    else if(check == 0)              return 0;
    else                             system("cls");

    goto Main;

    return 0;
}

//  definition of set data functions
void Samsung:: SetData(){
    id = 1;
    brand = "Samsung";
    model = "Galaxy S21 Ultra";
    processor = "Samsung Exynos 2100";
    storage = "128 GB";
    ram = "12 GB";
    Rcamera = "(108 + 12 + 10) MP";
    Fcamera = "40 MP";
    screen = "6.8 inches";
    battery = "5000 mAh";
    OS = "Android 11";
    price = "1200 $";
}
void Oppo:: SetData(){
    id = 2;
    brand = "Oppo";
    model = "Reno 5 4G";
    processor = "Octa-core";
    storage = "128 GB";
    ram = "8 GB";
    Rcamera = "64 MP";
    Fcamera = "44 MP, 24mm (wide)";
    screen = "6.43 inches";
    battery = "4130 mAh";
    OS = "Android";
    price = "300 $";
}
void Apple:: SetData(){
    id = 3;
    brand = "Apple";
    model = "IPhone 11 Pro";
    processor = "hexa-core A13 Bionic";
    storage = "256 GB";
    ram = "4 GB";
    Rcamera = "Triple (3 x 12MB)";
    Fcamera = "12 MP";
    screen =  "5.8 inches";
    battery = "3046 mAh";
    OS = "IOS 13";
    price = "950 $";
}
void Huawei:: SetData(){
    id = 4;
    brand = "Huawei";
    model = "Huawei Nova 8 5G";
    processor = "Octa-core";
    storage = "128 GB";
    ram = "8 GB";
    Rcamera = "(64+8+2+2) MB";
    Fcamera = "32 MP";
    screen = "6.57 inches";
    battery = "3800 mAh";
    OS = "Android 10";
    price = "800 $";
}
void Nokia:: Setdata(){
    id = 5;
    brand = "Nokia";
    model = "Nokia 8.3";
    processor = "Qualcomm Snapdragon 765G";
    storage = "128 GB";
    ram = "8 GB";
    Rcamera = "64 MP";
    Fcamera = "24 MP";
    screen = "6.81 inches";
    battery = "4500 mAh";
    OS = "Android";
    price = "475 $";
}
void Infinix:: Setdata(){
    id = 6;
    brand = "Infinix";
    model = "Note 8";
    processor = "Octa-core";
    storage = "128 GB";
    ram = "6 GB";
    Rcamera = "64 MP";
    Fcamera = "16 MP";
    screen = "6.95 inches";
    battery = "5200 inches";
    OS = "Android";
    price = "160 $";
}
void Xiaomi:: Setdata(){
    id = 7;
    brand = "Xiaomi";
    model = "Note 8";
    processor = "Octa-core";
    storage = "256 GB";
    ram = "8 GB";
    Rcamera = "(108+13+2+2) MP";
    Fcamera = "20 MP";
    screen = "6.67 inches";
    battery = "4780 mAh";
    OS = "Android 10";
    price = "650 $";
}

// definition of print function
void Mobile:: print(){
    SetConsoleTextAttribute(h, 13);
    cout << "\t\t_________________";
    SetConsoleTextAttribute(h, 15);
    cout << brand;
    SetConsoleTextAttribute(h, 13);
    for(int i=0; i<29-sz(brand) && cout << "_"; i++); cout << "\n";
    cout << "\t\t|" << setw(46) << "|\n";

    cout << "\t\t|ID: "               << setw(16)    << "| " << id        << setw(25)               << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Model: "            << setw(13)    << "| " << model     << setw(26-sz(model))     << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Processor: "        << setw(9)     << "| " << processor << setw(26-sz(processor)) << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Storage: "          << setw(11)    << "| " << storage   << setw(26-sz(storage))   << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Ram: "              << setw(15)    << "| " << ram       << setw(26-sz(ram))       << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Battery: "          << setw(11)    << "| " << battery   << setw(26-sz(battery))   << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Rear Camera: "      << setw(7)     << "| " << Rcamera   << setw(26-sz(Rcamera))   << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Front Camera: "     << setw(6)     << "| " << Fcamera   << setw(26-sz(Fcamera))   << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Screen: "           << setw(12)    << "| " << screen    << setw(26-sz(screen))    << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Operating System: " << setw(1)     << "| " << OS        << setw(26-sz(OS))        << "|\n"
         << "\t\t|--------------------------------------------|\n"
         << "\t\t|Price: "            << setw(13)    << "| " << price     << setw(26-sz(price))     << "|\n"
         << "\t\t|____________________________________________|\n\n";

}

// definition of other functions
void project_interface(){
    SetConsoleTextAttribute(h, 13);
    cout << "                                                                                                    \n";
    cout << "                                                              .....                                 \n";
    cout << "                                      ......................... ....                                \n";
    cout << "                                      ..........................                                    \n";
    cout << "    *************              .....  ..                      ..                                    \n";
    cout << "    *MOBILE SHOP*              ...... ..                      ..                                    \n";
    cout << "    *************             ....... ..                      ..                   ...              \n";
    cout << "                              ....... .,                       ......               ....            \n";
    cout << "                             ........ .,                     .......           ....   ...           \n";
    cout << "    *************           ......... ..                    (......        ...   ...   ..           \n";
    cout << "    *Anwar  Rizk*          .........  ..                                    ...   ...   ..          \n";
    cout << "    *************         .........   ..                       ......        ..   ...   ..          \n";
    cout << "                         ............ ..                     .......         ..   ..    ..          \n";
    cout << "                         ............ ..                    (.....         . .   ..    ...          \n";
    cout << "                         ............ ..                      .   .             ...    ..           \n";
    cout << "                        ............. ..                      .......          ..    ...            \n";
    cout << "                        ............. ..          .....     (.......               ...              \n";
    cout << "                         ............ ..         .......      ..                                    \n";
    cout << "                        ............. ..          ......,     ..                                    \n";
    cout << "                       ....... ..  .  ..          ..., ...    ..                                    \n";
    cout << "                     ........... .... . ....        ..... .   ..                                    \n";
    cout << "                   .................. ............... ..........                                    \n";
    cout << "                ... . ............................... .........      ..... .  ...   ...             \n";
    cout << "             ..........   ...................... .      .................................           \n";
    cout << "           ...............  ..................           .................................          \n";
    cout << "         ...................  .........                   ................................          \n";
    cout << "           ,................... .....     ........         ................................         \n";
    cout << "              ....................        ............      ...............................         \n";
    cout << "                 ...............             ............. ................................         \n";
    cout << "                    ..........                  ...........................................         \n";
    cout << "                      .....                        .........................................        \n";
    cout << "                                                     .......................................        \n";
    cout << "                                                         ...................................        \n";
    cout << "                                                             .................................      \n";
    cout << "                                                                 ..............................     \n";
    cout << "                                                                    .........................  .    \n";
    cout << "                                                                       ................. .  . ...   \n";
    cout << "                   | Welcome To Our Mobile Shop |                         ....... ..  ............  \n";
    cout << "                          Enjoy Your Time                                        ...................\n";
    cout << "\n";
}
void choose_mobile(){
    int mob;
    char c;

    s:
    SetConsoleTextAttribute(h, 15);
    cout << "\n\t\tChoose Number Of Brand You Want To Show Its Details.....\n";
    SetConsoleTextAttribute(h, 13);
    cout << "\t\t1) Samsung\n\t\t2) Oppo\n\t\t3) Apple\n\t\t4) Huawei\n\t\t5) Nokia\n\t\t6) Infinix\n\t\t7) Xiaomi\n\t\t8) Show All\n";
    cout << "\t\tEnter your choice : ";          cin >> mob;
    switch(mob){
        case 1:
            S.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tEnter 'B' to buy it OR 'R' to choose another one\n"
                    "\t\t       OR Any key to return to main page:\n";
            cout << "\t\t--> ";                     cin >> c;
            if     (c == 'R' || c == 'r')          {system("cls"); goto s;}
            else if(c == 'B' || c == 'b')           CollectData(i);
            else                                    system("cls");
            break;

        case 2:
            O.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tEnter 'B' to buy it OR 'R' to choose another one\n"
                    "\t\t       OR Any key to return to main page:\n";
            cout << "\t\t--> ";                     cin >> c;
            if     (c == 'R' || c == 'r')          {system("cls"); goto s;}
            else if(c == 'B' || c == 'b')           CollectData(i);
            else                                    system("cls");
            break;

        case 3:
            A.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tEnter 'B' to buy it OR 'R' to choose another one\n"
                    "\t\t       OR Any key to return to main page:\n";
            cout << "\t\t--> ";                     cin >> c;
            if     (c == 'R' || c == 'r')          {system("cls"); goto s;}
            else if(c == 'B' || c == 'b')           CollectData(i);
            else                                    system("cls");
            break;

        case 4:
            H.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tEnter 'B' to buy it OR 'R' to choose another one\n"
                    "\t\t       OR Any key to return to main page:\n";
            cout << "\t\t--> ";                     cin >> c;
            if     (c == 'R' || c == 'r')          {system("cls"); goto s;}
            else if(c == 'B' || c == 'b')           CollectData(i);
            else                                    system("cls");
            break;

        case 5:
            N.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tEnter 'B' to buy it OR 'R' to choose another one\n"
                    "\t\t       OR Any key to return to main page:\n";
            cout << "\t\t--> ";                     cin >> c;
            if     (c == 'R' || c == 'r')          {system("cls"); goto s;}
            else if(c == 'B' || c == 'b')           CollectData(i);
            else                                    system("cls");
            break;

        case 6:
            I.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tEnter 'B' to buy it OR 'R' to choose another one\n"
                    "\t\t       OR Any key to return to main page:\n";
            cout << "\t\t--> ";                     cin >> c;
            if     (c == 'R' || c == 'r')          {system("cls"); goto s;}
            else if(c == 'B' || c == 'b')           CollectData(i);
            else                                    system("cls");
            break;

        case 7:
            X.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tEnter 'B' to buy it OR 'R' to choose another one\n"
                    "\t\t       OR Any key to return to main page:\n";
            cout << "\t\t--> ";                     cin >> c;
            if     (c == 'R' || c == 'r')          {system("cls"); goto s;}
            else if(c == 'B' || c == 'b')           CollectData(i);
            else                                    system("cls");
            break;

        case 8:
            S.print();   O.print();   A.print();   H.print();   N.print();   I.print();   X.print();
            SetConsoleTextAttribute(h, 7);
            cout << "\t\tDo you want to buy any ?\n"
                    "\t\tEnter 'B' if 'Yes' - Else enter any key...\n";
            cout << "\t\t--> ";                     cin >> c;
            if(c == 'B' || c == 'b')                CollectData(i);
            else                                    system("cls");
            break;

        default:
            SetConsoleTextAttribute(h, 12);
            system("cls");
            cout << "\a\n\t\tWrong Choice !!\n";
            cout << "\t\t\t     Choose Again.....\n";
            goto s;
    }
}
void CollectData(int &i){
    SetConsoleTextAttribute(h, 11);
    cout << "\t\t\tPlease complete the following information....\n\n";

    l:
    SetConsoleTextAttribute(h, 11);
    cout << "\t\t\tEnter Mobile ID : ";            cin >> SM[i].m_id;
    if(SM[i].m_id > 7){
        stupid++;
        SetConsoleTextAttribute(h, 12);
        cout << "\a\t\t\t\tinvalid ID :(\n\n";
        if(stupid >= 3) {cout << "\a\n\t\t\t\tAre You Stupid ?!\n\n"; stupid = 0;}
        goto l;
    }
    cout << "\t\t\tEnter Customer ID : ";          cin >> SM[i].c_id;
    cout << "\t\t\tEnter First Name : ";           cin >> SM[i].fname;
    cout << "\t\t\tEnter Last Name : ";            cin >> SM[i].lname;
    cout << "\t\t\tEnter Age : ";                  cin >> SM[i].age;
    cout << "\t\t\tEnter Phone Number : ";         cin >> SM[i].phone;
    cout << "\t\t\tEnter Gender : ";               cin >> SM[i].gender;
    SetConsoleTextAttribute(h, 9);
    cout << "\t\t\tAll data has been saved........\n\n";

    if     (SM[i].m_id == 1)                SM[i].MO_name = "Samsung Galaxy S21 Ultra";
    else if(SM[i].m_id == 2)                SM[i].MO_name = "Oppo Reno 5 4G";
    else if(SM[i].m_id == 3)                SM[i].MO_name = "IPhone 11 Pro";
    else if(SM[i].m_id == 4)                SM[i].MO_name = "Huawei Nova 8 5G";
    else if(SM[i].m_id == 5)                SM[i].MO_name = "Nokia 8.3";
    else if(SM[i].m_id == 6)                SM[i].MO_name = "Infinix Note 8";
    else if(SM[i].m_id == 7)                SM[i].MO_name = "Xiaomi Note 8";

    i++;
}
void statistics(){
    if(i == 0){
        SetConsoleTextAttribute(h, 12);
        cout << "\t\t________________________________\n";
        cout << "\t\t| No mobile has been sold yet !|\n";
        cout << "\t\t--------------------------------\n\n";
    }

    else{
        SetConsoleTextAttribute(h, 15);
        cout << "\n\tDetails of all selled mobiles:\n\n";
        for (int j = 0; j < i; j++) {
            SetConsoleTextAttribute(h, 7);
            cout << "\t& Customer #" << j + 1 << " Details:\n";
            SetConsoleTextAttribute(h, 9);
            cout << "\tMobile ID: "   << SM[j].m_id    << "\n"
                 << "\tMobile Name: " << SM[j].MO_name << "\n"
                 << "\t-----------\n\tCustomer ID: " << SM[j].c_id << "\n";

            cout << "\tCustomer Name: ";
            cout << (SM[j].gender.front() == 'm' ? "Mr. " : "Mrs. ");
            cout << SM[j].fname << " " << SM[j].lname << "\n"

                 << "\tCustomer Phone: "  << SM[j].phone  << "\n"
                 << "\tCustomer Age: "    << SM[j].age    << "\n"
                 << "\tCustomer Gender: " << SM[j].gender << "\n";
            SetConsoleTextAttribute(h, 15);
            cout << "\t_____________________________\n\n";
        }
    }
}
void System(){
    string user_name, pass = "";
    int ch, cust_id ,sz = sz(dpass);
    char temp;

    cout << "\t\t\t---------------\n\t\t\t|   sign in   |\n\t\t\t---------------\n";

    cout << "\t\tEnter username : ";            cin >> user_name;
    p:
    SetConsoleTextAttribute(h, 10);
    cout << "\t\tEnter Password : ";
    while(sz--){
        temp = getch();
        cout << "*";
        pass += temp;
        if(temp == '\r')      break;
    }

    SetConsoleTextAttribute(h, 13);
    if(pass == dpass)                 cout << "\n\t\t___________________________\n\t\t****** Welcome " << user_name << " ******";
    else{
        SetConsoleTextAttribute(h, 12);
        cout << "\a\n\t\tsystem> Wrong Password :(\n";
        pass = "";
        sz = sz(dpass);
        goto p;
    }

    s:
    SetConsoleTextAttribute(h, 15);
    cout << "\n\t\t1] View Statistics\n\t\t2] Search_Customer_ID\n\t\t"
            "3] Change Password\n\t\t4] Return Main\n\t\t --> ";
    cin >> ch;

    if(ch == 1){
        system("cls");
        statistics();
        goto s;
    }

    else if(ch == 2){
        system("cls");
        SetConsoleTextAttribute(h, 14);
        cout << "\t\tEnter customer ID: ";           cin >> cust_id;
        search_customer_id(cust_id);
        goto s;
    }

    else if(ch == 3){
        cp:
        SetConsoleTextAttribute(h, 6);
        cout << "\t\tEnter old Password: ";         cin >> pass;
        if(pass == dpass){
            cout << "\t\tEnter new Password: ";     cin >> dpass;
            SetConsoleTextAttribute(h, 11);
            cout << "\t\tpassword changed successfully......\n";
            goto s;
        }
        else{
            SetConsoleTextAttribute(h, 12);
            cout << "\a\t\tsystem> This password doesn't match old one :(\n";
            goto cp;
        }
    }
    else                system("cls");
}
void search_customer_id(int c_id){
    bool find;

    for(int i=0; i<20; i++){
        if(c_id == SM[i].c_id){
            SetConsoleTextAttribute(h, 96);
            cout << "\t\tCustomer ID: "     << SM[i].c_id << "\n";
            cout << "\t\tCustomer Name: ";
            cout << (SM[i].gender.front() == 'm' ? "Mr. " : "Mrs. ");
            cout << SM[i].fname << " " << SM[i].lname << "\n"
                 << "\t\tCustomer Phone: "  << SM[i].phone  << "\n"
                 << "\t\tCustomer Age: "    << SM[i].age    << "\n"
                 << "\t\tCustomer Gender: " << SM[i].gender << "\n";
            cout << "\t\t---------------------------\n";
            cout << "\t\tMobile ID: "       << SM[i].m_id    << "\n"
                 << "\t\tMobile Name: "     << SM[i].MO_name << "\n"
                 << "\t\t__________________________________\n";
            find = true;
        }
    }
    if(!find){
        SetConsoleTextAttribute(h, 12);
        cout << "\n\t\tThere is no customer has this ID :(\n";
    }
}
