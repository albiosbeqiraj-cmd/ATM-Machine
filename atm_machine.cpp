#include <iostream>
using namespace std;

// Deklarimi i funksioneve
bool verifyPin();
void displayMenu();
void checkBalance();
void deposit();
void withdraw();

int main()
{
  cout << "=== Mire se vini ne ATM ===" << endl;

  if (verifyPin())
  {
    displayMenu();
  }
  else
  {
    cout << "Llogaria u bllokua!" << endl;
  }

  cout << "Faleminderit!" << endl;
  return 0;
}

void displayMenu()
{
  int choice;

  while (true)
  {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Shiko balance" << endl;
    cout << "2. Depozitp para" << endl;
    cout << "3. Terhiq para" << endl;
    cout << "4. Dil" << endl;
    cout << "Zgjidhni: ";
    cin >> choice;

    if (choice == 1)
    {
      checkBalance();
    }
    else if (choice == 2)
    {
      deposit();
    }
    else if (choice == 3)
    {
      withdraw();
    }
    else if (choice == 4)
    {
      break;
    }
    else
    {
      cout << "Zgjedhje e gabuar!" << endl;
    }
  }
}
