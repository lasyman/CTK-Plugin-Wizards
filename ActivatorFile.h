%{Cpp:LicenseTemplate}\
#ifndef %{JS: Cpp.headerGuard('%{ActivatorHdrFileName}')}
#define %{JS: Cpp.headerGuard('%{ActivatorHdrFileName}')}

#include <QObject>
#include <ctkPluginActivator.h>

#include "%{ServiceCN}.h"

class %{ActivatorCN} : public QObject, public ctkPluginActivator
{
    Q_OBJECT
    Q_INTERFACES(ctkPluginActivator)
    Q_PLUGIN_METADATA(IID "%{ProjectName}")
public:
    void start(ctkPluginContext* context);
    void stop(ctkPluginContext* context);

private:
	QScopedPointer<%{ServiceCN}> s;
    
};

#endif // %{JS: Cpp.headerGuard('%{ActivatorHdrFileName}')}
