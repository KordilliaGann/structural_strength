// Nancy
// Kori
// Michael

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

double mean(int a[], int n);
int max(int a[], int n);
int min(int a[], int n);
double variance(int a[], int n);
double standardDeviation(double var);
// Kori
int main(){
	ifstream finSteel;
	ifstream finGraphite;
	const int SIZE = 20;
	int steel[SIZE] = {0}, graphite[SIZE] = {0};
	int steelElements = 0, graphiteElements = 0;
	
	finSteel.open("data1.txt");
	finGraphite.open("data2.txt");
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	while(finSteel >> steel[steelElements]){
		steelElements++;
	}
	while(finGraphite >> graphite[graphiteElements]){
		graphiteElements++;
	}
	
	
	cout << "Steel Mean: " << mean(steel, steelElements) << endl;
	cout << "Graphite Mean: " << mean(graphite, graphiteElements) << endl;
	
	cout << "Steel Variance: " << variance(steel, steelElements) << endl;
	cout << "Graphite Variance: " << variance(graphite, graphiteElements) << endl;
	
	cout << "Steel Min: " << min(steel, steelElements) << endl;
	cout << "Graphite Min: " << min(graphite, graphiteElements) << endl;
    
    cout << "Steel standard deviation: " << standardDeviation(variance(steel, steelElements)) << endl;
    cout << "Graphite standard deviation: " << standardDeviation(variance(graphite, graphiteElements)) << endl;
    

    
	
	finSteel.close();
	finGraphite.close();
	return 0;
}
// Nancy
double mean(int a[], int n){
	double sum = 0;
	for (int i = 0; i < n; i++){
		sum+= a[i];
	}
	return (sum/n);
}
// Kori
int max(int a[], int n){

    int num = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > num)
        {
            num = a[i];
        }
    }
    return num;
}
// Michael
int min(int a[], int n){
	int min = 1000000;
    	for(int i = 0; i < n; i++){
        	if(a[i] < min){
            	min = a[i];
        	}
    	}
	return min; 
}
// Nancy
double variance(int a[], int n){
	double sum = 0;
	double avg = mean(a, n);
	for (int i = 0; i < n; i++){
		sum+= pow((a[i] - avg), 2);
	}
	return (sum/n);
}
// Michael
double standardDeviation(double v){
	return sqrt(v);
}
