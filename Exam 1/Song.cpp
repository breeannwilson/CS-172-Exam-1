//I affirm that all the code given below was written by me, Breeann Wilson, and that any help I received adheres to the rules
//stated for this exam

#include <iostream>
#include "Song.h"
#include <string>
using namespace std;

//Construct default song- I picked any song
Song::Song() {
	string title("Closer");
	string artist("The Chainsmokers");
	string genre("ModernPop");
}



//Allow the caller to set up the song
Song::Song(string newTitle, string newArtist, string newGenre) {
	title = newTitle;
	artist = newArtist;
	genre = newGenre;
}

//get functions for title, artist, genre
string Song::getTitle() const {
	return title;
}
string Song::getArtist() const {
	return artist;
}
string Song::getGenre() const {
	return genre;
}

//will check if the song genre is equal to the genre
bool Song::isOfGenre(string theGenre) {
	if (theGenre == genre)
		return true;
	else
		return false;
}