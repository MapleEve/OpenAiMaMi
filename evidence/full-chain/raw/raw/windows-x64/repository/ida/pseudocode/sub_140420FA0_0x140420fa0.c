// module: codexmate_lib/core/repository
// addr: 0x140420fa0
// name: sub_140420FA0
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140420FA0(__int64 a1, char *a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  char *v6; // rdx
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rax
  char v13; // al

  if ( *(_QWORD *)(a1 + 144) != *((_QWORD *)a2 + 18) )
    return 0;
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 != *((_QWORD *)a2 + 17)
    || (unsigned int)sub_1416847B0(*(_QWORD *)(a1 + 128), *((_QWORD *)a2 + 16), v2)
    || *(_BYTE *)(a1 + 152) != a2[152] )
  {
    return 0;
  }
  v5 = a1;
  v6 = a2;
  v7 = *((_QWORD *)a2 + 2);
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    if ( (_DWORD)v7 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v7 == 2 )
      return 0;
    v8 = sub_14041CC20(a1 + 16, (double *)a2 + 2);
    v5 = a1;
    v6 = a2;
    if ( !v8 )
      return 0;
  }
  v9 = *((_QWORD *)v6 + 7);
  if ( *(_DWORD *)(v5 + 56) == 2 )
  {
    if ( (_DWORD)v9 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v9 == 2 )
      return 0;
    v10 = sub_14041CC20(v5 + 56, (double *)v6 + 7);
    v5 = a1;
    v6 = a2;
    if ( !v10 )
      return 0;
  }
  v11 = *(_QWORD *)(v5 + 96);
  v12 = *((_QWORD *)v6 + 12);
  if ( v11 == 2 )
  {
    if ( (_DWORD)v12 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v12 == 2 || *(_BYTE *)(v5 + 112) != v6[112] )
      return 0;
    if ( (_DWORD)v11 == 1 )
    {
      if ( (_DWORD)v12 != 1 || *(_QWORD *)(v5 + 104) != *((_QWORD *)v6 + 13) )
        return 0;
    }
    else if ( v12 )
    {
      return 0;
    }
  }
  v13 = *v6;
  if ( !*(_BYTE *)v5 )
    return v13 ^ 1;
  if ( v13 )
    return *(_QWORD *)(v5 + 8) == *((_QWORD *)v6 + 1);
  return 0;
}