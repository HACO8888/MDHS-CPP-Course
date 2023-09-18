#include <iostream>
using namespace std;

#define PAUSE                                 \
    printf("Press Enter key to continue..."); \
    while (getchar() != '\n')                 \
        ;                                     \
    getchar();

int main()
{
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Dear " << name << endl;

    PAUSE;
    return 0;
}
