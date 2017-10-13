#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FishHunterRecorder.h"

#include "CaptureChrome.h"
#include <QTimer>

using namespace std;

struct HWNDInfo
{
	HWND		WId;		// ID
	QString		name;		// �������W��
};

class FishHunterRecorder : public QMainWindow
{
	Q_OBJECT

public:
	FishHunterRecorder(QWidget *parent = Q_NULLPTR);

private:
	Ui::FishHunterRecorderClass ui;

	QTimer			*screenshotTimer;
	CaptureChrome	chrome;

private slots:
	void ScreenShotAtChrome();
};