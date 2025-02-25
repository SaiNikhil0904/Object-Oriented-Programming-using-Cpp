#include<iostream>
using namespace std;

int main()
{
	int N1,N2,N3;
	cout<<"Please Enter the First Value 'N1': ";
	cin>>N1;
	cout<<"Please Enter the Second Value 'N2': ";
	cin>>N2;
	cout<<"Please Enter the Third Value 'N3': ";
	cin>>N3;
	cout<<"The Values Before Swapping 'N1': "<<N1<< " , 'N2': "<<N2<< " & 'N3': "<<N3<<endl;
	N1=N1^N2^N3;
	N2=N1^N2^N3;
	N3=N1^N2^N3;
	N1=N1^N2^N3;
	cout << "The Result After Swapping 'N1': "<<N1<< " , 'N2': "<<N2<< " & 'N3': "<<N3<<endl;
 	return 0;
}