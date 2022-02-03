#ifndef CHECKER_H_INCLUDED
#define CHECKER_H_INCLUDED
#include <vector>
#include <iostream>

using namespace std;
int itc_len(string str);
int pow(int n, int i);
int string_to_int(string str);
bool is_sorted(vector<int> &v);
void s(vector<int> &v);
void rr(vector <int> &v);
void r(vector <int> &v);
void p(vector <int> &v_to, vector <int> &v_from);
void initialize_a(vector<int> &a, string nums);
vector<string> commands_to_mass(int argc, char *argv[]);
void start(vector<int> &a, vector<int> &b, vector<string> commands);
void out(vector<int> &a, vector<int> &b);



#endif // CHECKER_H_INCLUDED
