#include <fstream>
#include <cstring>
#define LGMAX 31
using namespace std;
ifstream fin("cuvinte.in");
ofstream fout("cuvinte.out");
int main()
{
	int n, i;
	char c[LGMAX], cmin[LGMAX], cmax[LGMAX];
	fin >> n >> c;
	strcpy(cmin, c);
	strcpy(cmax, c);
	for (i = 1; i < n; i++)
	{
		fin >> c;
		if (strcmp(c, cmin) < 0)
			strcpy(cmin, c);
		if (strcmp(c, cmax) > 0)
			strcpy(cmax, c);
	}
	fin.close();
	fout << cmin << '\n' << cmax;
	fout.close();
	return 0;
}
