#include <QApplication>
#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

int square(int num) {
    return num * num;
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow window;

    // Create UI elements
    QLineEdit *input = new QLineEdit(&window);
    input->setGeometry(50, 50, 100, 30);
    input->setPlaceholderText("Enter a number");

    QPushButton *button = new QPushButton("Calculate", &window);
    button->setGeometry(50, 100, 100, 30);

    QLabel *result = new QLabel("Result: Waiting...", &window);
    result->setGeometry(50, 150, 100, 30);

    // Connect button click to C++ logic
    QObject::connect(button, &QPushButton::clicked, [&]() {
        int num = input->text().toInt();
        int output = square(num);
        result->setText("Result: " + QString::number(output));
    });

    window.setFixedSize(300, 250);
    window.show();
    return app.exec();
}