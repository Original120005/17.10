#include <iostream>
#include <fstream>
#include "directori.h"
using namespace std;

int main() {
	Directory obj("zemlya", "Dima", "0503950580", "Odessa", "C++");
	obj.Input();
	obj.Save();
	obj.Print();

	Directory obj2("Bus", "Villa", "3023123930549", "Kubey", "Python");
	obj2.Input();
	obj2.Save();
	obj2.Print();

}