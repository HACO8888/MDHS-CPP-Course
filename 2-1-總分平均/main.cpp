#include <iostream>
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
    int ch, en, math, total;
    float avarage;
    cout << RED << "請輸入國文成積：" << NC;
    cin >> ch;
    cout << GREEN << "請輸入英文成積：" << NC;
    cin >> en;
    cout << BLUE << "請輸入數學成積：" << NC;
    cin >> math;

    total = ch + en + math;
    avarage = total / 3.0;
    cout << WHITE << "您的總分為：" << NC << total << endl;
    cout << MAGENTA << "您的總分為：" << NC << avarage << endl;

    PAUSE;
    return 0;
}
