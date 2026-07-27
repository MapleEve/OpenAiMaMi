// win 1.2.1 | module src/core/relay/codex_runtime.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140992B80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h]
  __int128 v9; // [rsp+30h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp-18h]
  __int128 v14; // [rsp+80h] [rbp+0h]
  __int128 v15; // [rsp+90h] [rbp+10h]
  __int128 v16; // [rsp+A0h] [rbp+20h]
  __int128 v17; // [rsp+B0h] [rbp+30h]
  __int128 v18; // [rsp+C0h] [rbp+40h]
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF
  _QWORD v20[9]; // [rsp+D8h] [rbp+58h] BYREF

  v20[1] = -2; /*0x140992b9b*/
  v19 = a1; /*0x140992ba6*/
  v20[0] = a2; /*0x140992baa*/
  while ( 1 ) /*0x140992bdf*/
  {
    sub_140A67BD0(&v7, &v19); /*0x140992bdf*/
    v4 = v7; /*0x140992be5*/
    if ( v7 != -1 ) /*0x140992bed*/
    {
      v5 = v8; /*0x140992bef*/
      v15 = v11; /*0x140992c02*/
      v14 = v10; /*0x140992c06*/
      *(_OWORD *)&v13[8] = v9; /*0x140992c0a*/
      v12 = v7; /*0x140992c0d*/
      *(_QWORD *)v13 = v8; /*0x140992c11*/
      v18 = v9; /*0x140992c18*/
      v16 = v10; /*0x140992c24*/
      v17 = v11; /*0x140992c28*/
      goto LABEL_7; /*0x140992c2c*/
    }
    if ( !v20[0] ) /*0x140992c35*/
      break; /*0x140992c35*/
    sub_14042B0E0(&v12, v20, 1); /*0x140992c4b*/
    v4 = v12; /*0x140992c51*/
    v5 = *(_QWORD *)v13; /*0x140992c55*/
    v18 = *(_OWORD *)&v13[8]; /*0x140992c5c*/
    v17 = v15; /*0x140992c68*/
    v16 = v14; /*0x140992c6c*/
    if ( v12 == -2 ) /*0x140992c74*/
      break; /*0x140992c74*/
LABEL_7:
    v15 = v17; /*0x140992c76*/
    v14 = v16; /*0x140992c82*/
    v12 = v4; /*0x140992c86*/
    *(_QWORD *)v13 = v5; /*0x140992c8a*/
    *(_OWORD *)&v13[8] = v18; /*0x140992c92*/
    if ( v4 == -1 ) /*0x140992c99*/
    {
      if ( v5 != -1 ) /*0x140992ca3*/
      {
        *(_OWORD *)v13 = v18; /*0x140992cad*/
        v12 = v5; /*0x140992cb1*/
        sub_140474440(a3, &v12); /*0x140992cbb*/
      }
    }
    else
    {
      sub_140982F30(&v12); /*0x140992bd3*/
    }
  }
  return sub_140982E20(&v19); /*0x140992cd0*/
}