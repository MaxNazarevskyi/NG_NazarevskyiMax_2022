#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mPlayer = new QMediaPlayer();
    mPlayList = new QMediaPlaylist();
    mPlayer->setPlaylist(mPlayList);
    ui->lineEdit->setReadOnly(true);
    connect(ui->bFind, &QPushButton::clicked, this, &MainWindow::FindSong);
    connect(ui->bPlaylist, &QPushButton::clicked, this, &MainWindow::Playlist);
    connect(ui->bPlay_2, &QPushButton::clicked, this, &MainWindow::Play);
    connect(ui->bForward, &QPushButton::clicked, mPlayList, &QMediaPlaylist::next);
    connect(ui->bBackward, &QPushButton::clicked, mPlayList, &QMediaPlaylist::previous);
    connect(mPlayer, &QMediaPlayer::currentMediaChanged, this, &MainWindow::CurrentMusicChanged);
    connect(ui->sVolume, &QSlider::valueChanged, this, &MainWindow::Volume);
    connect(ui->lPlaylist, &QListWidget::currentTextChanged, this, &MainWindow::Playlist);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Play()
{
    mPlayer->play();
    ui->bPlay_2->setText("||");
    disconnect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Play);
    connect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Pause);
}

void MainWindow::Pause()
{
    mPlayer->pause();
    ui->bPlay_2->setText("|>");
    disconnect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Pause);
    connect(ui->bPlay_2, &QPushButton::clicked,this,&MainWindow::Play);
}

void MainWindow::FindSong()
{
    QString song = QFileDialog::getOpenFileName(this, tr("Play Music"), QDir::homePath(),tr("music (*.mp3)"));
    mPlayList->addMedia(QUrl::fromLocalFile(song));
    ui->lineEdit->setText(song);
}

void MainWindow::CurrentMusicChanged(QMediaContent song)
{
    ui->lineEdit->setText(song.request().url().toString());
}

void MainWindow::Volume()
{
    mPlayer->setVolume(ui->sVolume->value());
}

void MainWindow::Playlist()
{
    QStringList playlist = QFileDialog::getOpenFileNames(this, tr("Playlist"));
    foreach (QString song, playlist){
        ui->lPlaylist->addItem(QFileInfo(song).fileName());
        mPlayList->addMedia(QUrl::fromLocalFile(song));
    }
}
