#include <iostream>
#include "Utils.hpp"
#include <iomanip>

using namespace std;

int main()
{
    string inputFileName = "./data.csv";
    double S = 0;
    size_t n = 0;
    double* w = nullptr;
    double* r = nullptr;
    double V = 0;

    if (!ImportaVettori(inputFileName, S, n, w, r))
    {
        cerr<< "Importazione dei vettori fallita" << endl;
        return -1;
    }
    else
        cout << "Valore di S : " << fixed << setprecision(2) << S << "; valore di n : " << n << "; w = " << ArrayToString(n, w) << "; r = " << ArrayToString(n, r) << endl;

    double dotProduct = DotProduct(n, w, r, V, S);
    cout << fixed << setprecision(4) << "dot product : " << dotProduct << "; V = " << setprecision(2) << V << endl;

    string outputFileName = "./result.txt";
    if (!EsportaRisultato(outputFileName, n, w, r, dotProduct, S, V))
    {
        cerr << "Esportazione dei risultati fallita" << endl;
        return -1;
    }
    else
        cout << "Esportazione dei risultati avvenuta con successo" << endl;

    delete[] w;
    delete[] r;

    return 0;
}



