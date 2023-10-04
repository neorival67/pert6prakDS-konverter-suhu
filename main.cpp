#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
  int celcius = 100;
  double fahrenheit, reamur;

    cout << "##  Program C++ Program membuat table SUHU  ##" << endl;
    cout << "=====================================" << endl;
    cout << endl;

  cout << "Celcius Fahrenheit Reamur\n";
  do {
    fahrenheit = 1.8 * celcius + 32 ;
    reamur = 0.8 * celcius;
   cout << setw(7) << celcius << setw(9) << fahrenheit << setw(9) << reamur << endl;
    celcius--;
  } while (celcius >= 0);
  return 0;
}