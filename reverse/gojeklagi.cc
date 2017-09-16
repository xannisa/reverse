#include <cstdlib>
#include <iostream>
#include <string.h>
 
using namespace std;
 

void reverse(string str)
{	
	int i, f, katake = 0;
	int panjang = str.size();
	int awalkata[panjang], akhirkata[panjang];
    for (i=0; i <= str.size(); i ++){
		if ((str[i] == ' ') || (i == panjang)) {
			if (katake == 0) awalkata[katake] = 0;
			else awalkata[katake] = akhirkata[katake - 1]+2;
			if (katake == 0) akhirkata[katake] = i-1;
			else akhirkata[katake] = i - 1;
			katake = katake + 1;
		  }
		 
	  }
	int c = katake-1;
	while ( c >= 0){
	for (f = awalkata[c]; f <= akhirkata[c] ; f++){
		cout << str[f]; 
		}
		cout << " ";
		c--;
	}
	  
    
}

int main()
{
    string kata;
    getline(cin, kata);
	reverse(kata);
    return 0;    
}
