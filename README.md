# telloGUIController
A tello GUI controller based on Qt5.
<br>This project will be finished before 2019.7.1<br>

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

