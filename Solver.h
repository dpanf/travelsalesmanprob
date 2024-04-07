#ifndef SOLVER_H
#define SOLVER_H

using namespace std;

class Solver
{
    public:
        void solve(Parser *pars, int N);
        double weight(vector<double> x,vector<double> y,int i, int j);
    protected:

    private:
        Parser* pars;
};

#endif
