# OnC
This repository is used for C language

All the codes here are written using iTerm2 on macOS

*ALWAYS keep in mind that any changes made inside Terminal(or any alternatives) will be final, be cautious to any actions taken. There will be no warning messages appear when changes are made

To navigate:
- Use "pwd" to know your current location
- Use "ls" to display files under current directory
- Use "ls -la" to display detail information(date modified, size of the file, premissions etc.) about all files(including hidden files) under current directory
- Use "cd" to enter specific directory
- Use ".." to exit current directory
- Use touch - create file
- Use touch -t MMDDCCYY file - replacing last edited date(mmss) to mmddccyy
- Use cat - preview a file's content
- Use chmod - changes acess premission to file system objects ___ ___ ___ (me group world), r for read, w for write, x for execute
	0 = ___		1 = __x		2 = _w_		3 = _wx
	4 = r__		5 = r_x		6 = rw_		7 = rwx
- Use mkdir - create new directory
- Use mv - to move a file
- Use cp - to create a copy of a file
- Use rm - to delete a file

To compile:
- Use gcc "all the files required", can be used with flags..(clang can also be used instead of gcc)
- Use make "executable name" to compile all .c files into executable under current directory

Using Vim(Text Editor):
- Type Vim (file name) to enter text editor mode
- Press i key upon opening the file to edit text file
- Press esc then :wq to save and quit editing mode
- Press esc then :q! to quit without saving
