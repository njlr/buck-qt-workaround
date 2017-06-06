# Utility function to flatten a list of lists
flatten = lambda l: [ item for sublist in l for item in sublist ]

# This is the full list of frameworks that Homebrew installed on my system.
# You probably don't need them all!
qt_frameworks = [
  'Qt3DAnimation',
  'Qt3DCore',
  'Qt3DExtras',
  'Qt3DInput',
  'Qt3DLogic',
  'Qt3DQuick',
  'Qt3DQuickAnimation',
  'Qt3DQuickExtras',
  'Qt3DQuickInput',
  'Qt3DQuickRender',
  'Qt3DQuickScene2D',
  'Qt3DRender',
  'QtBluetooth',
  'QtCharts',
  'QtConcurrent',
  'QtCore',
  'QtDBus',
  'QtDataVisualization',
  'QtDesigner',
  'QtDesignerComponents',
  'QtGamepad',
  'QtGui',
  'QtHelp',
  'QtLocation',
  'QtMacExtras',
  'QtMultimedia',
  'QtMultimediaQuick_p',
  'QtMultimediaWidgets',
  'QtNetwork',
  'QtNetworkAuth',
  'QtNfc',
  'QtOpenGL',
  'QtPositioning',
  'QtPrintSupport',
  'QtPurchasing',
  'QtQml',
  'QtQuick',
  'QtQuickControls2',
  'QtQuickParticles',
  'QtQuickTemplates2',
  'QtQuickTest',
  'QtQuickWidgets',
  'QtRemoteObjects',
  'QtScript',
  'QtScriptTools',
  'QtScxml',
  'QtSensors',
  'QtSerialBus',
  'QtSerialPort',
  'QtSql',
  'QtSvg',
  'QtTest',
  'QtTextToSpeech',
  'QtWebChannel',
  'QtWebEngine',
  'QtWebEngineCore',
  'QtWebEngineWidgets',
  'QtWebSockets',
  'QtWebView',
  'QtWidgets',
  'QtXml',
  'QtXmlPatterns',
]

# You may need to tweak this to match the version you installed from Homebrew.
macos_preprocessor_flags = [
  '-I/usr/local/Cellar/qt/5.9.0/include/',
]

# Again, this may vary if you have a different version of Qt.
macos_linker_flags = [
  '-F/usr/local/Cellar/qt/5.9.0/lib/',
] + flatten([ [ '-framework', x ] for x in qt_frameworks ])

cxx_binary(
  name = 'example',
  srcs = [
    'main.cpp',
  ],
  compiler_flags = [
    '-std=c++14',
  ],
  platform_preprocessor_flags = [
    ('default', macos_preprocessor_flags),
    ('^macos.*', macos_preprocessor_flags),
  ],
  platform_linker_flags = [
    ('default', macos_linker_flags),
    ('^macos.*', macos_linker_flags),
  ],
  licenses = [
    'LICENSE',
  ],
)
