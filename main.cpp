#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "Parser.h"
#include "Solver.h"

using namespace std;

int main(){
    Parser pars("tsp_51_1");
    Solver s;
    s.solve(&pars,pars.get_N());
    return 0;
}
