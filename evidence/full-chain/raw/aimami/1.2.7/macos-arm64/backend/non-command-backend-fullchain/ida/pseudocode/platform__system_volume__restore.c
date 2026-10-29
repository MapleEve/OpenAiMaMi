// aimami 1.2.7 mac truly_undone deep reverse — cluster platform/system_volume/restore
// session <审计会话> (read-only IDB, server-side write, no MCP truncation surface)

// ===== codexmate_lib::platform::system_volume::restore::hd2003b12d6919d53 @ 0x1003dd130 size=63 lines=8 =====
__int64 codexmate_lib::platform::system_volume::restore::hd2003b12d6919d53()
{
  if ( qword_101C97D28 )
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h91e5bc10aef5fab4(&codexmate_lib::platform::system_volume::VOLUME_WORKER::h08c3a02ae82afc28);
  return std::sync::mpmc::Sender$LT$T$GT$::send::h723bc9a79f0c3323(
           &codexmate_lib::platform::system_volume::VOLUME_WORKER::h08c3a02ae82afc28,
           1);
}

