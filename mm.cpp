#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"enter the matrix1"<<endl;
	int matrix1[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>matrix1[i][j];
		}
	}
	cout<<"enter the matrix 2"<<endl;
	int matrix2[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>matrix2[i][j];
		}
	}
	
	int matrix1x2[n][n];
	
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix1x2[i][j]=0;
		}
	}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					matrix1x2[i][j] +=matrix1[i][k]*matrix2[k][j];
				}
			}
		}
		int matrix2x1[n][n];
			for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix2x1[i][j]=0;
		}
	}
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					matrix2x1[i][j] += matrix2[i][k]*matrix1[k][j];
				}
			}
		}
		cout<<"matrix 1*2"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix1x2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"matrix 2*1"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix2x1[i][j]<<" ";
		}
		cout<<endl;
	}
		
	
	
}
