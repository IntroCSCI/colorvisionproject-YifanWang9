#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  char again;
  do
  {
  string filename;
  cout << "Enter the file you want to open:" << endl;
  getline(cin, filename);

  if(filename == "badcolorcombos.txt")
  {
    cout << "Here are some color combinations you should avoid:" << endl;
    ifstream file;
    file.open("badcolorcombos.txt",ios::in);
    if(file.is_open())
    {
      string line;
      while(getline(file,line))
      {
        cout << line << endl;
      }
    }
  }
  else 
  {
    cout << "File does not exist" << endl;
  }
  cout << endl;
  char choice;
  cout << "Enter a color choice" << endl;
  cout << "P=Pink,B=Blue,G=Green,R=Red" << endl;
  cin >> choice;

  switch(choice)
  {
  case 'P':
  {
    cout << "Pink is often confused with gray." << endl;
    break;
  }
  case 'B':
  {
    cout << "Blue is often confused with purple." << endl;
    break;
  }
  case 'G':
  {
    cout << "Green is often confused with brown." << endl;
    break;
  }
  case 'R':
  {
    cout << "Red is often confused with greenish-brown." << endl;
    break;
  }
  default:
  {
    cout << "Invalid entry." << endl;
    break;
  }
  }
cout << "Do you want to run this program again? y=yes, n=no"<< endl;
cin >> again;
cin.ignore();
  }while(again != 'n');

  
  return 0;
}
