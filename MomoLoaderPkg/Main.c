#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS EFIAPI UefiMain(
  EFI_HANDLE image_handel,
  EFI_SYSTEM_TABLE *system_table){
    Print(L"Hello, Momo World!\n");
    while (1);
    return EFI_SUCCESS;
}