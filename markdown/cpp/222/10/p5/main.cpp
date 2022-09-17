#include "p5.h"

int a = 100;

static int b = 100;

int main()
{
    using namespace std;
    Stack s;
    customer x = {"123", 12.5};
    s.push(x);
    s.push({"333", 34.4});
    cout << x.fullname << ' ' << x.payment << endl;
    return 0;
}