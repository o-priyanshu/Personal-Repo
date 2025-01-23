document.addEventListener('DOMContentLoaded', function() {
    const audioPlayer = document.getElementById('audio-player');
    const playButtons = document.querySelectorAll('.play-btn');
    const playButton = document.getElementById('play-btn');
    const pauseButton = document.getElementById('pause-btn');

    let currentSongIndex = 0;
    let songs = Array.from(playButtons).map(btn => btn.dataset.song);

    function playSong(songSrc) {
        audioPlayer.src = songSrc;
        audioPlayer.play();
        playButton.style.display = 'none';
        pauseButton.style.display = 'inline-block';
    }

    function pauseSong() {
        audioPlayer.pause();
        playButton.style.display = 'inline-block';
        pauseButton.style.display = 'none';
    }

    playButtons.forEach(button => {
        button.addEventListener('click', () => {
            playSong(button.dataset.song);
        });
    });

    playButton.addEventListener('click', () => {
        if (audioPlayer.src) {
            audioPlayer.play();
            playButton.style.display = 'none';
            pauseButton.style.display = 'inline-block';
        }
    });

    pauseButton.addEventListener('click', () => {
        pauseSong();
    });
});
