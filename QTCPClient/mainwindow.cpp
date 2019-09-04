#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	socket = new QTcpSocket(this);

	connect(this, SIGNAL(newMessage(QString)), this, SLOT(displayMessage(QString)));
	connect(socket, SIGNAL(readyRead()), this, SLOT(readSocket()));
	connect(socket, SIGNAL(disconnected()), this, SLOT(discardSocket()));
	socket->connectToHost(QHostAddress::.0, 8080);
	if (socket->waitForConnected())
		this->ui->statusBar->showMessage("Connected to Server");
	else {
		QMessageBox::critical(this, "QTCPClient", QString("The following error occurred: %1.").arg(socket->errorString()));
		exit(EXIT_FAILURE);
	}
}

MainWindow::~MainWindow()
{
	if (socket->isOpen())
		socket->close();
	delete ui;
}

void MainWindow::readSocket()
{
	QByteArray block = socket->readAll();



	QString receiveString= QString(block);

	emit newMessage(receiveString);

}

void MainWindow::discardSocket()
{
	socket->deleteLater();
	socket = nullptr;

	this->ui->statusBar->showMessage("Disconnected!");
}

void MainWindow::on_pushButton_sendMessage_clicked()
{
	if (socket)
	{
		if (socket->isOpen())
		{
			QString str = this->ui->lineEdit_message->text();

			QByteArray block= str.toUtf8();
		

			

			socket->write(block);

			this->ui->lineEdit_message->clear();
		}
		else
			QMessageBox::critical(this, "QTCPClient", "Socket doesn't seem to be opened");
	}
	else
		QMessageBox::critical(this, "QTCPClient", "Not connected");
}

void MainWindow::displayMessage(const QString& str)
{
	this->ui->textBrowser_receivedMessages->append(str);
}
