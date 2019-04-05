#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<ctype.h>
using namespace std;

int main()
{
	int n;
	
	// Vector for Genes
	ifstream fin("gene_ind_tricl_1", ios::in);
	if(!fin)
		{	cout << "Error opening file !"; exit(0); }
	
	vector<int> gene;
	
	while(fin >> n)	// Reading gene file
		gene.push_back(n);
    fin.close();
    
	// Vector for Sample
	fin.open("samp_ind_tricl_1", ios::in);
	if(!fin)
		{	cout << "Error opening file !"; exit(0); }
	
	vector<int> samp;
	
	while(fin >> n)
		samp.push_back(n);
    fin.close();
    
    
	// Vector for Time
    fin.open("tp_ind_tricl_1", ios::in);
	if(!fin)
		{ cout << "Error opening file !"; exit(0); }
	
	vector<int> time;
	
	while(fin >> n)
		time.push_back(n);
    fin.close();
}
