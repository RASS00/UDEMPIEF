#include "string"
#include "iostream"
#include "vector"
#include "fstream"

void csvUsuarios(){
    std::ifstream fin;
    std::ofstream fout;

    fin.open("in.csv");
    fout.open("ou.csv");

    int abc = 2;
    fin >> abc;
    fout << abc;

    

    fin.close();
    fout.close();
}

void csvTransacciones(){
    
}

