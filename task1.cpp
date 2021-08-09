#include <iostream>
#include <omp.h>

using namespace std;

int main(int argc, char* argv[])
{
	int count = 0;	// Initially count will be 0
	
	#pragma omp parallel num_threads(15)		// 15 threads are being used
	{
		#pragma omp critical
		{
			int temp = count;	// local variable so changes made are not changed globally
			temp++;
			count = temp;		// storing changed data in global
		}
	}
	cout<<"Thread Count = "<<count<<endl;
	cout<<"Name = Hassan Shahzad"<<endl;
	cout<<"Roll No = 18i-0441"<<endl;
}