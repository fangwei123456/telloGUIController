# telloGUIController
A tello GUI controller based on Qt5.<br>
This project will be finished before 2019.7.1.<br>
key mapping(same as fly a plane in GTA):<br>
 * F1   connect to tello and start command mode
 * F2   stop tello's engine, EMERGENCY
 * F3   open video stream
 * F4   off video stream
 * F5   takeoff
 * F6   land
 * W    up
 * S    down
 * A    left
 * D    right
 * ↑    forward
 * ↓    back
 * Q    ccw, ↺
 * E    cw, ↻
 * 1    decrease move distance
 * 2    increase move distance
 * 3    decrease rotate degree
 * 4    increase rotate degree
 * 5    decrease move speed
 * 6    increase move speed
 * Y    set speed
 
 Change control mode from "keyboard control" to "input command", and you can also input order string to control tello.<br>

![1](https://github.com/fangwei123456/telloGUIController/blob/master/0.JPG)

Compile:<br>

This project uses cv::VideoCapture with FFmpeg api to read udp video stream from tello.<br>
First, make sure that you have installed FFmpeg, and built openCV(version>=3.0) with FFmpeg(compiled with --enable-libx264).<br>

Second, make sure that you have installed qt5 and qmake.<br>
If not, just do this:<br>
`sudo apt-get install qt5-default`<br>
`git colne git@github.com:fangwei123456/telloGUIController.git`<br>
`cd telloGUIController/telloGUIController/telloGUIController`<br>
`qmake`<br>
`make -j8`<br>

You can use qt-creator to open .pro and compile this prpoject.<br> 
If you have not installed qt-creator, just do this:<br>
`sudo apt-get install qtcreator`<br>

