#include "Diseases.h"
#include <iostream>

Disease::Disease(string _name, vector<string> _symptoms, double _contagiousness)
         :name(_name), symptoms(_symptoms), contagiousness(_contagiousness) {}

string Disease::treat() const {
    return "Treating " + name + " with general treatment.";
}

string Disease::spread() const {
    return name + "Spreads with a contagiousness of " + to_string(contagiousness) + ".";
}

Disease::~Disease() {}

Virus::Virus(string _name, vector<string> _symptoms, double _contagiousness)
         : Disease(_name, _symptoms, _contagiousness) {}

string Virus::treat() const {
    return "Treating viral infection " + name + " with antivirals.";
}

Bacteria::Bacteria(string _name, vector<string> _symptoms, double _contagiousness)
         : Disease(_name, _symptoms, _contagiousness) {}

string Bacteria::treat() const {
    return "Treating bacterial infection " + name + " with antibiotics.";
}

GeneticDisease::GeneticDisease(string _name, vector<string> _symptoms, double _contagiousness)
         : Disease(_name, _symptoms, _contagiousness) {}

string GeneticDisease::treat() const {
    return name + " requires genetic therapy or lifelong management.";
}

void Treatment(const vector <Disease*> &diseases) {
    for (const auto &disease : diseases) {
        cout<<disease->treat()<<endl;
    }
}