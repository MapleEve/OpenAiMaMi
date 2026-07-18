// mac 1.2.2 NEW write_client_debug_log 0x100a3af60 d=0
__int64 __fastcall codexmate_lib::commands::debug_bundle::write_client_debug_log::ha1bd8279c4305f6b(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // r12
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 result; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-68h] BYREF
  _QWORD v19[4]; // [rsp+50h] [rbp-50h] BYREF
  __int64 v20; // [rsp+70h] [rbp-30h]

  v19[2] = a1[2]; /*0x100a3af75*/
  v1 = *a1; /*0x100a3af79*/
  v19[1] = a1[1]; /*0x100a3af80*/
  v19[0] = v1; /*0x100a3af84*/
  v18[2] = a1[5]; /*0x100a3af8c*/
  v2 = a1[3]; /*0x100a3af90*/
  v18[1] = a1[4]; /*0x100a3af98*/
  v18[0] = v2; /*0x100a3af9c*/
  v17[2] = a1[8]; /*0x100a3afa4*/
  v3 = a1[6]; /*0x100a3afa8*/
  v17[1] = a1[7]; /*0x100a3afb0*/
  v17[0] = v3; /*0x100a3afb4*/
  v4 = a1[9]; /*0x100a3afb8*/
  v5 = a1[10]; /*0x100a3afbc*/
  v6 = 0; /*0x100a3afc0*/
  v7 = v5; /*0x100a3afc8*/
  if ( __OFSUB__(-v4, 1) ) /*0x100a3afc5*/
    v7 = 0; /*0x100a3afcb*/
  v8 = a1[11]; /*0x100a3afcf*/
  v9 = a1[12]; /*0x100a3afd3*/
  v10 = a1[13]; /*0x100a3afdd*/
  v11 = v10; /*0x100a3afe1*/
  if ( __OFSUB__(-v9, 1) ) /*0x100a3afda*/
    v11 = 0; /*0x100a3afe4*/
  v12 = a1[14]; /*0x100a3afe8*/
  v13 = a1[15]; /*0x100a3afec*/
  v14 = a1[16]; /*0x100a3aff6*/
  v15 = a1[17]; /*0x100a3affd*/
  v20 = v14; /*0x100a3b004*/
  if ( !__OFSUB__(-v13, 1) ) /*0x100a3b008*/
    v6 = v14; /*0x100a3b008*/
  codexmate_lib::platform::debug_log::write_client_event::hafeaa1ab68966ea2( /*0x100a3b026*/
    (unsigned int)v19,
    (unsigned int)v18,
    (unsigned int)v17,
    v7,
    v8,
    v11,
    v12,
    v6,
    v15);
  if ( 2 * v4 ) /*0x100a3b02b*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x100a3b06c*/
    if ( !(2 * v9) ) /*0x100a3b07c*/
    {
LABEL_9:
      result = 2 * v13; /*0x100a3b045*/
      if ( !(2 * v13) ) /*0x100a3b045*/
        return result; /*0x100a3b050*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v13, 1); /*0x100a3b0a7*/
    }
  }
  else if ( !(2 * v9) ) /*0x100a3b038*/
  {
    goto LABEL_9; /*0x100a3b043*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100a3b089*/
  result = 2 * v13; /*0x100a3b08e*/
  if ( 2 * v13 ) /*0x100a3b08e*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v13, 1); /*0x100a3b099*/
  return result; /*0x100a3b052*/
}