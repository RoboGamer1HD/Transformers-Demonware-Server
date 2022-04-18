BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if (fdwReason != DLL_PROCESS_ATTACH)
    return TRUE;

#ifdef _SCYLLA
  MessageBox(nullptr, L"Attach to running processes with the Visual Studio debugger", L"...", MB_ICONINFORMATION);
#endif

  DisableThreadLibraryCalls(hinstDLL);
  return TRUE;
}
