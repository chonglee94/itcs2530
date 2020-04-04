#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;

//this function count the vowels of A
int countvowelsA(string line){
    int vowelsA = 0; 
    for (int x = 0; x<line.length(); x++)
    {
        if( line[x]== 'a' || line[x] == 'A'){
        vowelsA++;
        }
    }
    return vowelsA;
}
//the function counts the vowels of E
int countvowelsE(string line){
    int vowelsE = 0; 
    for (int x = 0; x<line.length(); x++)
    {
        if( line[x]== 'e' || line[x] == 'E'){
        vowelsE++;
        }
    }
    return vowelsE;
}
//this function counts the vowels of I
int countvowelsI(string line){
    int vowelsI = 0; 
    for (int x = 0; x<line.length(); x++)
    {
        if ( line[x]== 'i' || line[x] == 'I'){
        vowelsI++;
        }
    }
    return vowelsI;
}
//this function counts the vowels of O
int countvowelsO(string line){
    int vowelsO = 0; 
    for (int x = 0; x<line.length(); x++)
    {
        if ( line[x] == 'o' || line[x] == 'O'){
        vowelsO++;
        }
    }
    return vowelsO;
}
//this function counts the vowels of U
int countvowelsU(string line){
    int vowelsU = 0; 
    for (int x = 0; x<line.length(); x++)
    {
        if ( line[x] == 'u' || line[x] == 'U' ){
        vowelsU++;
        }
    }
    return vowelsU;
}
//function to display total number of vowels
void totalVowels(int vowelsA, int vowelsE, int vowelsI, int vowelsO, int vowelsU, int vowels){
    cout << "The number of A's:......................"<< vowelsA <<endl;
    cout << "The number of E's:......................" << vowelsE <<endl;
    cout << "The number of I's:......................" << vowelsI <<endl;
    cout << "The number of O's:......................" << vowelsO <<endl;
    cout << "The number of U's:......................" << vowelsU <<endl;
    cout << "The vowels count is:...................." << vowels <<endl;
}


int main(int argc, char * argv[])
{

// defines infile as a ifstream to open
ifstream infile;

//opens (argv[1]) == whatever parameter you passed in the cmd terminal
infile.open(argv[1]);

cout<<"Analyzing file data.txt........."<<endl;

cout<<"**************************************************"<<endl;
cout<<"********Welcome to my Letter Count Program********"<<endl;
cout<<"**************************************************"<<endl;

    string s;

    int vowels = 0, vowelsA = 0, vowelsE = 0, vowelsI = 0, vowelsO = 0, vowelsU = 0;
    //call to function

    //getline from infile, store into variable s 
    while(getline(infile, s))

    {
      //call func vount_vowels and send s as a parameter
    
    vowelsA = vowelsA + countvowelsA(s);
    vowelsE = vowelsE + countvowelsE(s);
    vowelsI = vowelsI + countvowelsI(s);
    vowelsO = vowelsO + countvowelsO(s);
    vowelsU = vowelsU + countvowelsU(s);
    vowels =  vowelsA + vowelsE + vowelsI + vowelsO + vowelsU;

    }

    totalVowels(vowelsA, vowelsE, vowelsI, vowelsO, vowelsU, vowels);



    return 0;
}

