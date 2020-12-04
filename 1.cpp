#include<iostream>
using namespace std;

void print()
{
	cout << "inside print()"<<endl;
}

int main()
{
	cout << "inside main()"<<endl;
	print();

	cout << "inside main"<<endl;

}
