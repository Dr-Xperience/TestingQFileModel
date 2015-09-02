#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mDirModel = new QFileSystemModel();
    mDirModel->setRootPath("/");
    QModelIndex vIndex = mDirModel->index("/home");
    ui->treeView->setModel(mDirModel);
    ui->treeView->setCurrentIndex(vIndex);
    ui->treeView->expand(vIndex);
    ui->treeView->scrollTo(vIndex);
    ui->treeView->resizeColumnToContents(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}
