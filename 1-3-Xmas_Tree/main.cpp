#include <iostream>
using namespace std;

#define PAUSE                                 \
    printf("Press Enter key to continue..."); \
    while (getchar() != '\n')                 \
        ;                                     \
    getchar();

int main()
{
    cout << "　　　　　　　　 ︿★︿" << endl;
    cout << "　　　　　　　 ︿★︿★︿" << endl;
    cout << "　　　　　　 ︿★︿︿︿★︿" << endl;
    cout << "　　　　　 ︿★︿︿︿︿︿★︿" << endl;
    cout << "　　　　 ︿★︿︿︿︿︿︿︿★︿" << endl;
    cout << "　　　 ︿★︿︿︿︿︿︿︿︿︿★︿" << endl;
    cout << "　　 ︿★︿︿︿︿︿︿︿︿︿︿︿★︿" << endl;
    cout << "　 ︿★︿︿︿︿︿︿︿︿︿︿︿︿︿★︿" << endl;
    cout << "　︿★︿︿︿★︿︿＊︿︿︿★︿︿＊︿★︿" << endl;
    cout << "　　　　　　　　 │　　│" << endl;
    cout << "　　　　　　　　 │　　│" << endl;
    cout << "　　　　　　　　 │　　│" << endl;
    cout << "★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★" << endl;

    PAUSE;
    return 0;
}
