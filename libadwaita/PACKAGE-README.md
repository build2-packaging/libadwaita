# libadwaita - A C library

The `libadwaita` C library provides building blocks for modern GNOME applications.

## Usage

To start using `libadwaita` in your project, add the following [`depends`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifest-package-depends) value to your [`manifest`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifests), adjusting the version constraint as appropriate:

```
depends: libadwaita ^1.5.0
```

Then import the library in your `buildfile`:

```
import libs = libadwaita%lib{adwaita}
```

## Importable targets

This package provides the following importable targets:

```
lib{adwaita}
lib{gtk-4}
lib{glib-2.0}
lib{appstream}
```

### Importable targets description

* `adwaita` - Building blocks for modern GNOME applications.
* `gtk-4` - Cross-platform widget toolkit for creating graphical user interfaces.
* `glib-2.0` - General-purpose, portable utility library, which provides many useful data types, macros, type conversions, string utilities, file utilities, a mainloop abstraction, and so on.
* `appstream` -  Tools and libraries to work with AppStream metadata.
