#include "checker.h"

using namespace std;


int main(int argc, char *argv[]) {
    vector<int> a;
    vector<int> b;
    string nums;
    getline(cin, nums);
    if (argc == 1) initialize_a(a, nums);
    else initialize_a(a, argv[1]);
    start(a, b, commands_to_mass(argc, argv));
    out(a, b);
    return 0;
}
