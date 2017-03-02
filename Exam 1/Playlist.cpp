//I affirm that all the code given below was written by me, Breeann Wilson, and that any help I received adheres to the rules
//stated for this exam

#include <string>
#include "Playlist.h"
using namespace std;

// constructor for the playlist function
Playlist::Playlist(string newName) {
	name = newName;
	numsongs = 0;
}

//the name of the playlist
string Playlist::getName() {
	return name;
}

//boolean to return true if one of the songs in the playlist is of genre "genre"
bool Playlist::hasGenre(string genre) {
	for (int i = 0; i < numsongs; i++) {
		if (songs[i].getGenre() == genre)
			return true;
	}
	return false;
}

//will add songs to the playlist until the playlist has 9 songs
void Playlist::addSong(Song song) {
	if (numsongs < 9) {
		songs[numsongs] = song;
		numsongs++;
	}
}

//will return the number of songs (9)
int Playlist::numberOfSongs() {
	return numsongs;
}


//will say how many songs are in the playlist, 
string Playlist::playSong(int songNumber) {
	if (songNumber < numsongs && songNumber > -1) {
		Song theSong = songs[songNumber];
		return theSong.getTitle();
	}
	else
		return "";
}
