// win 1.2.7 | module src/core/repository.rs | ea 0x1402069a0 | name sub_1402069A0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402069A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // r13
  int v12; // edi
  __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm0
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  __int128 v23; // [rsp+80h] [rbp+0h]
  __int128 v24; // [rsp+90h] [rbp+10h] BYREF
  __int128 v25; // [rsp+A0h] [rbp+20h]
  __int64 v26; // [rsp+B8h] [rbp+38h]
  __int64 v27; // [rsp+C0h] [rbp+40h]

  v27 = -2;
  v26 = a2;
  if ( a4 && (v8 = *(_QWORD *)(a4 + 16)) != 0 )
  {
    v9 = *(_QWORD *)(a4 + 8);
    v10 = 424 * v8;
    v11 = 0;
    while ( *(_QWORD *)(v9 + v11 + 208) != a6 || (unsigned int)sub_1418F4B70(*(_QWORD *)(v9 + v11 + 200), a5) )
    {
      v11 += 424;
      if ( v10 == v11 )
        goto LABEL_8;
    }
    sub_1416AB9B0(&v18, *(_QWORD *)(v9 + v11 + 224), *(_QWORD *)(v9 + v11 + 232));
    v25 = v19;
    v24 = v18;
    v12 = v26;
  }
  else
  {
LABEL_8:
    v12 = v26;
    sub_140ED6DC0((unsigned int)&v24, v26, a3, a5, a6);
  }
  v26 = *((_QWORD *)&v24 + 1);
  result = sub_140ED9AE0((unsigned int)&v18, DWORD2(v24), v25, v12, a3);
  if ( (_DWORD)v18 == -1 )
  {
    v17 = v24;
    *(_OWORD *)(a1 + 24) = v25;
    *(_OWORD *)(a1 + 8) = v17;
    *(_QWORD *)a1 = -1;
  }
  else
  {
    *(_OWORD *)(a1 + 80) = v23;
    *(_OWORD *)(a1 + 64) = v22;
    v14 = v18;
    v15 = v19;
    v16 = v20;
    *(_OWORD *)(a1 + 48) = v21;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
    if ( (_QWORD)v24 )
      return sub_140001660(v26, v24, 1);
  }
  return result;
}
