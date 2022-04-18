auto main(int argc, char* argv[]) -> int
{
  // TODO: Support all Transformers games and add ScyllaHide injector.

#ifndef _DEBUG

  auto drives_bitmask = GetLogicalDrives();
  auto steam_application = "Transformers - Fall of Cybertron"s;
  auto current_working_directory = "C:/Program Files (x86)/steam/steamapps/common"s;

  for (auto drive = 'A'; drive <= 'Z'; ++drive, drives_bitmask >>= 1, current_working_directory = std::string(1, drive) + ":/steam/steamapps/common"s) {
    if ((drives_bitmask & 1) != 0 && std::filesystem::exists(current_working_directory))
      break;
  }

  if (!std::filesystem::exists(current_working_directory))
    return MessageBox(nullptr, "Steam must be installed to play this game.", "Fatal Error", MB_ICONERROR);

  SetCurrentDirectory(current_working_directory.c_str());

  if (!std::filesystem::exists(steam_application + "Binaries/TFOC.exe"s))
    return MessageBox(nullptr, "Transformers - Fall of Cybertron must be installed to play this game.", "Fatal Error", MB_ICONERROR);

#else

  OPENFILENAME file_dialog{};
  CHAR file[MAX_PATH]{};

  SecureZeroMemory(&file_dialog, sizeof(OPENFILENAME));
  SecureZeroMemory(&file, sizeof(CHAR) * MAX_PATH);

  file_dialog.lStructSize     = sizeof(OPENFILENAME);
  file_dialog.hwndOwner       = nullptr;
  file_dialog.lpstrFile       = file;
  file_dialog.nMaxFile        = MAX_PATH;
  file_dialog.lpstrFilter     = "Transformers - Fall of Cybertron (TFOC.exe)\0TFOC.exe\0";
  file_dialog.lpstrInitialDir = NULL;
  file_dialog.lpstrDefExt     = "";
  file_dialog.Flags           = OFN_EXPLORER | OFN_ENABLESIZING | OFN_HIDEREADONLY;
  file_dialog.lpstrTitle      = "Select Transformers - Fall of Cybertron PE file.";

  if (GetOpenFileName(&file_dialog))
    ;

#endif

  return 0;
}
