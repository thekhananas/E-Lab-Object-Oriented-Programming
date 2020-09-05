#include <iostream>
#include <string.h>

using namespace std;

class Student{
  public:
  void Identity(int id,char name[100]);
  void Identity(char name[100],int id);
  void Identity(char name[100],char id[100]){
    char temp[100];
    if(isdigit(name[0])) { 
      strcpy(temp,name);
      strcpy(name,id);
      strcpy(id,temp);
    }
    cout<<name<<" "<<id<<endl;
  }
};

int main() {
  Student s1;
  char name[100],id[100];
  cin>>name;
  cin>>id;
  s1.Identity(name,id);
  cin>>name;
  cin>>id;
  s1.Identity(name,id);
}
