// addr=0x140763a50
// refs:
//   0x140765eb0  sub_140765EB0
//   0x14178c383  aCodexmateLibCo_29  "codexmate_lib::core::relay::codex_diagnostic"
//   0x141787466  aSrcCoreRelayCo_1  "src\core\relay\codex_diagnostic.rs"
//   0x14178c346  unk_14178C346
//   0x1412c36a0  sub_1412C36A0
//   0x141ec8d80  off_141EC8D80
//   0x140780680  sub_140780680
//   0x140001660  sub_140001660

// win 1.2.1 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140763A50(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 v5; // rax
  const char *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v10; // [rsp+2Fh] [rbp-79h] BYREF
  __int64 v11; // [rsp+30h] [rbp-78h] BYREF
  const char *v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int128 v15; // [rsp+50h] [rbp-58h]
  __int128 v16; // [rsp+60h] [rbp-48h]
  __int128 v17; // [rsp+70h] [rbp-38h]
  __int128 v18; // [rsp+80h] [rbp-28h]

  v4 = sub_140765EB0(a2); /*0x140763a68*/
  if ( !v4 ) /*0x140763a6c*/
  {
LABEL_8:
    *(_BYTE *)(a1 + 8) = v4; /*0x140763b7e*/
    v5 = -1; /*0x140763b81*/
    goto LABEL_9; /*0x140763b81*/
  }
  if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x140763a80*/
  {
    v11 = 0; /*0x140763a86*/
    v12 = aCodexmateLibCo_29; /*0x140763a96*/
    v13 = 44; /*0x140763a9b*/
    v14 = 0; /*0x140763aa4*/
    *(_QWORD *)&v15 = aSrcCoreRelayCo_1; /*0x140763ab4*/
    *((_QWORD *)&v15 + 1) = 34; /*0x140763ab9*/
    *(_QWORD *)&v16 = 3; /*0x140763ac2*/
    *((_QWORD *)&v16 + 1) = aCodexmateLibCo_29; /*0x140763acb*/
    *(_QWORD *)&v17 = 44; /*0x140763ad0*/
    *((_QWORD *)&v17 + 1) = 0x21200000001LL; /*0x140763ae3*/
    *(_QWORD *)&v18 = &unk_14178C346; /*0x140763aef*/
    *((_QWORD *)&v18 + 1) = 123; /*0x140763af7*/
    sub_1412C36A0(&v10, &v11); /*0x140763b0d*/
  }
  sub_140780680(&v11, a2); /*0x140763b1a*/
  v5 = v11; /*0x140763b1f*/
  v6 = v12; /*0x140763b24*/
  v7 = v13; /*0x140763b29*/
  if ( v11 == -1 ) /*0x140763b32*/
  {
    if ( v12 ) /*0x140763b71*/
      sub_140001660(v13, v12, 1); /*0x140763b79*/
    goto LABEL_8; /*0x140763b79*/
  }
  v8 = v14; /*0x140763b34*/
  *(_OWORD *)(a1 + 80) = v18; /*0x140763b41*/
  *(_OWORD *)(a1 + 64) = v17; /*0x140763b4a*/
  *(_OWORD *)(a1 + 48) = v16; /*0x140763b53*/
  *(_OWORD *)(a1 + 32) = v15; /*0x140763b5c*/
  *(_QWORD *)(a1 + 8) = v6; /*0x140763b60*/
  *(_QWORD *)(a1 + 16) = v7; /*0x140763b64*/
  *(_QWORD *)(a1 + 24) = v8; /*0x140763b68*/
LABEL_9:
  *(_QWORD *)a1 = v5; /*0x140763b88*/
  return a1; /*0x140763b8e*/
}
