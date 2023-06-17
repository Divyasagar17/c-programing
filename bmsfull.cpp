#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
// created by sagar thakur

class bank
{
     string  name,first_name,last_name,landmark_name,city_name,house_no,
             username1,username2,seconduser1,seconduser2, distric_name,state_name,pincode,
             address,phone,email,password,dob,bank_code="10",bank_acc_no,bank_user,landmark_name2,city_name2,
             house_no2,dob2,email2,phone2,address2,pincode2,distric_name2;
     float amount;
     int age,user=1,choice,choice2,choice3,ask;
 public:
       void new_bank_acc();
       void deposit_money();
       void withdraw_money();
       void balance_enquery();
       void bank_acc_holder();
       void close_bank_acc();
       void update_your_acc();
       void exit();
};
   void bank::new_bank_acc()
{
       system("cls");
       cout<<"which type of acc do you want";
       cout<<"1.saving acc\n 2.current acc\n";
       cin>>ask;
       if(ask==1)
    {
        cout<<"this is saving acc";
        
        cout<<"which type of acc do you want";
        cout<<"1)single\n, 2)joint\n";
        cin>>choice;
        if(choice==1)
    {
        cout<<"this is single acc\n";
        cout<<"enter your name\n";
        cout<<"enter your first_name\n";
        cin>>first_name;
        cout<<"enter youe last_name\n";
        cin>>last_name;
        cout<<" your name is "<<first_name+last_name<<endl;
        cout<<"enter your date of birth\n";
        cin>>dob;
        cout<<"enter your age\n";
        cin>>age;
        cout<<"enter your address\n";
        cin>>address;
        cout<<"enter your email\n";
        cin>>email;
        cout<<"enter your phone\n";
        cin>>phone;
        cout<<"enter your password for login\n";
        cin>>password;
        cout<<"enter your amount\n";
        cin>>amount;
        cout<<"enter your cit_name\n";
        cin>>city_name;
        cout<<"enter your landmark_name\n";
        cin>>landmark_name;
        cout<<"enter your distric_name\n";
        cin>>distric_name; 
        address=address+city_name+landmark_name+distric_name;
        int lengthofphone=phone.length();
    if(lengthofphone == 10)
    {
    }
      else
    {
        cout<<"\ninvalid phone must length of 10\n try again";
        cout<<"enter your phone";
        cin>>phone;
    }
          bank_user=to_string(user);
          bank_acc_no=bank_code+dob+bank_user;
          cout<<bank_acc_no;
          user=user+1;
     cout<<"your account is succesfully\n";
    }
    }
    if(choice==2)
    {
        cout<<"this is joint acc";
        cout<<"enter your name\n";
        cout<<"enter your first_name user1\n";
        cin>>username1;
        cout<<"enter youe last_name user1\n";
        cin>>username2;
        cout<<"your name is"<<username1+username2<<endl;
        cout<<"enter your dob\n";
        cin>>dob;
        cout<<"enter your age\n";
        cin>>age;
        cout<<"enter first user address\n";
        cin>>address;
        cout<<"enter first user email\n";
        cin>>email;
        cout<<"enter first user phone\n";
        cin>>phone;
        cout<<"enter  password for login\n";
        cin>>password;
        cout<<"enter your amount\n";
        cin>>amount;
        cout<<"enter first user city_name\n";
        cin>>city_name;
        cout<<"enter first landmark_name\n";
        cin>>landmark_name;
        cout<<"enter first user distric_name\n";
        cin>>distric_name; 
        cout<<"YOUR ADDRESS IS"<<address+""<<landmark_name+""<<city_name+""<<distric_name<<endl;
        int lengthofphone=phone.length();
      if(lengthofphone == 10)
    {
    }
      else 
    {
        cout<<"invalid phone must length of 10\n try again\n";
        cout<<"enter your phone\n";
        cin>>phone;
    }
        cout<<"enter first_name of seconduser1\n";
        cin>>seconduser1;
        cout<<"enter last_name of seconduser2\n";
        cin>>seconduser2;
        cout<<"your is name"<<seconduser1+seconduser2<<endl;
        cout<<"enter your dob\n";
        cin>>dob;
        cout<<"enter your age\n";
        cin>>age;
        cout<<"enter second user address\n";
        cin>>address2;
        cout<<"enter second user email\n";
        cin>>email2;
        cout<<"enter second user phone\n";
        cin>>phone2;
        cout<<"enter  password for login\n";
        cin>>password;
        cout<<"enter your amount\n";
        cin>>amount;
        cout<<"enter second user city_name\n";
        cin>>city_name2;
        cout<<"enter second user landmark_name\n";
        cin>>landmark_name2;
        cout<<"enter second user distric_name\n";
        cin>>distric_name2; 
        cout<<"enter second user house_no\n";
        cin>>house_no2;
        cout<<"your address is"<<house_no2+""<<distric_name2+""<<city_name2+""<<landmark_name2<<endl;

 int lengthofphone2=phone2.length();
    if(lengthofphone2 == 10)
    {
    }
      else
    {
        cout<<"invalid phone must length of 10\n try again\n";
        cout<<"enter your phone\n";
        cin>>phone2;
    }
   bank_user=to_string(user);
   bank_acc_no=bank_code+dob+dob2+bank_user;
   cout<<bank_acc_no; 
   user=user+1;
   cout<<"your account is succesfully\n";
}
    }
    void bank::deposit_money(){
        string acc_holder;
        int amount2;
        cout<<"enter acc no";
        cin>>bank_acc_no;
        cout<<"enter acc_holder";
        cin>>acc_holder;
        cout<<" how much do you want to deposit";
        cin>>amount2;
        amount=amount+amount2;
        cout<<amount;
  }
    void bank::withdraw_money(){
    int amount3;
    string acc_holder;
    cout<<"enter acc no\n";
    cin>>bank_acc_no;
    cout<<"enter acc_holder \n";
    cin>>acc_holder;
    cout<<"how much do you want to amount\n";
    cin>>amount3;
    amount=amount+amount3;
    cout<<amount;
    }
