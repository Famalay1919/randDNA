#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed, string bases,int n)
{
	int location=-1;
	string dnaSequence = "";
	int min=0;
	int max=bases.size()-1;
	if(bases=="")
	{  
		return "";
	 }
	
	//The seed for the random number generator
	mt19937 eng1(seed);
	uniform_int_distribution<> unifrm(min,max);
	
	
	for(int i=0;i<n;i++)
	{
		location=unifrm(eng1);
		dnaSequence += bases[location];
	}

	return dnaSequence;
}
