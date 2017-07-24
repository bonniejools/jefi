#include <efi.h>
#include <efilib.h>

EFI_STATUS
EFIAPI
efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    InitializeLib(ImageHandle, SystemTable);
    Print(L"Welcome to Jonny's amazing EFI bootloader :DDD\n");
    Print(L"Firware vendor: %s\n", SystemTable->FirmwareVendor);
    Print(L"Firware version: %d\n", SystemTable->FirmwareRevision);

    return EFI_SUCCESS;
}

