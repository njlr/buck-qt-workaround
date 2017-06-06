#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>

int main(int argc, char **argv) {

  QApplication app(argc, argv);

  QPushButton hello("Hello, world. ", 0);

  hello.resize(128, 48);
  hello.show();

  return app.exec();
}
