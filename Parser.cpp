#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "Parser.h"

using namespace std;

Parser(string s)
{
    filename = s;
    f_in.open(filename);
    string str,a,b;
    getline(f_in,str,'\n');
    N = stoi(str);
    for(int i=0;i<N;i++){
        getline(f_in,a,' ');
        getline(f_in,b,'\n');
        x.push_back(stod(a));
        y.push_back(stod(b));
    }
}

~Parser()
{
    N=0;
    x.clear();
    y.clear();
    filename.clear();
    f_in.close();
}

int get_N(){
    return N;
}
