
Debian
====================
This directory contains files used to package dogecoinprivated/dogecoinprivate-qt
for Debian-based Linux systems. If you compile dogecoinprivated/dogecoinprivate-qt yourself, there are some useful files here.

## dogecoinprivate: URI support ##


dogecoinprivate-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install dogecoinprivate-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your dogecoinprivateqt binary to `/usr/bin`
and the `../../share/pixmaps/dogecoinprivate128.png` to `/usr/share/pixmaps`

dogecoinprivate-qt.protocol (KDE)

