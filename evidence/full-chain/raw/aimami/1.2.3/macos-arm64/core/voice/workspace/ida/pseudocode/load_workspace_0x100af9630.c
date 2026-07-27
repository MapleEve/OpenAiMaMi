// __ZN13codexmate_lib4core5voice9workspace14load_workspace @ 0x100af9630 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::workspace::load_workspace::h3bd5764166137b0d(_QWORD *a1, __int64 a2)
{
  _BYTE v3[96]; // [rsp+0h] [rbp-190h] BYREF
  _QWORD v4[18]; // [rsp+60h] [rbp-130h] BYREF
  __int64 v5; // [rsp+F0h] [rbp-A0h] BYREF
  _BYTE v6[96]; // [rsp+F8h] [rbp-98h] BYREF
  __int64 v7; // [rsp+158h] [rbp-38h]
  __int64 v8; // [rsp+160h] [rbp-30h]
  __int64 v9; // [rsp+168h] [rbp-28h]
  __int64 v10; // [rsp+170h] [rbp-20h]
  __int64 v11; // [rsp+178h] [rbp-18h]

  codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v4, a2); /*0x100af964b*/
  qmemcpy(v3, &v4[1], sizeof(v3)); /*0x100af9670*/
  if ( __OFSUB__(-v4[0], 1) ) /*0x100af965a*/
  {
    qmemcpy(a1 + 1, v3, 0x60u); /*0x100af968f*/
    *a1 = 0x8000000000000000LL; /*0x100af9692*/
  }
  else
  {
    v11 = v4[17]; /*0x100af96a1*/
    v10 = v4[16]; /*0x100af96ac*/
    v9 = v4[15]; /*0x100af96b7*/
    v8 = v4[14]; /*0x100af96c9*/
    v7 = v4[13]; /*0x100af96cd*/
    qmemcpy(v6, v3, sizeof(v6)); /*0x100af96e4*/
    v5 = v4[0]; /*0x100af96e7*/
    codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47( /*0x100af970a*/
      v4,
      *(_QWORD *)(a2 + 536),
      *(_QWORD *)(a2 + 544),
      (__int64)&v5);
    qmemcpy(a1, v4, 0x80u); /*0x100af971e*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v5); /*0x100af9728*/
  }
  return a1; /*0x100af9730*/
}