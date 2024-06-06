FROM registry.fedoraproject.org/fedora:latest

RUN <<-EOT
	set -x # Print trace of simple commands.

	dnf upgrade -y
	dnf install -y                                              \
		--enablerepo=fedora-debuginfo,updates-debuginfo           \
		--disablerepo=updates-testing,updates-testing-debuginfo   \
		--setopt=install_weak_deps=False                          \
	                                                            \
	gcc                                                         \
	gcc-c++                                                     \
	gcc-plugin-devel                                            \
	clang                                                       \
	clang-tools-extra                                           \
	rpmdevtools                                                 \
	                                                            \
	dbus-x11                                                    \
	dbus-devel                                                  \
	                                                            \
	build2                                                      \
	bdep                                                        \
	bpkg
EOT
