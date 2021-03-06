/**
 ******************************************************************************
 *
 * @file       GCSControlgadgetfactory.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup GCSControlGadgetPlugin GCSControl Gadget Plugin
 * @{
 * @brief A gadget to control the UAV, either from the keyboard or a joystick
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#include "gcscontrolgadgetfactory.h"
#include "gcscontrolgadgetwidget.h"
#include "gcscontrolgadget.h"
#include <coreplugin/iuavgadget.h>

GCSControlGadgetFactory::GCSControlGadgetFactory(QObject *parent) :
    IUAVGadgetFactory(QString("GCSControlGadget"),
                      tr("Controller"),
                      parent)
{}

GCSControlGadgetFactory::~GCSControlGadgetFactory()
{}

IUAVGadget *GCSControlGadgetFactory::createGadget(QWidget *parent)
{
    GCSControlGadgetWidget *gadgetWidget = new GCSControlGadgetWidget(parent);

    return new GCSControlGadget(QString("GCSControlGadget"), gadgetWidget, parent, this->parent());
}

IUAVGadgetConfiguration *GCSControlGadgetFactory::createConfiguration(QSettings &settings)
{
    return new GCSControlGadgetConfiguration(QString("GCSControlGadget"), settings);
}

IOptionsPage *GCSControlGadgetFactory::createOptionsPage(IUAVGadgetConfiguration *config)
{
    return new GCSControlGadgetOptionsPage(qobject_cast<GCSControlGadgetConfiguration *>(config), this->parent());
}
