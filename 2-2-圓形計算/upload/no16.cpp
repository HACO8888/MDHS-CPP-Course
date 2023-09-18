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

#define PAUSE                                 \
    printf("Press Enter key to continue..."); \
    while (getchar() != '\n')                 \
        ;                                     \
    getchar();

int main()
{
    float half, circumference, area, volume;
    cout << RED << "請輸入圓半徑：" << NC;
    cin >> half;

    circumference = 2 * half * M_PI;
    area = M_PI * pow(half, 2);
    volume = 4 / 3 * M_PI * pow(half, 3);

    cout << GREEN << "圓周長：" << NC << circumference << endl;
    cout << BLUE << "圓面積：" << NC << area << endl;
    cout << MAGENTA << "圓體積：" << NC << volume << endl;

    PAUSE;
    return 0;
}
