#include <iostream>
using namespace std;

int factorial=1;

int factorialul(int n)
{
	factorial=1;
	for(int i=1;i<=(n);i++)
	{
		factorial*=i;
	}
	
	return factorial;
}

int combinari(int n,int k){
	int comb;
	comb=factorialul(n)/(factorialul((n-k))*factorialul(k));
	return comb;
}
int main(){
	int n,k;
	cout << "Introduceti k:" ;
	cin >> k;
	cout << "Introduceti n:";
	cin >> n;
	if((k>n) || (k<0) || (n<0) ){
		cout << "Nu se poate calcula!" << endl;}
	else{
		cout << "Combinari de n luate cate k:" << combinari(n,k);
		}
	system("pause");
	return 0;
}