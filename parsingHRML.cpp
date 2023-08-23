#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0;
    int q = 0;
    string s;
    cin >> n;
    cin >> q;
    getline(cin, s);
    vector<string> lines;
    vector<string> queries;
    // tomar los datos, las lineas de codigo y las lineas de las queries
    for (int i = 0; i < n; i++){
        getline(cin, s);
        lines.push_back(s);
    }
    for (int i = 0; i < q; i++){
        getline(cin, s);
        queries.push_back(s);
    }
    //declaracion de un hash map para guardar cada una de las etiquetas
    map<string, map<string, string>> structure;
    //leer el documento y reconocer las etiquetas de apertura y cerrado
    //guardar las llaves de cada una de las etiquetas
    string line;
    for(int i = 0; i < n; i++){
        line = lines[i];
        if (line[0] == '<' && line[1] != '/' && line[line.length()] == '>'){
            cout << "Opening tag" << endl;
        }else {
            cout << "Closing tag" << endl;
        }
    }
    return 0;
}
