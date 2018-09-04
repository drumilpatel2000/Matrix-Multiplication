#include<iostream>
using namespace std;
const int N=5;
void cofactor(int mat[N][N],int temp[N][N],int a,int b,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp[i][j]=mat[(i+1+a)%N][(j+1+b)%N];
		}
	}
}
int det(int mat[N][N],int n)
{
	int d=0;
	if(n==1)
	return mat[0][0];
	
	int temp[N][N];
	int sign = 1;
	for(int i=0;i<n;i++)
	{
		cofactor(mat,temp,0,i,n);
		d+=sign*mat[0][i]*det(temp,n-1);
		sign=-sign;
	}
	return d;
}
int main()
{
	int a[N][N]={1};
	cout<<"Determinant is "<<det(a,N);
}
