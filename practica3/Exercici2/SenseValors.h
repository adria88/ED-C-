/* 
 * Fitxer: SenseValors.h
 * Autors: Adrià Martí i Josep Núñez
 */
 
#ifndef SENSEVALORS_H
#define SENSEVALORS_H
#include <string>
 
using namespace std;
 
class SenseValors {
public:
    SenseValors();
    SenseValors(const SenseValors& orig);
    virtual ~SenseValors();
    string what();
    SenseValors(string missatgeError);
private:
    string missatge;
};
 
#endif /* SENSEVALORS_H */

