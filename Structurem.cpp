#include<iostream>
#include<string>

struct Person {
	std::string name;
	int age;
	float height;
 };

int main() {
 	Person mahin = {"Mahin Kureshi", 19, 6.1f};
 	std::cout <<"Name: "<< mahin.name <<"\nAge: "<<mahin.age<<"\nHeight: "<<mahin.height<< std::endl;
 	return 0;
}
