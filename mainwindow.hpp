//
// codename Morning Star
//
// Copyright (C) 2008, 2009, 2010 by Ignacio R. Morelle <shadowm@wesnoth.org>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QAbstractButton>
#include <QMainWindow>
#include <QPicture>
#include <QListWidgetItem>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;

	QString img_path_;
	QString source_path_;

	QImage img_original_;
	QImage img_transview_;

	void toggle_page1(bool newstate);
	void toggle_page2(bool newstate);

	void do_save();
	void do_close();
	void do_open();
	void do_about();

	void refresh_previews();

private slots:
	void on_listRanges_itemClicked(QListWidgetItem* item);
 void on_action_Quit_triggered();
 void on_action_Open_triggered();
 void on_buttonBox_clicked(QAbstractButton* button);
 void on_actionAbout_Morning_Star_triggered();
 void on_radPal_clicked();
	void on_radRc_clicked();
};

#endif // MAINWINDOW_HPP
