#include <iostream>
#include <string>
using namespace std;

class Hewan {
	private:
		string nama;
		string spesies;
		public:
			void setNama(string n){
				nama =n;
			}
			void setSpesies (string s){
				spesies =s;
			}
			string getNama(){
				return nama;
			}
			string getSpesies(){
				return spesies;
			}
};

int main(){
	Hewan hewan;
	hewan.setNama("Kucing");
	hewan.setSpesies("Felis Catus");
	cout<<"Nama\t: "<<hewan.getNama()<<endl;
	cout<<"Spesies\t: "<<hewan.getSpesies()<<endl;
	return 0;
}
