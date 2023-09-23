#include <iostream>
#include <iomanip>

using namespace std;

#define PAUSE                               \
  printf("Press Enter key to continue..."); \
  while (getchar() != '\n')                 \
    ;                                       \
  getchar();

int main()
{
  struct DataType
  {
    string name;
    size_t size;
  };

  DataType dataTypes[] = {
      {"char", sizeof(char)},
      {"bool", sizeof(bool)},
      {"short", sizeof(short)},
      {"int", sizeof(int)},
      {"long", sizeof(long)},
      {"unsigned short", sizeof(unsigned short)},
      {"unsigned int", sizeof(unsigned int)},
      {"unsigned long", sizeof(unsigned long)},
      {"float", sizeof(float)},
      {"double", sizeof(double)}};

  int numDataTypes = sizeof(dataTypes) / sizeof(dataTypes[0]);

  for (int i = 0; i < numDataTypes; i++)
  {
    cout << setw(16) << left << dataTypes[i].name << "佔用 " << dataTypes[i].size << " Byte" << endl;
  }

  cout << endl;

  char a = 127;
  cout << "a = " << (int)a << endl;
  a++;
  cout << setw(14) << "加一變成 " << (int)a << endl;

  cout << endl;

  short b = 32767;
  cout << "b = " << b << endl;
  b++;
  cout << setw(14) << "加一變成 " << b << endl;

  cout << endl;

  int c = 2147483647;
  cout << "c = " << c << endl;
  c++;
  cout << setw(14) << "加一變成 " << c << endl;

  PAUSE;
  return 0;
}
