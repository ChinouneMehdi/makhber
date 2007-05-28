/***************************************************************************
    File                 : OpenProjectDialog.h
    Project              : QtiPlot
    --------------------------------------------------------------------
    Copyright            : (C) 2007 by Knut Franke
    Email (use @ for *)  : knut.franke*gmx.de
    Description          : Dialog for opening project files.

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *  This program is free software; you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation; either version 2 of the License, or      *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the Free Software           *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor,                    *
 *   Boston, MA  02110-1301  USA                                           *
 *                                                                         *
 ***************************************************************************/
#ifndef OPEN_PROJECT_DIALOG_H
#define OPEN_PROJECT_DIALOG_H

#include "ExtensibleFileDialog.h"

#include <QComboBox>

class OpenProjectDialog : public ExtensibleFileDialog
{
	Q_OBJECT
	public:
		enum OpenMode { NewProject, NewFolder };
		OpenProjectDialog(QWidget *parent=0, Qt::WFlags flags=0);
		OpenMode openMode() const { return (OpenMode) d_open_mode->currentIndex(); }

	private:
		QComboBox *d_open_mode;
};

#endif // ifndef OPEN_PROJECT_DIALOG_H
