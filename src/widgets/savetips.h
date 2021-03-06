/*
 * Copyright (C) 2017 ~ 2018 Deepin Technology Co., Ltd.
 *
 * Maintainer: Peng Hui<penghui@deepin.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SAVETIPS_H
#define SAVETIPS_H

#include <DLabel>
#include <QPropertyAnimation>
#include <DWidget>

DWIDGET_USE_NAMESPACE

class SaveTips : public DLabel
{
    Q_OBJECT
    Q_PROPERTY(int tipWidth READ tipWidth WRITE setTipWidth NOTIFY tipWidthChanged)

public:
    SaveTips(DWidget *parent = 0);
    ~SaveTips();

signals:
    void tipWidthChanged(int value);

public slots:
    void setSaveText(QString text);
    void startAnimation();
    void endAnimation();

private:
    int m_tipsWidth = 0;
    int tipWidth() const;
    QString m_text;
    void setTipWidth(int tipsWidth);

    QPropertyAnimation *m_startAni;
    QPropertyAnimation *m_stopAni;
};
#endif // SAVETIPS_H
