#include<iostream>
using namespace std;
#include<fstream>
#include<vector>

int main()
{
	char ch;
	
	// Vector for Genes
	ifstream fin("gene_ind_tricl_1", ios::in);
	if(!fin)
		{	cout << "Error opening file !"; exit(0); }
	
	vector<char> gene;
	
	while(fin >> ch)
		gene.push_back(ch);
    fin.close();
    
    
	// Vector for Sample
	fin.open("samp_ind_tricl_1", ios::in);
	if(!fin)
		{	cout << "Error opening file !"; exit(0); }
	
	vector<char> samp;
	
	while(fin >> ch)
		samp.push_back(ch);
    fin.close();
    
    
	// Vector for Time
    fin.open("tp_ind_tricl_1", ios::in);
	if(!fin)
		{ cout << "Error opening file !"; exit(0); }
	
	vector<char> time;
	
	while(fin >> ch)
		time.push_back(ch);
    fin.close();
    
    // 3D Vector for tricluster
    vector< vector< vector<char> > > tricluster;
    
	for(int k=0; k<time.size(); k++)
	{
		for(int j=0; j<samp.size(); j++)
		{
			for(int i=0; i<gene.size(); i++)
			{
						
			}
		}
	}
}
