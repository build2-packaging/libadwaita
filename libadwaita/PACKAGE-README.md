# libadwaita - A C library

This is a `build2` package for the [`libadwaita`](https://gitlab.gnome.org/GNOME/libadwaita) C library. It provides Building blocks for modern GNOME applications.

## Usage

To start using `libadwaita` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libadwaita ^1.5.0
```

Then import the library in your `buildfile`:

```
import libs = libadwaita%lib{adwaita}
```
