// module: codexmate_lib/core/relay/codex_thread_visibility
// addr: 0x140992650
// name: sub_140992650
// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140992650(__int128 *a1, __int64 a2)
{
  __int64 *v3; // r13
  __int64 v4; // rcx
  bool v5; // zf
  __int64 *v6; // rcx
  __int128 v7; // xmm1
  __int128 v9; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-50h]
  __int128 v11; // [rsp+40h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-30h]
  __int128 v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+70h] [rbp-10h]
  __int128 v15; // [rsp+80h] [rbp+0h]
  __int64 v16; // [rsp+90h] [rbp+10h]
  __int128 v17; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF
  __m512i v19; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+100h] [rbp+80h]
  __int64 *v21; // [rsp+108h] [rbp+88h]
  __int64 v22; // [rsp+110h] [rbp+90h]

  v22 = -2;
  v17 = *a1;
  v18 = *((_QWORD *)a1 + 2);
  v3 = (__int64 *)v17;
  while ( 1 )
  {
    sub_140A67BD0(&v9, (char *)&v17 + 8);
    v4 = v9;
    if ( (_QWORD)v9 != -1 )
      break;
    if ( !v18 )
      return sub_140982E20((char *)&v17 + 8);
    sub_14042B0E0(&v19, &v18, 1);
    v4 = v19.m512i_i64[0];
    v13 = *(_OWORD *)&v19.m512i_u64[1];
    v14 = *(_OWORD *)&v19.m512i_u64[3];
    v15 = *(_OWORD *)&v19.m512i_u64[5];
    v16 = v19.m512i_i64[7];
    if ( v19.m512i_i64[0] == -2 )
      return sub_140982E20((char *)&v17 + 8);
    v19.m512i_i64[6] = v16;
    *(_OWORD *)&v19.m512i_u64[4] = v15;
    *(_OWORD *)&v19.m512i_u64[2] = v14;
    *(_OWORD *)v19.m512i_i8 = v13;
    if ( v4 != -1 )
      goto LABEL_8;
    *(_QWORD *)&v10 = v14;
    v9 = v13;
    sub_140474440(a2, &v9);
  }
  *(_OWORD *)&v19.m512i_u64[6] = v12;
  *(_OWORD *)&v19.m512i_u64[4] = v11;
  *(_OWORD *)&v19.m512i_u64[2] = v10;
  v19.m512i_i64[1] = *((_QWORD *)&v9 + 1);
  v13 = *(_OWORD *)&v19.m512i_u64[1];
  v14 = *(_OWORD *)&v19.m512i_u64[3];
  v15 = *(_OWORD *)&v19.m512i_u64[5];
  v16 = *((_QWORD *)&v12 + 1);
  v19.m512i_i64[6] = *((_QWORD *)&v12 + 1);
  *(_OWORD *)&v19.m512i_u64[4] = v15;
  *(_OWORD *)&v19.m512i_u64[2] = v14;
  *(_OWORD *)v19.m512i_i8 = v13;
LABEL_8:
  v20 = v4;
  v5 = *v3 == -1;
  v21 = v3;
  if ( !v5 )
    sub_140982F30(v21);
  v6 = v21;
  *v21 = v20;
  *(_OWORD *)(v6 + 1) = *(_OWORD *)v19.m512i_i8;
  v6[3] = v19.m512i_i64[2];
  v7 = *(_OWORD *)&v19.m512i_u64[5];
  *((_OWORD *)v6 + 2) = *(_OWORD *)&v19.m512i_u64[3];
  *((_OWORD *)v6 + 3) = v7;
  return sub_140982E20((char *)&v17 + 8);
}