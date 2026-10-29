// win 1.2.7 | module src/core/relay/manager.rs | ea 0x140d8b880 | name sub_140D8B880
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140D8B880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rdi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 v11; // r15
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // [rsp+28h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-48h]
  __int128 v17; // [rsp+48h] [rbp-38h]
  __int128 v18; // [rsp+58h] [rbp-28h]
  __int128 v19; // [rsp+68h] [rbp-18h]
  __int128 v20; // [rsp+78h] [rbp-8h]
  __int64 v21; // [rsp+88h] [rbp+8h]
  __int128 v22; // [rsp+90h] [rbp+10h]
  __int128 v23; // [rsp+A0h] [rbp+20h]
  __int128 v24; // [rsp+B0h] [rbp+30h]
  __int128 v25; // [rsp+C0h] [rbp+40h]
  __int128 v26; // [rsp+D0h] [rbp+50h]
  __int128 v27; // [rsp+E0h] [rbp+60h]
  __int128 v28; // [rsp+F0h] [rbp+70h]
  __int128 v29; // [rsp+100h] [rbp+80h]
  __int64 v30; // [rsp+110h] [rbp+90h]

  v30 = -2;
  v5 = a2 + 16;
  sub_1410257E0(&v15);
  v7 = *((_QWORD *)&v15 + 1);
  result = v15;
  v26 = v16;
  v27 = v17;
  v28 = v18;
  v29 = v19;
  if ( (_QWORD)v15 != -1 )
  {
    *(_OWORD *)(a1 + 80) = v20;
    v8 = v26;
    v9 = v27;
    v10 = v28;
    *(_OWORD *)(a1 + 64) = v29;
    *(_OWORD *)(a1 + 48) = v10;
    *(_OWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 16) = v8;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v7;
    return result;
  }
  if ( *((_QWORD *)&v15 + 1) == -1 )
    goto LABEL_11;
  v21 = *((_QWORD *)&v15 + 1);
  v22 = v26;
  v23 = v27;
  v24 = v28;
  v25 = v29;
  if ( *((_QWORD *)&v26 + 1) != 10
    || (v11 = v22, result = *(_QWORD *)v22 ^ 0x697474696D6D6F63LL, result | *(unsigned __int16 *)(v22 + 8) ^ 0x676ELL)
    || (result = sub_140F70560(&v15, v5, a3), (_DWORD)v15 == -1) )
  {
    if ( v7 )
      result = sub_140001660(v22, v7, 1);
    if ( (_QWORD)v23 != -1 )
    {
      if ( (_QWORD)v23 )
        result = sub_140001660(*((_QWORD *)&v23 + 1), v23, 1);
    }
LABEL_11:
    *(_QWORD *)a1 = -1;
    return result;
  }
  *(_OWORD *)(a1 + 80) = v20;
  *(_OWORD *)(a1 + 64) = v19;
  v12 = v15;
  v13 = v16;
  v14 = v17;
  *(_OWORD *)(a1 + 48) = v18;
  *(_OWORD *)(a1 + 32) = v14;
  *(_OWORD *)(a1 + 16) = v13;
  *(_OWORD *)a1 = v12;
  if ( v7 )
    result = sub_140001660(v11, v7, 1);
  if ( (_QWORD)v23 != -1 && (_QWORD)v23 )
    return sub_140001660(*((_QWORD *)&v23 + 1), v23, 1);
  return result;
}
