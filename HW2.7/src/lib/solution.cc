#include "solution.h"


void Solution::ismap(string& a, string & b){
	if (a.length() != b.length())
		std::cout<<"{}";
	else {
		int charmap[256];
		memset(charmap, -1, sizeof(charmap));
		for (int i = 0; i < a.length(); i++){
			if (charmap[a[i]] == -1)
				charmap[a[i]] = b[i];
			else if (charmap[a[i]] != b[i]){
				std::cout<<"{}";
				return;
			}
		}

		std::cout << "{";
		int tag = 0;
		for (int i = 0; i < 256; i++){
			if (charmap[i] != -1){
				if (tag == 1)
					std::cout << ",";
				std::cout<<"(" << char(i)<<"->"<<char(charmap[i]);
				tag = 1;
			}
		}
		std::cout << "}"<<std::endl;
		
	}
	
}

