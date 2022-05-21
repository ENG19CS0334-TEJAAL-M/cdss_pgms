#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdio>
using namespace std;
double N[100];
double fac(double n){ if(n<=0) return 1; else return (n * fac(n-1)); }
// factorial function
int main(){
int num;
cout<<"How many numbers do you want to handle?\t";
cin>>num; //number of positive integers
for(int i=0; i<num; i++){
cout<<"Enter the value of N"<<(i+1)<<"\t";
cin>>N[i]; //array of positive n integers
}
clock_t start = clock();
double sum = 0;
 for(int i=0; i<num; i++){
 sum += fac(N[i]); //summation of factorials
 }
 for(int i=0; i<num; i++){
 cout<<"N"<<(i+1)<<" = "<<N[i]<<"\t"<<endl; //display of integers
 }
 cout<<"The sum of the factorials = "<<sum<<endl; //value of sum of factorials
 clock_t end = clock();
 
 printf("The execution time = %.1f milliseconds",(float)(end-start));
  //execution time in milliseconds
 return 0;
}
