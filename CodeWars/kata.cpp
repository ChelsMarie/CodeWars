/*
 * kata.cpp
 *
 *  Created on: Jul 24, 2018
 *      Author: chelseabovell
 */


#include<iostream>
#include<string.h>

using namespace std;


//Roman Numerals
string solution(long long number) {
	// convert the number to a roman numeral

	std::string ret;

	long long toRoman1000 = number / 1000;

	if (toRoman1000 > 0) {
		for (long long i = 0; i < toRoman1000; i++) {
			//print a "M" the number of times
			ret += "M";
			//cout << "M";
			number -= 1000;
		}

	}


	long long toRoman500 = number / 500;
	long long toRoman900 = number / 900;

	if (toRoman900 == 1) {
		ret += "CM";
		//cout << "CM";
		number -= 900;
	}

	else if (toRoman500 > 0 && toRoman500 < 4) {
		for (long long i = 0; i < toRoman500; i++) {
			//print a "D" the number of times
			ret += "D";
			//cout << "D";
			number -= 500;
		}
	}



	long long toRoman100 = number / 100;
	long long toRoman90 = number / 90;

	if (toRoman90 == 1) {
		ret += "XC";
		//cout << "XC";
		number -= 90;
	}

	else if (toRoman100 > 0 && toRoman100 < 4) {
		for (long long i = 0; i < toRoman100; i++) {
			//print a "C" the number of times
			ret += "C";
			//cout << "C";
			number -= 100;
		}
	}


	long long toRoman50 = number / 50;
	long long toRoman40 = number / 40;

	if (toRoman40 == 1) {
		ret += "XL";
		number -= 40;
	}

	else if (toRoman50 > 0 && toRoman50 < 4) {
		for (long long i = 0; i < toRoman50; i++) {
			//print a "L" the number of times
			ret += "L";
			//cout << "L";
			number -= 50;
		}
		//then subtract the divisor

	}

	long long toRoman10 = number / 10;
	long long toRoman9 = number / 9;

	if (toRoman9 == 1) {
		ret += "IX";
		number -= 9;
	}

	else if (toRoman10 > 0 && toRoman10 < 4) {
		for (long long i = 0; i < toRoman10; i++) {
			//print a "X" the number of times
			ret += "X";
			//cout << "X";
			number -= 10;
		}
		//then subtract the number

	}

	long long toRoman5 = number / 5;
	long long toRoman4 = number / 4;

	if (number % 4 == 0 && toRoman4 == 1) {
		ret += "IV";
		number -= 4;
	}


	else if (toRoman5 > 0 && toRoman5 < 4) {
		for (long long i = 0; i < toRoman5; i++) {
			//print a "V" the number of times
			ret += "V";
			//cout << "V";
			number -= 5;
		}
		//then subtract the number

	}

	if (number == 3) {
		for (long long i = 0; i <= number; i++) {
			ret += "I";
			number -= i;
		}
	}

	else {

		for (long long i = 0; i < number; i++) {
			//print a "I" the number of times
			ret += "I";
			//cout << "I";
			number -= i;
		}

	}

	//cout << "The roman numeral is: " << ret << endl;
	return ret;

}//function


int main () {

	solution(1000);
	//solution(1990);
	//solution(1875);
}
