 #include <iostream>
using namespace std;
class Month{
  int days;
  public:
  Month(int,int);
  bool leapYear(int);
  int getDays();
};
Month::Month(int number,int year){
  if(number<8) (number%2==1)?(days=31):(days=30);
  else (number%2==0)?(days=31):(days=30);
  if(number==2){
    if(leapYear(year)==1) days=29;
    else days=28;
  }
}
bool Month::leapYear(int year){
  if(year%400==0) return 1;
  if(year%100==0) return 0;
  if(year%4==0) return 1;
  return 0;
}
int Month::getDays(){
  return days;
}
int pillDays(int day,int month,int year,int count=0){
  Month M(month,year);
  int monthDays = M.getDays(),i;
  for(i=day;i<=monthDays;i++) if(i%2==1)count++;
  if(monthDays%2==0){
    pillDays(1,month+1,(month==12)?(year+1):(year),count);
  }
  else return count;
}
int main(){
  int i,j,n,day,month,year,date[10];
  char temp[10];
  //char date[10];
  cin>>n;
  for(i=0;i<n;i++){
    cin>>temp;
    for(j=0;j<10;j++) date[j]=temp[j]-48;
    day = date[8]*10 + date[9];
    month = date[5]*10 + date[6];
    year = date[0]*1000 + date[1]*100 + date[2]*10 + date[3];
    cout << pillDays(day,month,year) << endl;
  }
  return 0;
}
