// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

#include <QObject>

class WinNewlines : public QObject
{
    Q_OBJECT
public Q_SLOTS:
    inline void testSlot() {}
};
