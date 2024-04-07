#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include "Solver.h"

using namespace std;

double weight(vector<double> x,vector<double> y,int i, int j)
{
    double s=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
    return s;
}

void solve(Parser *pars, int N){
    int i,j;
    vector<int> vert;
    vector<double> x=pars->x,y=pars->y;
    for(i=0;i<N;i++)
        vert.push_back(i);
    for(i=0;i<N-1;i++)
        for(j=i+2;j<N-1;j++)
            if((weight(x,y,i,j)+weight(x,y,i+1,j+1))<(weight(x,y,i,i+1)+weight(x,y,j,j+1))){
                reverse(vert.begin()+i+1,vert.begin()+j+1);
            }
    for(i=0;i<N;i++)
        cout<<vert[i]<<endl;
    return;
}
