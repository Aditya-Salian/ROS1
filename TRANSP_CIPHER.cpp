#include<iostream>
using namespace std;

int main()
{
    char mat[3][3];
    char name[9];
    cout<<"Enter name: ";
    cin>>name;
    int k=0;
    for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		    mat[i][j]=name[k];
		    k++;
		}
	}
	cout<<"Encrypted text: ";
    for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		    cout<<mat[j][i];
		}
	}
}