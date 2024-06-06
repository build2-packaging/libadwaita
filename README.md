# libadwaita - Building blocks for modern GNOME applications

This is a `build2` package repository for [`libadwaita`](https://gitlab.gnome.org/GNOME/libadwaita), a GTK 4 library implementing the GNOME HIG, complementing GTK. 

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libadwaita` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libadwaita/PACKAGE-README.md) file.

The development setup for `libadwaita` uses the standard `bdep`-based workflow.
For example:

```
git clone .../libadwaita.git
cd libadwaita

bdep init -C @gcc cc config.cxx=g++ -- ?sys:gtk4-devel ?sys:glib2-devel ?sys:appstream-devel --sys-no-stub --sys-install
bdep update
bdep test
```
