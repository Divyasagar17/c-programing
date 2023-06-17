#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
class hms{
         string name,firstname,lastname,state,city,landmark,pincode;
         int age,person,dob,address,house_no;
         int adhar_no;
         float pay,advance_pay;

     public:
     void coustumer_registration();
     void rooms();
     void staf();
     void food();
     void exit();
};
   void hms::coustumer_registration()
   {
    system("cls");
    cout<<"enter your firstname\n";
    cin>>firstname;
    cout<<"enter your lastname\n";
    cin>>lastname;
   // name=firstname+lastname;
    //cout<<name<<endl;
    cout<<"enter date of birth\n";
    cin>>dob;
    cout<<"enter the age\n";
    cin>>age;
    cout<<"enter your state\n";
    cin>>state;
    cout<<"enter your city\n";
    cin>>city;
    cout<<"enter your landmark\n";
    cin>>landmark;
    cout<<"enter your house_no\n";
    cin>>house_no;
    cout<<"enter your pincode\n";
    cin>>pincode;
    //address=state+city+landmark+house_no+pincode;
    cout<<"coustumer address\n"<<address<<endl;
     cout<<"enter your adhar_no\n";
        cin>>adhar_no;
          /*int lengthofadharno=adhar_no.lengthofadhar_no();
    if(lengthofadhar_no == 12)
    {
    }
      //else
    {
        cout<<"\ninvalid adharno must length of 12\n try again";
        cout<<"enter your adharno";
        cin>>adhar_no;
    }*/
    cout<<"enter how many person\n";
    cin>>person;
    }
    void hms:: rooms(){
        int ask,ask1,choice,choice1;
        cout<<"which type of rooms do you want\n";
        cout<<"1.normal rooms\n 2.expancive room";
        cin>>ask;
        if(ask==1){
            cout<<"this is normal rooms\n";
            cout<<"which type of room do you want\n";
            cout<<"1.acc\n 2.non acc\n";
            cin>>choice;
            if(choice==1)
            {
                cout<<"this is acc room\n";
                cout<<"1) types of furniture\n";
                cout<<"1)   double bed\n2)   almari\n3)   dining table\n4)   lcd\n5)   sofaset\n6)   acc\n7)   fan\n\n\n";
                cout<<"2) facility in room \n";
                cout<<"1)  24 hour eletricty\n2)  24 hour water\n3)  24 hour room service aviable\n4)  24 hour security service aviable\n5)   one landline no also avaiable\n\n";
                cout<<"the rent of room is 6000 for a week\n\n\n";
                cout<<"this is a acc room\n";
            }
             cout<<"\ndo you want to see more room";
        cout<<"\n  Y)yes  \n  N)no";
        cin>>ask;
        if(ask=='N'|| ask=='n'){
        }
    }
    while(ask=='Y' || ask=='y'){
            if(choice==2)
            {
                cout<<"this is non acc room\n";
                cout<<"types of furniture\n";
                cout<<"1)   double bed\n2)   almari\n3)   dining table\n4)   lcd\n5)   sofaset\n6)   2fan\n\n\n";
                cout<<"2) facility in room \n";
                cout<<"1)  24 hour eletricty\n2)  24 hour water\n3)  24 hour room service aviable\n4)  24 hour security service aviable\n\n";
                cout<<"the rent of room is 5000 for a week\n\n\n";
                cout<<"this is non acc room\n";

            }
            cin>>ask1;
            if(ask1==1)
            {
              cout<<"this is expensive room\n";
              cout<<"1) expensive room\n2)  very expensive room\n";
            }
            cin>>choice;
            if(choice==1);
                cout<<"this is expansive room\n";
                cout<<"the expansive room facilities like"<<"1.  \n2.  laundry bags\n3.  stocked mini-bar\n4.  freebie snacks and drinks\n5.  full-length mirror with proper lighting\n6.  Wi-Fi\n7.  comfortable sitting area\n8.  blackout shades\n9.  bathrobes10.  slippers\n11.  luxury toiletries\n12.  fluffy towels\n13.  F&B room service\n14.  comfortable bed and so on\n\n\n";
                cout<<"2) facility in room \n";
                cout<<"1)  24 hour eletricty\n2)  24 hour water\n3)  24 hour room service aviable\n4)  24 hour security service aviable\n\n";
                cout<<"the rent of room is 12000 for a week\n\n\n";
                cout<<"this is expancive room";
            }
            if(choice==2)
            {
              cout<<"this is very expansive room\n";
              cout<<"the expansive room facilities like"<<"1.  \n2.  laundry bags\n3.  stocked mini-bar\n4.  freebie snacks and drinks\n5.  full-length mirror with proper lighting\n6.  Wi-Fi\n7.  comfortable sitting area\n8.  blackout shades\n9.  bathrobes10.  slippers\n11.  luxury toiletries\n12.  fluffy towels\n13.  F&B room service\n14.  comfortable bed and so on\n15.  swimimg pool\n16.  garden area\n\n";
                cout<<"2) facility in room \n";
                cout<<"1)  24 hour eletricty\n2)  24 hour water\n3)  24 hour room service aviable\n4)  24 hour security service aviable\n\n";
                cout<<"the rent of room is 20000 for a week\n\n\n";
                cout<<"this is very expancive room";

            }
        }
    
    void hms::staf()
 {
        string press1,press2,press3,press4,press5;
        int ask;
        cout<<"there are different tyoe of staf are aviable\n";
        cout<<"1)  manager\n2)  reception\n3)  cleaner\n4)  cook\n5)  security\n";
        cin>>ask;
        if(ask==1)
   {
       cout<<"if you press1 then you will contact with manager\n";
       cin>>press1;
       cout<<"HEY THIS IS LUSIFA I AM THE MANAGER OF THIS HOTEL\n";
       cout<<"WELCOME SIR IN OUR HOTEL\n ";
       cout<<"SAY HOW CAN I HELP\n";
       cout<<"if you have any kind of problem than contact me\n";
   }   
      if(ask==2)
    {
       cout<<"if you press2 then you will contact with reception\n";
       cin>>press2;
       cout<<"HEY THIS IS ANDROSAN HOW CAN I HELP\n";
    }
     if(ask==3)
    {
      cout<<"if you will press3 then you will contact with cleaner\n";
      cin>>press3;
      cout<<"HEY THIS IS LEE I AM THE SUPERVISOUR OF THE CLEANING STAFF\n";
    }
    if(ask==4)
    {
     cout<<"if you press4 then you will contact with the cook of this hotel\n";
     cin>>press4;
     cout<<"HEY THIS IS JHON I AM THE CAFE OF THIS HOTEL WHICH TYPE OF FOOD YOU WANT SIR/MAM\n";
    }
 }
 void hms::food()
 {
     int ask;
     cout<<"HEY I AM GLAD WHICH TYPE OF FOOD DO YOU WANT SIR/MAM\n";
     cout<<"we have differnt type of food in our hotel\n";
     cout<<"1)  indian vegfood\n2)   indian nonveg food\n3)   fast food\n4)   western food\n5)  south indian food\n";
     cout<<"select one option from above\n";
     cin>>ask;
     if(ask==1)
     {
       cout<<"this is indian vegfood\n";
       cout<<"1.  kadi chaval\n2.  rajma chaval\n3.  chola chaval\n4.  mixveg\n5.  plane roti\nor\nbutter roti\n6.  nanroti\nor\nbutter nan roti\n";
     }
    if(ask==2)
    {
      cout<<"this is indian nonveg food\n";
      cout<<"1.  chikenbiryani\n2.  andacarie\n3.  butter chiken\n4.  fied fish\n";
    }
    if(ask==3)
    {
      cout<<"this is fast food\n";
      cout<<"1. momos\n2.  2.  burger\n3.  chowmin\n4.  chili patato\n5.  spring rool\n";
    }
    if(ask==4)
    {
      cout<<"this is western food";
      cout<<"1.  Chicago Deep-Dish Pizza\n2.  Steak\n3.  Barbecue Ribs\n4.  Buffalo Wings\n5.  Chili\n6.  Meatloaf\n7.  Apple Pie\n";
    }
    if(ask==5)
    {
      cout<<"this is south indian food";
      cout<<"1.  dosa\n2.  itli\n3.  vada\n4.  uttampa\n";
    }
  }
  int main()
{
    int ch;
    char ask;
    hms obj;
    system("cls");
    cout<<"\n                                                          ######  HOTEL MANAGEMENT SYSTEM  ###### \n";
    do
    {
        cout<<"1) coustumer_registration\n";
        cout<<"                                           2)rooms\n";
        cout<<"3)staf\n";                    
        cout<<"                                           4)food\n";
        cout<<"5)exit\n";
        cout<<"select any one from above\n";
        cin>>ch;
        switch(ch)
     {
         case 1:"registration for coustumer";
         obj.coustumer_registration();
         break;
         case 2:"rooms";
         obj.rooms();
         break;
         case 3:"staf";
         obj.staf();
         break;
         case 4:"food";
         obj.food();
         break;
     default:
     cout<<"\ninvalid input"; 
         
        }
     cout<<"\ndo you want to performe more ";
     cout<<"\n  Y)yes  \n  N)no";
     cin>>ask;
        if(ask =='N'|| ask =='n')
        {
            cout<<exit;
            break;
        }
    }
    while(ask=='Y' || ask=='y');
    
      return 0;
}