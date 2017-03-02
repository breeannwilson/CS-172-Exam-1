#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Song.h"
#include <string>

class Playlist {
private:
	string name;
	string genre;
	string song; 
	const int MAX_SONGS = 20;
	Song songs[9];
	int numsongs;
public:
	// constructor for the playlist
	Playlist(string name);

	// get the name of the Playlist
	string getName();

	// returns true when at least one song of 
	// this genre is present.
	bool hasGenre(string genre);

	// Add a new song
	void addSong(Song song);

	// How many songs in this playlist?
	int numberOfSongs();

	// Play a song.  return an empty string if there is no such song.
	string playSong(int songNumber);

};

#endif