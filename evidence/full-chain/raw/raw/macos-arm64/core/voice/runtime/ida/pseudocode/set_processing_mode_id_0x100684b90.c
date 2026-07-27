// __ZN13codexmate_lib4core5voice7runtime22set_processing_mode_id @ 0x100684b90 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::runtime::set_processing_mode_id::h11f47356e6333cae(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int8 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int32 v9; // ecx
  unsigned int v10; // edx
  int v11; // eax
  char v12; // r12
  _QWORD v14[4]; // [rsp+10h] [rbp-5D0h] BYREF
  _BYTE __src[680]; // [rsp+30h] [rbp-5B0h] BYREF
  _QWORD v16[4]; // [rsp+2D8h] [rbp-308h] BYREF
  _BYTE __dst[680]; // [rsp+2F8h] [rbp-2E8h] BYREF
  __int64 v18; // [rsp+5A0h] [rbp-40h]
  __int64 v19; // [rsp+5A8h] [rbp-38h]
  __int64 v20; // [rsp+5B0h] [rbp-30h]

  codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(v14, a2); /*0x100684bb7*/
  v18 = v14[1]; /*0x100684bca*/
  v19 = v14[2]; /*0x100684bd5*/
  v20 = v14[3]; /*0x100684be0*/
  if ( v14[0] != 2 ) /*0x100684be8*/
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x100684c3b*/
    v16[1] = v18; /*0x100684c48*/
    v16[2] = v19; /*0x100684c4f*/
    v16[3] = v20; /*0x100684c5a*/
    v16[0] = v14[0]; /*0x100684c61*/
    if ( a4 == 4 ) /*0x100684c6c*/
    {
      v7 = a3[1]; /*0x100684c72*/
      v8 = a3[2]; /*0x100684c76*/
      if ( v8 == 6 ) /*0x100684c7e*/
      {
        v12 = (*(_DWORD *)v7 ^ 0x69766572 | *(unsigned __int16 *)(v7 + 4) ^ 0x7765) == 0; /*0x100684cfa*/
      }
      else
      {
        if ( v8 != 7 ) /*0x100684c84*/
        {
          a4 = 1; /*0x100684c86*/
          if ( v8 == 9 ) /*0x100684c8d*/
            a4 = (*(_QWORD *)v7 ^ 0x6F69746174636964LL | *(unsigned __int8 *)(v7 + 8) ^ 0x6ELL) != 0; /*0x100684ca7*/
          goto LABEL_15; /*0x100684cab*/
        }
        v9 = _byteswap_ulong(*(_DWORD *)v7); /*0x100684caf*/
        v10 = 1937075565; /*0x100684cb1*/
        if ( v9 != 1937075565 /*0x100684cd0*/
          || (v9 = _byteswap_ulong(*(_DWORD *)(v7 + 3)), v10 = 1835102841, v11 = 0, v9 != 1835102841) )
        {
          v11 = 2 * (v9 >= v10) - 1; /*0x100684cd9*/
        }
        v12 = 2 * (v11 == 0); /*0x100684ce3*/
      }
      a4 = v12 + 1; /*0x100684cfe*/
    }
LABEL_15:
    v14[0] = 0x8000000000000000LL; /*0x100684d01*/
    codexmate_lib::core::voice::runtime::update_settings_internal::h84dae0cf7084379f( /*0x100684d30*/
      (_DWORD)a1,
      a2,
      __dst[665],
      (unsigned int)v14,
      __dst[667],
      a4,
      (__int64)a3);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceRuntimeStatusPayload$GT$::hf84278f7de36477f(v16); /*0x100684d3c*/
    return a1; /*0x100684d3c*/
  }
  a1[3] = v20; /*0x100684bee*/
  v6 = v18; /*0x100684bf2*/
  a1[2] = v19; /*0x100684bfa*/
  a1[1] = v6; /*0x100684bfe*/
  *a1 = 2; /*0x100684c02*/
  if ( *a3 ) /*0x100684c09*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], *a3, 1); /*0x100684c1e*/
  return a1; /*0x100684d44*/
}