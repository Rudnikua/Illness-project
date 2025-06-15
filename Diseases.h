#ifndef DISEASES_H
#define DISEASES_H

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
    Disease(string _name, vector<string> _symptoms, double _contagiousness);
    virtual string treat() const;
    string spread() const;
    virtual ~Disease();
};

class Virus : public Disease {
public:
     Virus(string _name, vector<string> _symptoms, double _contagiousness);
     string treat() const override;
};

class Bacteria : public Disease {
public:
     Bacteria(string _name, vector<string> _symptoms, double _contagiousness);
     string treat() const override;
};

class GeneticDisease : public Disease {
public:
     GeneticDisease(string _name, vector<string> _symptoms, double _contagiousness);
     string treat() const override;
};

void Treatment(const vector <Disease*> &diseases);

#endif