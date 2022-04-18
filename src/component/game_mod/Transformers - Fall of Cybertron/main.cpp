auto bd_log_message(enum bdLogMessageType type, const char* baseChannel, const char* channel, const char* file, const char* function, unsigned int line, const char* format, ...) -> void
{
  static char message[32768];
  static char message_buffer[32768];

  va_list ap;
  va_start(ap, format);
 _vsnprintf_s(message_buffer, sizeof(message_buffer), format, ap);
  va_end(ap);
 _snprintf_s(message, sizeof(message), "bdLog: %s(%s%s): %s\n", "", baseChannel, function, message_buffer);

  OutputDebugString(message);
};

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if (fdwReason != DLL_PROCESS_ATTACH)
    return TRUE;

#ifdef _SCYLLA
  MessageBox(nullptr, L"Attach to running processes with the Visual Studio debugger", L"...", MB_ICONINFORMATION);
#endif

  DetourFunction(reinterpret_cast<unsigned char*>(0x00F34B00), reinterpret_cast<unsigned char*>(&bd_log_message));
  DisableThreadLibraryCalls(hinstDLL);
  return TRUE;
}
