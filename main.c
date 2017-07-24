/*
 * Jonny's EFI bootloader (JEFI)
 */

#include <efi.h>
#include <efilib.h>
#include <wchar.h>


EFI_STATUS EFIAPI efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
    InitializeLib(ImageHandle, SystemTable);

    uefi_call_wrapper(ST->ConOut->ClearScreen, 1, ST->ConOut);
    Print(L"Welcome to Jonny's amazing EFI bootloader\n");
    Print(L"UEFI version:    %d.%02d\n", ST->Hdr.Revision >> 16, ST->Hdr.Revision & 0xffff);
    Print(L"Firmware vendor:  %s\n", SystemTable->FirmwareVendor);
    Print(L"Firmware version: %d\n", SystemTable->FirmwareRevision);

    return EFI_SUCCESS;
}

