linux_pp_flags = [
  '-I/usr/include/x86_64-linux-gnu/qt5/QtCore',
  '-I/usr/include/x86_64-linux-gnu/qt5',
]

linux_linker_flags = [
  '-lQt5Core',
  '-lQt5Gui',
  '-lQt5Widgets',
]

prebuilt_cxx_library(
  name = 'qt5-core',
  header_only = True,
  exported_linker_flags = [
    '-lQt5Core',
  ],
)

prebuilt_cxx_library(
  name = 'qt5-gui',
  header_only = True,
  exported_linker_flags = [
    '-lQt5Gui',
  ],
)

prebuilt_cxx_library(
  name = 'qt5-widgets',
  header_only = True,
  exported_linker_flags = [
    '-lQt5Widgets',
  ],
)

genrule(
  name = 'my-class',
  out = 'my-class.cpp',
  srcs = [
    'my-class.cpp',
  ],
  cmd = 'moc $SRCS > $OUT',
)

cxx_binary(
  name = 'example',
  srcs = [
    'main.cpp',
    # ':my-class', # You can compile generated code like this
  ],
  platform_preprocessor_flags = [
    ('linux.*', linux_pp_flags),
  ],
  deps = [
    ':qt5-core',
    ':qt5-widgets',
    ':qt5-gui',
  ],
  licenses = [
    'LICENSE',
  ],
)
