#ifndef _REFLECTOR_H_
#define _REFLECTOR_H_

#include <string>
#include <vector>

#include "Constants.h"

using namespace std;

class Reflector{
    public:
        Reflector();
        Reflector(const string type);
        int reflectLetter(int pos);
        
        const string getConfig();
        
    private:
        vector<int> notches;
        string reflec_type;
};

#endif