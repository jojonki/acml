#include"../include/acml/extension/notation/sci_float.hpp" // anywhere in the compile unit
#include"../include/acml/extension/boost/variant.hpp"
#include"../include/acml/extension/boost/optional.hpp"
#include"../include/acml/extension/cpp/vector.hpp"
#include"../include/acml/json.hpp"
#include<string>
#include<iostream>
using namespace std;

boost::optional<boost::variant<int, vector<double>, string> > s;

int main() {
    vector<double> a;
    a.push_back(2.718);
    a.push_back(3.14);
    a.push_back(0.618);
    s = a;
    cout << acml::json::dumps(s) << endl;    
}