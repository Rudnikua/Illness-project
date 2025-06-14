#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Disease {
protected:
    string name;
    vector<string> symptoms;
    double contagiousness; // 0-1
    
public:
    Disease(string _name, vector<string> _symptoms, double _contagiousness)
         :name(_name), symptoms(_symptoms), contagiousness(_contagiousness) {}
    
    virtual string treat() const {
        return "Treating " + name + " with general treatment.";
    }
    string spread() const {
        return name + "Spreads with a contagiousness of " + to_string(contagiousness) + ".";
    }
    virtual ~Disease() {}
};

