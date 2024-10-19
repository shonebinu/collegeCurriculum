package musicplayer;

import music.Song;

public class Music {
  public static void main(String[] args) {
    Song song = new Song("Happy", "Taylor Swift", 180);
    song.play();
    song.displayDetails();
  }
}