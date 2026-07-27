// __ZN13codexmate_lib8platform19voice_trigger_macos39prepare_pending_modifier_trigger_locked @ 0x1005e4dc0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::voice_trigger_macos::prepare_pending_modifier_trigger_locked::hd4575969ca3d0fa7(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax

  v3 = a3[4]; /*0x1005e4dc4*/
  if ( (((unsigned __int64)(v3 - 54) < 0xA) & (unsigned __int8)(0x3F7u >> (v3 - 54))) == 1 ) /*0x1005e4de4*/
  {
    v4 = qword_101601C30[v3 - 54] | a3[6] & 0x9E0000LL; /*0x1005e4df7*/
    v5 = -1; /*0x1005e4e06*/
    if ( a2[4] != -1 ) /*0x1005e4e0d*/
      v5 = a2[4] + 1LL; /*0x1005e4e0d*/
    a2[4] = v5; /*0x1005e4e11*/
    v6 = a3[3]; /*0x1005e4e15*/
    *a2 = 1; /*0x1005e4e19*/
    a2[1] = v6; /*0x1005e4e20*/
    a2[2] = v5; /*0x1005e4e24*/
    a2[3] = v4; /*0x1005e4e28*/
    a1[1] = v6; /*0x1005e4e2c*/
    a1[2] = v5; /*0x1005e4e30*/
    *a1 = 1; /*0x1005e4e39*/
    return 1; /*0x1005e4e34*/
  }
  else
  {
    *a1 = 0; /*0x1005e4e40*/
    return 0; /*0x1005e4e3e*/
  }
}