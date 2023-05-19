#include<iostream>

using namespace std;

class car 
{   public:
    int make, tot1=0,tot2=0,tot3=0;
    char model[50],regnumber[50];
    
    int price ;
    void getdata()
    {   cout<<"*********************************************************";
        cout<<"\n Enter car model  ,   price ,    regnumber \n ";
        cin>>model>>price>>regnumber;

    } 
     
};

class Taxi :public car
{
   public:
   int dist_travel,income;
   void setdata()
   {
       cout<<"\n Enter dist_travel ";
       cin>>dist_travel;
   }
   void showdata()
   {    cout<<" \n Car model"<<model;
        cout<<"\n price"<<price;
        cout<<"\n Reg Number"<<regnumber;
       cout<<"\n Make tye 1 income  "<<tot1;
       cout<<"\n Make tye 2 income  "<<tot2;
       cout<<"\n Make tye 3 income  "<<tot3;
       income=tot1+tot2+tot3;
       cout<<"\n Total income=="<<income;
    cout<<"*********************************************************";
   }
   
};
class travelcompany :public Taxi
{
    public:
    void totalincome()
    {
             cout<<"enter car make";
            cin>> make;
           if (make==1)
           {
              tot1=dist_travel*10;
           }
           if (make==2)
           {
               tot2=dist_travel*15;
           }
           if(make==3)
           {
               tot3=dist_travel*20;
           }
       
    }
};
int main(void)
{
   travelcompany tc;
  
    for(int i=0;i<3;i++)
    {
         tc.getdata();
         tc.setdata();
         tc.totalincome();
        
    }
    tc.showdata();
    return 0; 
}