#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	ifstream fin("file.in");
	if(!fin){
		cout << "檔案無法開啟\n";
		return 1;
	}
	int i,num,temp,sum=0;
	vector<int> v1;
	fin >> num;
	for(i=0;i<num;i++){
		fin >> temp;
		v1.push_back(temp);
	}
	sort(v1.begin(),v1.end());
	reverse(v1.begin(),v1.end());
	for(i=0;i<5;i++)sum=sum+v1[i];
	cout << sum << "\n";
	return 1;
}
