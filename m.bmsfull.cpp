#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;
class bank{
  string name1,name2,name,address,age2,phone,phone2,email,email2,pasword,dob,bankcode="10",bankaccno,bankuser,housename,areaname,cityname,statename,countryname,username1,username2,seconduser1,seconduser2,dob2,housename2,areaname2,cityname2,statename2,countryname2;
  float amount_deposit;
  int age,user=1,ask,choice;
  public:
  void new_bank_acc();
  void deposit_money();
  void withdraw_money();
  void balance_enquariy();
  void bank_account_holder();
  void close_bank_account();
  void update_your_bank_account();
  void exit();  
};
void bank::new_bank_acc(){
    system("cls");
    cout<<"which type of account do you want\n";
    cout<<"1)SAVING ACCOUNT\n 2)CURRENT ACCOUNT\n";
    cin>>ask;
    if(ask==1){
        cout<<"THIS IS SAVING ACCOUNT\n";
        cout<<"which type of account do you want";
        cout<<"1)single\n 2)joint account\n";
        cin>>choice;
        if(choice==1){
            cout<<"THIS IS SINGLE ACCOUNT\n";
    cout<<"enter your first name\n";
    cin>>name1;
    cout<<"enter your last name\n";
    cin>>name2;
    cout<<"your name is==>"<<name1+" "<<name2<<endl;
    cout<<"enter your DATE OF BIRTH==>";
    cin>>dob;
    cout<<"enter your house number==>";
    cin>>housename;
    cout<<"enter your AREA NAME==>";
    cin>>areaname;
    cout<<"enter your city name==>";
    cin>>cityname;
    cout<<"enter your state name==>";
    cin>>statename;
    cout<<"enter your country name==>";
    cin>>countryname;
    cout<<"your ADDRESS IS==>"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
    cout<<"enter your valid phone no.\n";
    cin>>phone;
    int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age;
    cout<<"enter your password\n";
    cin>>pasword;
    bankuser=to_string(user);
    bankaccno=bankcode+dob+bankuser;
    user=user+1;
    cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    cout<<bankaccno;}
    if(choice==2){
        cout<<"THIS IS JOINT ACCOUNT\n";
        cout<<"enter the first name of user one\n";
        cin>>username1;
        cout<<"enter the last name of user one\n";
        cin>>username2;
        cout<<"YOUR NAME IS==>"<<username1+" "<<username2<<endl;
        cout<<"enter your date of birth\n";
        cin>>dob;
        cout<<"enter first user house number==>";
        cin>>housename;
        cout<<"enter first user area name==>";
        cin>>areaname;
        cout<<"enter first user city name==>";
        cin>>cityname;
        cout<<"enter first user state name==>";
        cin>>statename;
        cout<<"enter first user country name==>";
        cin>>countryname;
        cout<<"YOUR ADDRESS IS"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
        cout<<"enter your valid phone number\n";
        cin>>phone;
        int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age;
    //cout<<"enter your password\n";
    //cin>>pasword;
   /* bankuser=to_string(user);
    bankaccno=bankcode+dob+bankuser;
    user=user+1;*/
    //cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    //cout<<bankaccno;
    cout<<"enter the first name of user second\n";
        cin>>seconduser1;
        cout<<"enter the last name of user second\n";
        cin>>seconduser2;
        cout<<"YOUR NAME IS==>"<<seconduser1+" "<<seconduser2<<endl;
        cout<<"enter your date of birth\n";
        cin>>dob2;
        cout<<"enter second user house number==>";
        cin>>housename2;
        cout<<"enter second user area name==>";
        cin>>areaname2;
        cout<<"enter second user city name==>";
        cin>>cityname2;
        cout<<"enter second user state name==>";
        cin>>statename2;
        cout<<"enter second user country name==>";
        cin>>countryname2;
        cout<<"YOUR ADDRESS IS"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
        cout<<"enter your valid phone number\n";
        cin>>phone2;
        int lengthofphone2=phone2.length();
    if(lengthofphone2==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone2;
    }
    cout<<"enter your email\n";
    cin>>email2;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age2;
    cout<<"enter your password\n";
    cin>>pasword;
     bankuser=to_string(user);
    bankaccno=bankcode+dob+dob2+bankuser;
    user=user+1;
    cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    cout<<bankaccno;
    }
    }
    }
int main(){
    int ch,x;
    bank obj;
    system("cls");
    cout<<"## <BANKING MANAGEMENT SYSTEM>\n";
    do{
        cout<<"1)new bank acc\n";
        cout<<"2)deposite money\n";
        cout<<"3)withdraw money\n";
        cout<<"4)account enquiry\n";
        cout<<"5)all bank account holder\n";
        cout<<"6)close bank account\n";
        cout<<"7)update bank account\n";
        cout<<"8)exit\n";
        cout<<"\nselect any option from above\n";
        cin>>ch;
        switch(ch){
            case 1:"open account";
            obj.new_bank_acc();
            break;
            default:
            cout<<"invalid";
        }
        cout<<"do you want to perform more y/n\n";
        cout<<"if you want to exit press n\n";
        cin>>x;
        if(x=='n'||x=='N'){
            cout<<exit;
        }
    }
    while(x=='y'||x=='Y');
    return 0;
}