void bank::update_your_acc(){
    int update_choice;
    cout<<"what do you want to change";
    cout<<"if you press\n 1)change email\n 2)change password\n 3)change address\n 3)change phone_no\n";
    cin>>update_choice;
    switch(update_choice)
    {
        case 1:
        cout<<"enter your new email\n";
        cin>>email;
        break;
        case 2:
        cout<<"enter your update password\n";
        cin>>password;
        break;
        case 3:
        cout<<"enter your house_no\n";
        cin>>house_no;
        cout<<"enter your landmark_name\n";
        cin>>landmark_name;
        cout<<"enter your city_name";
        cin>>city_name;
        cout<<"your new address"<<house_no+""<<landmark_name+""<<city_name<<endl;
        break;
        case 4:
        cout<<"enter your phomne_no\n";
        cin>>phone;
          int lengthofphone=phone.length();
    if(lengthofphone == 10)
    {
    }
      else
    {
        cout<<"\ninvalid phone must length of 10\n try again";
        cout<<"enter your phone";
        cin>>phone;
    }
        break;
        
    }
}
int main()
{
    int ch;
    char ask;
    bank obj;
    system("cls");
    cout<<"\n                                                          ######  BANKING MANAGEMENT SYATEM  ###### \n";
    do{
        
        cout<<"                         1) new_bank_account\n";
        cout<<"2) deposit_money\n";
        cout<<"                         3) withdraw_money\n";
        cout<<"4) balance_enquiry\n";
        cout<<"                         5) bank_account_holder\n";
        cout<<"6) close_bank_account\n";
        cout<<"                         7) update_your_acc\n";
        cout<<"8) exit\n";
        cout<<"select any option from above\n";
        cin>>ch;
        switch(ch){
            case 1:"1) open account";
            obj.new_bank_acc();
            break;
            case 2:"2.deposit_money";
            obj.deposit_money();
            break;
            case 3:"3.withdraw_moneny";
            obj.withdraw_money();
            break;
            case 7:"update your bank acc\n";
            obj.update_your_acc();
            break;
            default:
            cout<<"\ninvalid input";
        }
        cout<<"\ndo you want to performe more ";
        cout<<"\n  Y)yes  \n  N)no";
        cin>>ask;
        if(ask=='N'|| ask=='n'){
            cout<<exit;
            break;
        }
    }
    while(ask=='Y' || ask=='y');
    return 0;
}