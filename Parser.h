#ifndef PARSER_H
#define PARSER_H

using namespace std;

class Parser
{
    public:
        Parser(string str);
        ~Parser();

        vector<double> x;
        vector<double> y;

        int get_N();
    protected:

    private:
        string filename;
        fstream f_in;
        int N;
};

#endif
