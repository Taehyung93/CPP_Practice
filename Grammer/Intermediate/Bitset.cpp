#include <iostream>

using namespace std;

int main(){

    //vector<bool> : If it has a dynamic size, it doesn't need complicated bit operations.

    //bitset<6>: When having a static size, complex bit operations are required (decimal conversion, bit inversion, etc.)

    //* bitset initialize 

	bitset<6> bit;			// 000000
	bitset<6> bit2("111011");	// Initialize String "110011"
	bitset<20> bit3(58);		// Initialize decimal number 58

    cout << bit2 << endl;

    //bitset<6> bit2("111111") or bit2 = "111111"
    //! error: redefinition of 'bit2'

    //* bit inspection

	// if all bit is 1, it will be true, else false
	if (bit2.all()) cout << "all bit value is 1\n";
	else cout << "all bit value is not 1\n";
	
	// at least one bit value is 1 true, else false
	if (bit2.any()) cout << "bit value is not 0\n"; 
	else cout << "bit value is 0\n";

	//at least one bit value is 1 false, else true
	if (bit2.none()) cout << "bit value is 0\n";
	else cout << "bit value is not 0\n";



	//* binary string to decimal number
    int n = bit2.to_ulong();
    cout << bit2 << " conver to decimal number: " << n << "\n";


	//* decimal number to binary string
	int num = 62;
	bitset<20> bit4(num);
	string s = bit4.to_string();
    cout << s << endl; // result is 00000000000000111110, because its length is 20, so below code is needed.
	if (bit4.any()) {		
		s = s.substr(s.find('1'));
	}
	else {
		s = "0";
	}
	cout << num << " conver to binary number: " <<  s << "\n";
	

	//* bitset search
	cout << bit2 << "\n";
	cout << bit2.count() << "\n";	// number of bitset value 1
	for (int i = 0; i < bit2.size(); i++) {	// bitset length
		cout << bit2[i] << " ";	// access the value invert, so bit2 value is 111011 but printing value is 110111
	}
	cout << "\n";


 
    return 0;
}