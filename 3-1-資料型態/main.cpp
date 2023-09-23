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

  PAUSE;
  return 0;
}
