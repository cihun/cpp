#include "p1.h"

using namespace std;

Cow::Cow(){
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt):weight(wt){

}