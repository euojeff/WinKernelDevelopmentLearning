#include <ntddk.h>


void
DriverUnload(_DRIVER_OBJECT* DriverObject)
{
	UNREFERENCED_PARAMETER(DriverObject);
	KdPrint(("Unloading...\n"));
}

EXTERN_C
NTSTATUS DriverEntry(
	PDRIVER_OBJECT DriverObject,
	PUNICODE_STRING RegistryPath)
{
	UNREFERENCED_PARAMETER(DriverObject);
	UNREFERENCED_PARAMETER(RegistryPath);

	KdPrint(("Loading...\n"));

	return STATUS_SUCCESS;
}