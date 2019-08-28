#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void vector_test1(){
	vector<int>	vec;
	vec.push_back(10);
	vec.push_back(0);
	vec.push_back(5);
	sort(vec.begin(), vec.end());
	for(vector<int>::iterator it =vec.begin(); it!=vec.end(); it++){
		cout<<*it<<" "<<ends;		
	}
	cout<<"the size of vector: "<<vec.size()<<endl;
	vec.erase(find(vec.begin(), vec.end(), 0));
	cout<<"the size of vector: "<<vec.size()<<endl;
}

int main(){
	vector_test1();
	return 0;	
}
