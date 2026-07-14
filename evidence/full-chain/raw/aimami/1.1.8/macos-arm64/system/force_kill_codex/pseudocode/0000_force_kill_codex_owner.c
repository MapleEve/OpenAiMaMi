// mac 1.1.8 force_kill_codex node va=0x1006cab30 depth=0
// force_kill_codex_owner
__int64 __fastcall codexmate_lib::commands::system::force_kill_codex::hd9826f4b47b8fdbc(__int64 a1)
{
  int v1; // r14d
  __int128 v2; // kr00_16
  _QWORD v4[12]; // [rsp+8h] [rbp-148h] BYREF
  _DWORD v5[24]; // [rsp+68h] [rbp-E8h] BYREF
  _QWORD v6[3]; // [rsp+C8h] [rbp-88h] BYREF
  __int128 v7; // [rsp+E0h] [rbp-70h]
  __int64 v8; // [rsp+F0h] [rbp-60h]
  _BYTE v9[28]; // [rsp+100h] [rbp-50h]
  _BYTE v10[24]; // [rsp+120h] [rbp-30h] BYREF
  _BYTE v11[17]; // [rsp+13Fh] [rbp-11h] BYREF

  codexmate_lib::platform::process::force_kill_all_codex_processes::hdd3d3240bcead249(v5); /*0x1006cab48*/
  if ( v5[0] == 10 ) /*0x1006cab54*/
  {
    v8 = *(_QWORD *)&v5[7]; /*0x1006cab63*/
    *(_QWORD *)v9 = *(_QWORD *)&v5[3]; /*0x1006cab7b*/
    *(_QWORD *)&v9[8] = *(_QWORD *)&v5[5]; /*0x1006cab7f*/
    *(_QWORD *)&v9[16] = *(_QWORD *)&v5[7]; /*0x1006cab83*/
    *(_DWORD *)&v9[24] = v5[9]; /*0x1006cab87*/
    *(_OWORD *)&v4[1] = *(_OWORD *)&v9[12]; /*0x1006cab99*/
    v4[0] = *(_QWORD *)&v9[4]; /*0x1006caba4*/
    LODWORD(v4[3]) = v5[2]; /*0x1006cabab*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h908b53d4c3a52143(a1, v4); /*0x1006cabbb*/
  }
  else
  {
    qmemcpy(v4, v5, sizeof(v4)); /*0x1006cabdb*/
    *(_QWORD *)v10 = 0; /*0x1006cabde*/
    *(_QWORD *)&v10[8] = 1; /*0x1006cabe6*/
    *(_QWORD *)&v10[16] = 0; /*0x1006cabee*/
    v6[2] = 1610612768; /*0x1006cabf6*/
    v6[0] = v10; /*0x1006cac02*/
    v6[1] = &anon_e90f81edc9eb47f28b006fedbc3b914a_187; /*0x1006cac10*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x1006cac1e*/
                            v4,
                            v6) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006cacac*/
        &anon_e90f81edc9eb47f28b006fedbc3b914a_188,
        55,
        v11,
        &anon_e90f81edc9eb47f28b006fedbc3b914a_201,
        &anon_e90f81edc9eb47f28b006fedbc3b914a_190);
    v1 = *(_DWORD *)v10; /*0x1006cac27*/
    v7 = *(_OWORD *)&v10[4]; /*0x1006cac2f*/
    LODWORD(v8) = *(_DWORD *)&v10[20]; /*0x1006cac3e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v5); /*0x1006cac48*/
    *(_DWORD *)&v9[16] = v8; /*0x1006cac50*/
    v2 = v7; /*0x1006cac57*/
    *(_OWORD *)v9 = v7; /*0x1006cac5f*/
    *(_DWORD *)(a1 + 28) = v8; /*0x1006cac63*/
    *(_OWORD *)(a1 + 12) = v2; /*0x1006cac6a*/
    *(_DWORD *)(a1 + 8) = v1; /*0x1006cac6e*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006cac7c*/
  }
  return a1; /*0x1006cac82*/
}