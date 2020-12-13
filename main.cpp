#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "ColorBlindTest.h"

using namespace std;

char userChoice(vector<string>);
vector<string> addColor(vector<string>);

int main()
{
  ColorBlindTest myColors;
  vector<string> list;
  char choice;
  cout << "Hello, what would you like to do?\n";
  do
  {
    choice = userChoice(list);
    if (choice == 'F'|| choice == 'f')
    {
      list = addColor(list);
      myColors.showColors(list);
    }
    if (choice == 'T' || choice == 't')
    {
      int num;
      cout << "Open colortest.png, and type in the number you see.\n";
      cin >> num;
      myColors.colorTest(num);
    }

  }while(choice != 'Q' && choice != 'q');

return 0;
}
char userChoice(vector<string>list)
{
  char choice;
  do
  {
    cout << "Options:\n";
    cout << "(T)ake a colorblind test for red-green colorblindness\n";
    cout << "(F)ind out if your colors are colorblind compatible\n";
    cout << "(Q)uit\n";
    cin >> choice;
    cin.ignore();
  }while (choice != 'T' && choice != 't' && choice != 'F' && choice != 'f' && choice != 'Q' && choice != 'q');
  return choice;
}
//vector of type string that prompts the user to enter colors. 
//if an unsuitable color is entered, the function will delete the color from the list.
vector <string> addColor(vector <string> add)
  {
  string input;
  do{
  cout << "Enter colors in lowercase, or Q to quit\n";
  getline(cin,input);
  add.push_back(input);}while (input != "Q");
  if(std::find(add.begin(), add.end(), "red") != add.end())
      {
        cout << "red is not a suitable color." << endl;
        std::remove(add.begin(), add.end(), "red"), add.end();
      }
  if(std::find(add.begin(), add.end(), "green") != add.end())
  {
    cout << "green is not a suitable color." << endl;
    std::remove(add.begin(), add.end(), "green"), add.end();
  }
  cout << endl;
  return add;
  }
//shows the list of colors, excluding unsuitable colors entered.