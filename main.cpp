#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int main() {
  int j=-1;
  int c=1;
  int d;
  while(j<0)
  {
  cout << "Enter an positive integer to find the factorial"<<endl;
  j= validateInt(j);
  system("clear");
  }
  d=j;
while(j>1)
{
c=c*j;
j=j-1;
}
  cout << d << "! is equal to " << c << endl;
  cout << "Thank you for your time." << endl;
} 