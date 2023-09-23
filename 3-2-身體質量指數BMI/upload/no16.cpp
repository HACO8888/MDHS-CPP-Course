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
  double height, weight;

  cout << RED << "請輸入身高（公尺）：" << NC;
  cin >> height;

  cout << BLUE << "請輸入體重（公斤）：" << NC;
  cin >> weight;

  int bmi = weight / pow((height / 100), 2);

  cout << GREEN << "身體質量指數（BMI）為：" << NC << bmi << endl;

  PAUSE;
  return 0;
}
