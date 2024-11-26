# libadwaita - Building blocks for modern GNOME applications

This is a [`build2`](https://build2.org/) package repository for [`libadwaita`](https://gitlab.gnome.org/GNOME/libadwaita).

This file contains setup instructions and other details that are more appropriate for development rather than consumption. If you want to use [`libadwaita`](https://gitlab.gnome.org/GNOME/libadwaita) in your [`build2`](https://build2.org/)-based project, then instead see the accompanying [`PACKAGE-README.md`](libadwaita/PACKAGE-README.md) file.

The development setup for [`libadwaita`](https://gitlab.gnome.org/GNOME/libadwaita) uses the standard[`bdep`](https://build2.org/bdep/doc/bdep.xhtml)-based workflow. For example, on Fedora:

```
git clone .../libadwaita.git
cd libadwaita

bdep init -C @gcc cc -- sys:gtk4-devel sys:glib2-devel sys:appstream-devel sys:dbus-x11 --sys-no-stub --sys-install
bdep update
bdep test
```
