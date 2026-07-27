// __ZN13codexmate_lib4core5relay18transition_journal15is_active_phase @ 0x100329db0
bool __fastcall codexmate_lib::core::relay::transition_journal::is_active_phase::h039e8a71be70e480(
        _QWORD *a1,
        __int64 a2)
{
  switch ( a2 ) /*0x100329db8*/
  {
    case 8LL: /*0x100329db8*/
      return *a1 == 0x676E697972746572LL; /*0x100329e19*/
    case 11LL: /*0x100329db8*/
      return (*a1 ^ 0x6C69636E6F636572LL | *(_QWORD *)((char *)a1 + 3) ^ 0x676E696C69636E6FLL) == 0; /*0x100329e07*/
    case 14LL: /*0x100329db8*/
      return (*a1 ^ 0x676E6970706F7473LL | *(_QWORD *)((char *)a1 + 6) ^ 0x7865646F635F676ELL) == 0; /*0x100329de4*/
  }
  return 0; /*0x100329de7*/
}