/****************************************************************************
**
** Copyright (c) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of a Qt Solutions component.
**
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Solutions Commercial License Agreement provided
** with the Software or, alternatively, in accordance with the terms
** contained in a written agreement between you and Digia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain
** additional rights. These rights are described in the Digia Qt LGPL
** Exception version 1.1, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** Please note Third Party Software included with Qt Solutions may impose
** additional restrictions and it is the user's responsibility to ensure
** that they have met the licensing requirements of the GPL, LGPL, or Qt
** Solutions Commercial license and the relevant license of the Third
** Party Software they are using.
**
** If you are unsure which license is appropriate for your use, please
** contact Digia at http://www.qt-project.org/legal.
**
****************************************************************************/

#ifndef QTPIEACTION_H
#define QTPIEACTION_H

#include "qtpieitem.h"

#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtGui/QIcon>

class QtPieAction : public QtPieItem
{
    Q_OBJECT
public:
    QtPieAction(const QString &text,
                QObject *receiver, const char *member);
    QtPieAction(const QIcon &icon, const QString &text,
                QObject *receiver, const char *member);

    void activate();

Q_SIGNALS:
    void activated();

protected:
    int type() const;

};

#endif // QTPIEACTION_H
