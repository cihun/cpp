#include "111.h"
#include "func1.h"
int main(int argc, char* argv[]){
    cout << argc << endl;
    for(int i = 0;i < argc;i++){
        cout << argv[i] << endl;
    }
    hello_world();
    hello_world();
    return 0;
}
