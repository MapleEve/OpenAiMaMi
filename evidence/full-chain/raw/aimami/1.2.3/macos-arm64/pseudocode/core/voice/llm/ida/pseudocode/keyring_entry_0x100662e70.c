// __ZN13codexmate_lib4core5voice3llm13keyring_entry @ 0x100662e70 | 基线 same-set
void __fastcall codexmate_lib::core::voice::llm::keyring_entry::h298f9575b492acea(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(); // rcx
  _QWORD v6[3]; // [rsp+0h] [rbp-D0h] BYREF
  _QWORD *v7; // [rsp+18h] [rbp-B8h] BYREF
  __int128 v8; // [rsp+20h] [rbp-B0h]
  __int64 v9; // [rsp+30h] [rbp-A0h]
  __int64 v10; // [rsp+38h] [rbp-98h]
  __int64 v11; // [rsp+40h] [rbp-90h]
  _QWORD v12[2]; // [rsp+48h] [rbp-88h] BYREF
  __int64 v13; // [rsp+58h] [rbp-78h] BYREF
  __int64 v14; // [rsp+60h] [rbp-70h]
  __int64 v15; // [rsp+68h] [rbp-68h]
  _QWORD *v16; // [rsp+70h] [rbp-60h] BYREF
  __int128 v17; // [rsp+78h] [rbp-58h]
  __int64 v18; // [rsp+88h] [rbp-48h]
  __int64 v19; // [rsp+90h] [rbp-40h]
  __int64 v20; // [rsp+98h] [rbp-38h]
  _QWORD *v21; // [rsp+A0h] [rbp-30h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+A8h] [rbp-28h]
  __int64 v23; // [rsp+B0h] [rbp-20h]

  v12[0] = a2; /*0x100662e83*/
  v12[1] = a3; /*0x100662e8a*/
  v16 = v12; /*0x100662e95*/
  *(_QWORD *)&v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100662ea0*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v13, &unk_1017BC71B, &v16); /*0x100662eb6*/
  v3 = v14; /*0x100662ebb*/
  keyring::Entry::new::h7dcc9030fccf001b(&v7, "dev.aimami.desktop.voice.llm<think>doubao", 28, v14, v15); /*0x100662ed9*/
  if ( v7 == (_QWORD *)0x8000000000000007LL ) /*0x100662eef*/
  {
    *(_OWORD *)(a1 + 8) = v8; /*0x100662ef8*/
    *(_QWORD *)a1 = 11; /*0x100662efd*/
    v4 = v13; /*0x100662f04*/
    if ( !v13 ) /*0x100662f0b*/
      return; /*0x100662f0b*/
  }
  else
  {
    v20 = v11; /*0x100662f2f*/
    v19 = v10; /*0x100662f3a*/
    v18 = v9; /*0x100662f45*/
    v17 = v8; /*0x100662f62*/
    v16 = v7; /*0x100662f66*/
    v21 = &v16; /*0x100662f6a*/
    v22 = _$LT$keyring..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h70402bfb44a0dc57; /*0x100662f75*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v6, &loc_1017C2D7F, &v21); /*0x100662f8b*/
    v21 = (_QWORD *)v6[0]; /*0x100662f9e*/
    v22 = (__int64 (__fastcall *)())v6[1]; /*0x100662fa2*/
    v23 = v6[2]; /*0x100662fad*/
    core::ptr::drop_in_place$LT$keyring..error..Error$GT$::hc4c378876bea7ebc(&v16); /*0x100662fb5*/
    *(_QWORD *)a1 = 10; /*0x100662fba*/
    v5 = v22; /*0x100662fc5*/
    *(_QWORD *)(a1 + 8) = v21; /*0x100662fc9*/
    *(_QWORD *)(a1 + 16) = v5; /*0x100662fcd*/
    *(_QWORD *)(a1 + 24) = v23; /*0x100662fd5*/
    v4 = v13; /*0x100662fd9*/
    if ( !v13 ) /*0x100662fe0*/
      return; /*0x100662fe0*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v4, 1); /*0x100662f15*/
}