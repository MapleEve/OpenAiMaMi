// win 1.2.7 | module src/core/repository.rs | ea 0x140288b80 | name sub_140288B80
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
char __fastcall sub_140288B80(__int64 a1, char *a2)
{
  __int64 v4; // rcx
  char *v5; // rdx
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  char v9; // al
  char v10; // al
  __int64 v11; // rax
  char v12; // al
  char v13; // al

  if ( *(_QWORD *)(a1 + 176) != *((_QWORD *)a2 + 22)
    || *(_QWORD *)(a1 + 160) != *((_QWORD *)a2 + 20)
    || (unsigned int)sub_1418F4B70(*(_QWORD *)(a1 + 152), *((_QWORD *)a2 + 19))
    || *(_BYTE *)(a1 + 184) != a2[184] )
  {
    return 0;
  }
  v4 = a1;
  v5 = a2;
  v6 = *((_QWORD *)a2 + 2);
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    if ( (_DWORD)v6 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v6 == 2 )
      return 0;
    v7 = sub_1402848C0(a1 + 16, (double *)a2 + 2);
    v4 = a1;
    v5 = a2;
    if ( !v7 )
      return 0;
  }
  v8 = *((_QWORD *)v5 + 7);
  if ( *(_DWORD *)(v4 + 56) == 2 )
  {
    if ( (_DWORD)v8 != 2 )
      return 0;
  }
  else
  {
    if ( (_DWORD)v8 == 2 )
      return 0;
    v9 = sub_1402848C0(v4 + 56, (double *)v5 + 7);
    v4 = a1;
    v5 = a2;
    if ( !v9 )
      return 0;
  }
  v10 = v5[168];
  if ( *(_DWORD *)(v4 + 168) == 1 )
  {
    if ( !v10 || *(_DWORD *)(v4 + 172) != *((_DWORD *)v5 + 43) )
      return 0;
  }
  else if ( v10 )
  {
    return 0;
  }
  v11 = *((_QWORD *)v5 + 12);
  if ( *(_DWORD *)(v4 + 96) == 2 )
  {
    if ( (_DWORD)v11 == 2 )
      goto LABEL_25;
    return 0;
  }
  if ( (_DWORD)v11 == 2 )
    return 0;
  v12 = sub_140287AB0(v4 + 96, v5 + 96);
  v4 = a1;
  v5 = a2;
  if ( !v12 )
    return 0;
LABEL_25:
  v13 = *v5;
  if ( *(_BYTE *)v4 )
  {
    if ( v13 )
      return *(_QWORD *)(v4 + 8) == *((_QWORD *)v5 + 1);
    return 0;
  }
  return v13 ^ 1;
}
