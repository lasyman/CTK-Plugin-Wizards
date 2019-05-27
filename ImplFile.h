%{Cpp:LicenseTemplate}\
#ifndef %{JS: Cpp.headerGuard('%{ImplHdrFileName}')}
#define %{JS: Cpp.headerGuard('%{ImplHdrFileName}')}

#include <QObject>

#include "%{ServiceCN}.h"

class ctkPluginContext;

class %{ImplCN} : public %{ServiceCN}
{
    Q_OBJECT
    Q_INTERFACES(%{ServiceCN})
public:
    %{ImplCN}(ctkPluginContext* context);
};

#endif // %{JS: Cpp.headerGuard('%{ImplHdrFileName}')}
