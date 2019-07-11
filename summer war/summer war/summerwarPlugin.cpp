#include "summerwar.h"
#include "summerwarPlugin.h"

#include <QtCore/QtPlugin>

summerwarPlugin::summerwarPlugin(QObject *parent)
	: QObject(parent)
{
	initialized = false;
}

void summerwarPlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
	if (initialized)
		return;

	initialized = true;
}

bool summerwarPlugin::isInitialized() const
{
	return initialized;
}

QWidget *summerwarPlugin::createWidget(QWidget *parent)
{
	return new summerwar(parent);
}

QString summerwarPlugin::name() const
{
	return "summerwar";
}

QString summerwarPlugin::group() const
{
	return "My Plugins";
}

QIcon summerwarPlugin::icon() const
{
	return QIcon();
}

QString summerwarPlugin::toolTip() const
{
	return QString();
}

QString summerwarPlugin::whatsThis() const
{
	return QString();
}

bool summerwarPlugin::isContainer() const
{
	return false;
}

QString summerwarPlugin::domXml() const
{
	return "<widget class=\"summerwar\" name=\"summerwar\">\n"
		" <property name=\"geometry\">\n"
		"  <rect>\n"
		"   <x>0</x>\n"
		"   <y>0</y>\n"
		"   <width>100</width>\n"
		"   <height>100</height>\n"
		"  </rect>\n"
		" </property>\n"
		"</widget>\n";
}

QString summerwarPlugin::includeFile() const
{
	return "summerwar.h";
}
