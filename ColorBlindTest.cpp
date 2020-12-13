#include "ColorBlindTest.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

using std::string;
using std::vector;

void ColorBlindTest::showColors(vector<string>list)
{
  if (list.empty() == true)
  {
    cout << "No colors added" << endl;
  }
  else
  {
    cout << "Suitable colors:" << endl;
    for(int i = 0; i < list.size(); i++)
    {
      cout << list[i] << endl;
    }
  }
  cout << endl;
}
//colorblind test function
void ColorBlindTest::colorTest(int &a)
{
  if (a == 74)
  {
    cout << "Correct. You are not colorblind\n";
  }
  else
  {
    cout << "You may be colorblind.\n";
  }
}