
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
for (size_t i = 0; i < N; i++)
{
	for (size_t j = 0; j < N; j++)
	{
		if ((i+j)>(N-2))
		{
			cout<<i<<","<<j<<endl;
		}
	}	
}	
}
