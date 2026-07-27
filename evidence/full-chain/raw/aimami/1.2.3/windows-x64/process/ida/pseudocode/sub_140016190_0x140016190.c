// module: codexmate_lib/platform/process
// addr: 0x140016190
// name: sub_140016190
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140016190(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  bool v3; // cf
  __int64 v4; // rcx
  __int64 result; // rax
  signed __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-20h]
  __int64 v22; // [rsp+28h] [rbp-18h]
  _QWORD *v23; // [rsp+30h] [rbp-10h]
  unsigned __int64 v24; // [rsp+30h] [rbp-10h]

  v2 = *a1;
  v3 = v2 < 2;
  v4 = v2 - 2;
  result = 2;
  if ( !v3 )
    result = v4;
  switch ( result )
  {
    case 0LL:
      return sub_140018650(a1 + 1);
    case 1LL:
      v9 = (_QWORD *)a1[1];
      v23 = v9;
      if ( *v9 == 1 )
      {
        sub_140018650(v9 + 1);
      }
      else if ( !*v9 )
      {
        v10 = v9[2];
        if ( v10 )
          sub_140001660(v9[1], v10, 1);
      }
      v6 = 40;
      v8 = 8;
      v7 = v23;
      return sub_140001660(v7, v6, v8);
    case 2LL:
      v15 = a1[3];
      if ( v15 )
        sub_140001660(a1[4], v15, 1);
      v16 = a1[9];
      if ( v16 != -1 && v16 )
        sub_140001660(a1[10], v16, 1);
      v17 = a1[7];
      v18 = a1[8];
      if ( v18 )
      {
        v19 = (_QWORD *)(v17 + 8);
        do
        {
          v20 = *(v19 - 1);
          if ( v20 )
            sub_140001660(*v19, v20, 1);
          v19 += 3;
          --v18;
        }
        while ( v18 );
      }
      result = a1[6];
      if ( result )
        return sub_140001660(v17, 24 * result, 8);
      return result;
    case 3LL:
      v6 = a1[1];
      result = 0x8000000000000005uLL;
      if ( v6 < (__int64)0x8000000000000005uLL )
        return result;
      goto LABEL_5;
    case 4LL:
      v24 = a1[1];
      if ( *(_WORD *)(v24 + 88) == 3 )
      {
        v11 = *(_QWORD *)(v24 + 96);
        if ( v11 )
          (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(v11 + 32))(
            v24 + 120,
            *(_QWORD *)(v24 + 104),
            *(_QWORD *)(v24 + 112));
      }
      v12 = (__int64 *)v24;
      v21 = *(_QWORD *)(v24 + 128);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v24 + 136);
        if ( *(_QWORD *)v22 )
          (*(void (__fastcall **)(__int64))v22)(v21);
        v13 = *(_QWORD *)(v22 + 8);
        v12 = (__int64 *)v24;
        if ( v13 )
          sub_140001660(v21, v13, *(_QWORD *)(v22 + 16));
      }
      v14 = *v12;
      if ( *v12 != -1 && v14 )
        sub_140001660(v12[1], v14, 1);
      return sub_140001660(v12, 144, 8);
    default:
      v6 = a1[1];
LABEL_5:
      if ( v6 )
      {
        v7 = (_QWORD *)a1[2];
        v8 = 1;
        return sub_140001660(v7, v6, v8);
      }
      return result;
  }
}