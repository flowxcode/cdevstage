#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void MultiplyVectorByScalar(vector<int> &v, int k){
    int asdf = 1234;
	for_each(v.begin(), v.end(), [k](int &c){ c *= k; });
}

void printVector(vector<int> v){
	for(int i=0;i<v.size();++i)
		cout<<v[i]<<' ';
	cout<<endl<<endl;
}

int main() {

	vector<int> v = {2 , 7 , 4 , 5};
	int k = 3;
	
	cout<<"Scalar : "<<k<<endl;
	cout<<"Vector : ";
	printVector(v);
	
	MultiplyVectorByScalar(v , k);
	
	cout<<"Vector After Scaler Multiplication by "<<k<<" : ";
	printVector(v);

}

