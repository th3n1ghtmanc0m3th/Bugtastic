#include <iostream>
#include <string>

using namespace std;

int main()
{
  int age;
  string _name;
  char last_initial;

  cout << "Hi. What is your first name? ";
  cin >> _name;
  cout << _name << ", what is the first letter of your last name? ";
  cin >> last_initial;
  cout << "Thanks, " << _name << " " << last_initial << "." << endl;
  cout << "Please also tell me how old you are: ";
  cin >> age;

  if( age < 12 )
  {
    cout << "Hey kid, how do you like school?\n";
  }
  if( age > 11 && age < 18 )
    cout << "Cool! How's highschool going?\n";
  else( age >= 18 );
  {
    cout << "Pleased to meet you!\n";
  }

  return 0;
}
