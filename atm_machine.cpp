#include <iostream>
using namespace std;

// Deklarimi i funksioneve
bool verifyPin();
void displayMenu();
void checkBalance();
void deposit();
void withdraw();

double balance;

int main()
{
  cout << "=== Mire se vini ne ATM ===" << endl;
  balance = 0;

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
bool verifyPin()
{
  int pin;
  int correctPin = 1234;
  int attempts = 3;

  while(attempts > 0)
  {
    cout<<"Vendosni PIN-in:";
    cin>>pin;

    if(pin == correctPin)
    {
      cout<<"PIN i saktë!"<<endl;
      return true;
    }
    else
    {
      attempts--;
      cout<<"PIN i gabuar! Tentativa të mbetura:" <<attempts <<endl;
    }
  }
  return false;
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

void checkBalance() {
    cout << endl;
    cout << "------------------------------" << endl;
    cout << "        BALANCE E LLOGARISE     " << endl;
    cout << "------------------------------" << endl;
    cout << endl;
    cout << "  Balance juaj aktuale: " << balance << " Leke" << endl;
    cout << endl;
    cout << "------------------------------" << endl;
}

void deposit() {
    double amount;  

    cout << endl;
    cout << "------------------------------" << endl;
    cout << "       DEPOZITIM PARASH       " << endl;
    cout << "------------------------------" << endl;
    cout << endl;

    cout << "Balance aktuale: " << balance << " Leke" << endl;
    cout << endl;

    cout << "Vendosni shumen per depozitim: ";
    cin >> amount;
    cout << endl;

    if (amount > 0) {
        balance = balance + amount;

        cout << "Depozitimi u krye me sukses!" << endl;
        cout << endl;
        cout << "Shuma e depozituar: " << amount << " Leke" << endl;
        cout << "Balance e re: " << balance << " Leke" << endl;
    }
    else {
        cout << "GABIM: Shuma duhet te jete me e madhe se 0!" << endl;
        cout << "Depozitimi nuk u krye." << endl;
    }

    cout << endl;
    cout << "------------------------------" << endl;
}