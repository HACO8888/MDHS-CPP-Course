#include <iostream>
#include <cmath>

using namespace std;

#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"
#define NC "\033[0m"

#define CHECKMARK "\xE2\x9C\x94"
#define ROCKET "\xF0\x9F\x9A\x80"
#define CROSSMARK "\xE2\x9C\x98"
#define HOURGLASS "\xE2\x8C\x9B"

#define PAUSE                               \
  printf("Press Enter key to continue..."); \
  while (getchar() != '\n')                 \
    ;                                       \
  getchar();

int main()
{
  int adultCount, childCount;
  const int adultPrice = 499;
  const int childPrice = 199;

  cout << BLUE << "請輸入成人數量：" << NC;
  cin >> adultCount;

  cout << GREEN << "請輸入兒童數量：" << NC;
  cin >> childCount;

  cout << endl;

  int totalCost = adultCount * adultPrice + childCount * childPrice;

  cout << ROCKET << "成人票：" << adultCount << "張" << endl;
  cout << ROCKET << "兒童票：" << childCount << "張" << endl;
  cout << RED << "總票價為：" << NC << totalCost << "元" << endl;

  PAUSE;
  return 0;
}
