//Задание-02 на 3
#include <climits>
#include <iostream>
#include <stdlib.h>
#include <float.h>
using namespace std;
int main() 
{
	cout <<"Type\tSize\tMin\t\tMax\t\n";
	cout <<"int\t"<<sizeof(int)<<"\t"<<INT_MIN<<"\t"<<INT_MAX<<"\n"
	<<"uint\t"<<sizeof(unsigned)<<"\t"<<"0"<<"\t"<<INT_MAX<<"\n"
	<<"long\t"<<sizeof(long)<<"\t"<<LONG_MIN<<"\t"<<LONG_MAX<<"\n"
	<<"ulong\t"<<sizeof(unsigned long)<<"\t"<<"0"<<"\t"<<ULONG_MAX<<"\n"endl;
	return 0;
}