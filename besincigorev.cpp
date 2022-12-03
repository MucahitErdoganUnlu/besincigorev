#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>

void printMatrix(std::vector<std::vector<std::string>> aMatrix){
	
	for(std::vector<std::vector<std::string>>::iterator it = aMatrix.begin(); it != aMatrix.end(); it++){		
		for(std::vector<std::string>::iterator it2 = it->begin(); it2 != it->end(); it2++){
			std::cout << *it2 << " ";
		}
//		std::cout << "\n";
	}
}

void printVector(std::vector<std::string> aMatrix){
	
	for(std::vector<std::string>::iterator it = aMatrix.begin(); it != aMatrix.end(); it++){		
		std::cout << *it << "\n";
		
	}
}

//this function needs its file's lines to have space at the end of the lines
std::vector<std::vector<std::string>> createMatrix(int m, int n, std::ifstream &aFile){
	std::vector<std::vector<std::string>> aMatrix;
	std::vector<std::string> aVector;
	std::string row;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			std::getline(aFile, row, ' ');
			aVector.push_back(row);
		}
		aMatrix.push_back(aVector);
		aVector.clear();
	}
	return aMatrix;
}

std::vector<std::string> createVector(int m, std::ifstream &file){
	std::vector<std::string> bVector;
	std::string row;
	for(int i=0; i < m; i++){
		std::getline(file, row);
		bVector.push_back(row);
	}
	return bVector;
}




int main(){
	
	std::ifstream bFile("b.txt");
	std::string line;
	int size = 0;
	while(std::getline(bFile, line)){
		size++;
	}
	
	bFile.clear();
	bFile.seekg(0, std::ios::beg);
	printVector(createVector(size, bFile));
		
	std::ifstream aFile("A.txt");
	printMatrix(createMatrix(size, size, aFile));
	
	
}
