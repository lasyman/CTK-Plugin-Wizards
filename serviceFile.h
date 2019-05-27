%{Cpp:LicenseTemplate}\
#ifndef %{JS: Cpp.headerGuard('%{ServiceHdrFileName}')}
#define %{JS: Cpp.headerGuard('%{ServiceHdrFileName}')}

#include <QtPlugin>

class %{ServiceCN} : public QObject
{
    Q_OBJECT
public:
    virtual ~%{ServiceCN}(){}
};

#define %{ServiceCN}_iid "org.commontk.service.%{ServiceCN}"
Q_DECLARE_INTERFACE(%{ServiceCN}, %{ServiceCN}_iid)

#endif // %{JS: Cpp.headerGuard('%{ServiceHdrFileName}')}
