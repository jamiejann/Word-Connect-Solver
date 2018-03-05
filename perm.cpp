#include <string>
#include <iostream>
#include <unordered_set>
#include <fstream>
#include <vector> 
#include <algorithm> 

using namespace std;

vector<string> words;
string word;
int count=0; 
int total_word_count=0;

void get( string str, string res ) {
   	//cout << res << endl;
	//printf("%s", str.c_str()); //another way to print
	total_word_count++;
	fstream file("words.txt");
	string line;
	unordered_set<string> result;
	while(file>>line){ 
		result.insert(line);
	} 
	do{ 
		//string word;
		if(result.find(res) != result.end()){ 
			count++;
			cout << "Word #: " << count << "  " << res << endl;
			//cout << "this word exists" << endl; 
			break;
		} 
		else{ 
			break;
		}
	}while(true); 		

   for( int i = 0; i < str.length(); i++ )
      get( string(str).erase(i,1), res + str[i] );
}

int main( int argc, char **argv) {
	string str;	
	cin >> str;

	str_to_be_sorted = str;
	
	//sort the string
	sort(str_to_be_sorted.begin(), str_to_be_sorted.end());


	cout << "Searching::::::::::: " << endl; 
   	get( str_to_be_sorted, "" );  
	cout << endl << "Done:::::::::::::::: " << endl; 

	cout << endl << "Stats::::::::::::::: "<< endl << "Total real word count: " << count << endl << "Total permutations searched: " << total_word_count << endl << endl;
   return 0;
}

