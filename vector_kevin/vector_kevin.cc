#include <iostream>
#include <vector>
using namespace std;

void get_last(){
	vector<int>	vec;
	vec.push_back(10);
	vec.push_back(120);
	int element = vec.back();
	cout<<element<<endl;
}

void capacity_f(){
	vector<int>	vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	cout<<vec.size()<<endl;
	cout<<vec.capacity()<<endl;
}

void swap_f(){
	vector<int>	vec;
	for(int i=0;i<5;i++){
		vec.push_back(i);
	}
	//vec.swap(vector<int>());
	cout<<"vec.size(): "<<vec.size()<<"  vec.capacity(): "<<vec.capacity()<<endl;
	vector<int>().swap(vec);
	cout<<"after swap: "<<endl;
	cout<<"vec.size(): "<<vec.size()<<"  vec.capacity(): "<<vec.capacity()<<endl;
}

void copy_construction(){
	vector<int>	vec;
	for(int i=0;i<3;i++){
		vec.push_back(i);
	}
	vector<int> vec0(vec);
	cout<<vec0[0]<<endl;
		
}

void copy_consf(){
	vector<string>	vec("kevin");
	for(vector<string>::iterator it=vec.begin();it!=vec.end();it++){
		cout<<vec[i]<<endl;
	}
}

int main(){

	//get_last();	
	//capacity_f();
	//swap_f();
	//copy_construction();
	copy_consf();
	return 0;

}
