// __ZN13codexmate_lib8platform14audio_feedback14restore_volume @ 0x10035a390 | 基线 same-set
__int64 codexmate_lib::platform::audio_feedback::restore_volume::h57816de92cf42a19()
{
  if ( qword_1019FF088 ) /*0x10035a39a*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hb43fbf08bf63748c(&codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce); /*0x10035a3b8*/
  return std::sync::mpmc::Sender$LT$T$GT$::send::h22e3779823916dcc(
           &codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce,
           1);
}