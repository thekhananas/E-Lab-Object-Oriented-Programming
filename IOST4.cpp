//author aaryan
#include <iostream>
using namespace std;
int main() {
    char line[100],alphabetString[100];
    int j=0,i;
    cin.getline(line, 100);
    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]!='#')
        {
            alphabetString[j++]=line[i]; 
        }
    }
    alphabetString[j]='\0';
    cout<<alphabetString;    
    return 0;
}
void func()
{
  cin.peek()=='#' ;
    cin.get();
  cin.ignore('a');
}