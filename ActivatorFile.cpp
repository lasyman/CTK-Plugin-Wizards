%{Cpp:LicenseTemplate}\
#include "%{ActivatorHdrFileName}"
#include "%{ImplHdrFileName}"

void %{ActivatorCN}::start(ctkPluginContext *context)
{
	s.reset(new %{ImplCN}(context));
}

void %{ActivatorCN}::stop(ctkPluginContext *context)
{
    Q_UNUSED(context)
}
