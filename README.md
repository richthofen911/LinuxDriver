# LinuxDriver
Learn and write

using memory.ko <br>
1. create a file（该设备文件用于和设备驱动操作）<br>
    mknod /dev/memory c 60 0          其中，c说明创建的是字符设备，60是主设备号，0是从设备号<br>
2. insmod memory.ko<br>
3. 取出设备文件的保护： chmod 666 /dev/memory<br>
4. 如果以上步骤一切正常，此时你就可以向设备/dev/memory写一串字符，并且它将把你写入的最后一个字符存储起来。你可以按下例操作：<br>
   echo -n abcdef >/dev/memory<br>
   cat检查设备的内容：<br>
   cat /dev/memory<br>
   存储的字符将不会改变，直到该字符被覆盖，或者是该模块被卸载。
