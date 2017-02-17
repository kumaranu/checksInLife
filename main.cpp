#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main() {
	const int nRows, nTopo = 2;
	vector<double> distance;
	ifstream myReadfile;
	myReadfile.open("H_coordinates.txt");
	while (!myReadfile.eof())
	{
		for (unsigned int i = 0; i < distance.size(); i++) {
			myReadfile >> distance[i];
		}
	}
	return 0;
}