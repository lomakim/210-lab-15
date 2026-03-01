// COMSC-210 | Lab 15 | Loma Kim
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Movie{
    private:
    string writer;
    int year;
    string title;

    public:
    //MUTATORS
    void setScreenwriter(string w) { writer = w; }
    void setReleaseYear(int y) { year = y; }
    void setMovieTitle(string t) { title = t; }

    //ACCESSORS
    string getScreenwriter() const { return writer; }
    int getReleaseYear() const { return year; }
    string getMovieTitle() const { return title; }

    void print() const;
};

int main() {
    //DECLARATIONS
    const int SIZE = 4;
    vector <Movie> movies(SIZE);
    int count;                  //int for vector element count
    int tmpY;                       //temp year for reading file
    string tmpW, tmpT;              //temp writer and title for reading file
    
    //OPEN INPUT FILE
    ifstream fin;
    fin.open("input.txt");

    //VALIDATE FILE AND READ DATA
    if(fin.good()) {
        count = 0;  //set vector element counter to 0

        //Read values from file into temp variables
        while(getline(fin, tmpT)) {
            fin >> tmpY;
            fin.ignore();
            getline(fin, tmpW);

            //Set values for vector element using temp varialbes
            movies[count].setMovieTitle(tmpT);
            movies[count].setReleaseYear(tmpY);
            movies[count].setScreenwriter(tmpW);

            //Increment element counter variable
            count++;
        }
    }
    else {
        cout << "ERROR: File not found." << endl;
    }

    //BANNER
    cout << "**** MOVIES CONTAINED IN INPUT.TXT FILE ****" << endl;

    //PRINT VECTOR CONTENTS - using for loop  
    for (int i = 0; i < SIZE; i++){
        movies[i].print();
    }

    //CLOSE FILE
    fin.close();

    return 0;
}

//Print - member function for Movie class; prints title, year, & screenwriter
void Movie::print() const {
    cout << "\nMovie Title: " << title << endl;
    cout << "\tYear Released: " << year << endl;
    cout << "\tScreenwriter: " << writer << endl;
}