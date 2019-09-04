#include <iostream> 

const int size=10; 
#include <string.h>
using namespace std;
class country 
{ 
char cname[size]; 
float pprc,Iprc,ratio; 
        public: 
country(){ } 
virtual void getdata() 
	{ 
		cin>>cname; 
        cin>>pprc; 
        cin>>Iprc; 
    } 
virtual void display() 
    { 
	 cout<<"Country Name "<<cname<<endl; 
     cout<<"Country Polio% "<<pprc<<endl; 
     cout<<"Country Litteracy%"<<Iprc<<endl; 
     cout<<"The Measure of Interdependency "<<float (pprc/Iprc)<<endl; 
    } 
}; 
class state:public country 
    { 
char sname[size]; 
float spprc,slprc,ratio; 
 public: 
state() {} 
void getdata() 
    { 
		country::getdata(); 
		cin>>sname>>spprc>>slprc; 
    } 
                                      void display() 
                               { 
                                            country::display(); 
                                            cout<<"State Name "<<sname<<endl; 
                                            cout<<"%Age of Polio of State "<<spprc<<endl; 
                                            cout<<"%Age of Literacy of State "<<slprc<<endl; 
                                            cout<<"The Measure of Interdependency "<<float (spprc/slprc)<<endl; 
                                } 
      }; 
int main( ) 
             {  
                         country *o1; 
                         state o2; 
                         o1= &o2; 
                         o1->getdata(); 
                         o2.display(); 
                         
             } 