// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x100529a60 depth=1
// codexmate_lib4core10repository10Repository18auto_switch_config
__int64 __fastcall codexmate_lib::core::repository::Repository::auto_switch_config::ha63a42fc96cbe185(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  char v3; // al
  int v4; // edx
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-D0h] BYREF
  _BYTE v8[80]; // [rsp+8h] [rbp-C8h] BYREF
  _QWORD v9[10]; // [rsp+60h] [rbp-70h] BYREF
  __int64 v10; // [rsp+B0h] [rbp-20h] BYREF
  int v11; // [rsp+B8h] [rbp-18h]

  codexmate_lib::core::repository::Repository::load_registry::h7984350630216c09(&v7, a2); /*0x100529a78*/
  if ( (_DWORD)v7 != 10 ) /*0x100529a84*/
  {
    v10 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100529ad3*/
    v11 = v4; /*0x100529ad7*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)v9, (__int64)&v10, 0, 0); /*0x100529ae6*/
    v2 = 0; /*0x100529aeb*/
    v5 = 0; /*0x100529af2*/
    if ( !LOBYTE(v9[0]) ) /*0x100529af7*/
      v5 = v9[1]; /*0x100529af9*/
    HIDWORD(v9[8]) = 2; /*0x100529afd*/
    v9[6] = v5; /*0x100529b04*/
    v9[3] = 0x8000000000000000LL; /*0x100529b12*/
    v9[0] = 0; /*0x100529b16*/
    v9[1] = 8; /*0x100529b1e*/
    v9[2] = 0; /*0x100529b26*/
    v9[7] = 0; /*0x100529b2e*/
    LOBYTE(v9[8]) = 0; /*0x100529b36*/
    LOBYTE(v9[9]) = 1; /*0x100529b3a*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v7); /*0x100529b45*/
    v3 = 0; /*0x100529b4a*/
    goto LABEL_7; /*0x100529b4a*/
  }
  qmemcpy(v9, v8, sizeof(v9)); /*0x100529a96*/
  v2 = v9[7]; /*0x100529a99*/
  v3 = v9[8]; /*0x100529a9d*/
  LOWORD(v10) = *(_WORD *)&v8[65]; /*0x100529aa8*/
  BYTE2(v10) = v8[67]; /*0x100529ab3*/
  if ( LOBYTE(v9[8]) != 2 ) /*0x100529ab8*/
  {
LABEL_7:
    *(_QWORD *)a1 = v2; /*0x100529b4c*/
    *(_BYTE *)(a1 + 8) = v3; /*0x100529b4f*/
    *(_WORD *)(a1 + 9) = v10; /*0x100529b56*/
    *(_BYTE *)(a1 + 11) = BYTE2(v10); /*0x100529b5e*/
    goto LABEL_8; /*0x100529b5e*/
  }
  *(_BYTE *)(a1 + 8) = 0; /*0x100529abe*/
  *(_QWORD *)a1 = 0; /*0x100529ac2*/
LABEL_8:
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(v9); /*0x100529b61*/
  return a1; /*0x100529b6d*/
}