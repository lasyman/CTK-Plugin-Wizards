%{Cpp:LicenseTemplate}\
#include "%{ImplHdrFileName}"
#include <ctkPluginContext.h>

#include <QDebug>


%{ImplCN}::%{ImplCN}(ctkPluginContext *context)
{
	context->registerService<%{ServiceCN}>(this);
}
@endif