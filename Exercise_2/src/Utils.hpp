#pragma once
#include "iostream"

using namespace std;

// funzione che apre i file e traduce i due vettori, uno della percentuale della somma totale e l'altro dei profitti,
// che legge la somma totale di partenza e la grandezza dei vettori

bool ImportaVettori(const string& FileInput, double& S, size_t& n, double*& w, double*& r);

string ArrayToString(const size_t& n,
                     const double* const& v);

double DotProduct(const size_t& n,
                  const double* const& v1,
                  const double* const& v2, double& V, const double& S);

bool EsportaRisultato(const string& outputFilePath,
                  const size_t& n,
                  const double* const& w,
                  const double* const& r,
                  const double& dotProduct,
                  const double& S,
                  const double& V);


