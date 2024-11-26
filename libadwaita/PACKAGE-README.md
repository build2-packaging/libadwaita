# libadwaita - A C library

The `libadwaita` C library provides building blocks for modern GNOME applications.

## Usage

To start using `libadwaita` in your project, add the following [`depends`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifest-package-depends) value to your [`manifest`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifests), adjusting the version constraint as appropriate:

```
depends: libadwaita ^1.6.0
```

Then import the library in your `buildfile`:

```
import libs = libadwaita%lib{adwaita}
```

## Importable targets

This package provides the following importable targets:

```
lib{adwaita}
```

### Importable targets description

* `adwaita` - Building blocks for modern GNOME applications.
