#include <iostream>
#include "colormod.h"

using namespace std;

Color::Modifier red(Color::FG_RED);
Color::Modifier blue(Color::FG_BLUE);
Color::Modifier yellow(Color::FG_YELLOW);
Color::Modifier def(Color::FG_DEFAULT);
int main()
{
  //Variables
  string playerName;
  string answer;
  string symbol;
  

  //Intro
  cout << "Hello, my name is color reader." << endl;
  cout << "What should I call you?" << endl;
  cin >> playerName;
  cout << "Hello " << playerName << ", nice to meet you." << endl;
  cout << "Would you like to know about what I do before you begin?(y/n)" << endl;
  cin >> answer;
  if (answer == "y"){
    cout << "Great! I can type a sentence, word or phrase of your choosing into the color you would like" << endl;
    cout << "First let me give you the intructions" << endl;
    cout << "The three primary colors are RED, BLUE, YELLOW" << endl;
    cout << red << "RED*" << endl;
    cout << blue << "BLUE%" << endl;
    cout << yellow << "YELLOW$" << endl;
    cout << def << "Each color of text has a symbol following it."<< endl;
    cout << "Use the tab called 'user' to type in a sentence to begin" << endl;
    cout << "Type in the symbol corresponding with the color you would like" << endl;
    cin >> symbol;
    if(symbol == "*"){
      cout << "*";
    }else if(symbol == "%"){
      cout << "%";
    }else{
      cout << "$";
    }
    









  }
  else{
    cout << red << "RED*" << endl;
    cout << blue << "BLUE%" << endl;
    cout << yellow << "YELLOW$" << endl;
    cout << def << "Type in the symbol corresponding with the color you would like" << endl;






  }
  return 0;
}

