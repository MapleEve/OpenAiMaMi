// module: codexmate_lib/core/relay/keychain
// addr: 0x14032b150
// name: sub_14032B150
// win 1.2.1 | module src/core/relay/keychain.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_14032B150(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rbx

  v2 = *a2;
  v3 = a2[1] - *a2;
  if ( v3 < 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( v3 )
  {
    v6 = a1;
    nullsub_1(a1);
    v4 = 1;
    v7 = sub_140001650(v3, 1);
    if ( !v7 )
LABEL_3:
      sub_1416C2D4B(v4, v3);
    v9 = v7;
    v10 = a2[2];
    v11 = a2[3];
    v12 = 0;
    a1 = v6;
    do
    {
      v13 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        sub_1416C33E0(&off_1417A5390, v8, v10);
      if ( (v13 | (v10 + v12)) >> 32 )
        v8 = (v10 + v12) % v13;
      else
        v8 = ((int)v10 + (int)v12) % (unsigned int)v13;
      *(_BYTE *)(v7 + v12) = *(_BYTE *)(*(_QWORD *)(v11 + 8) + v8) ^ *(_BYTE *)(v2 + v12);
      ++v12;
    }
    while ( v3 != v12 );
  }
  else
  {
    v9 = 1;
  }
  *a1 = v3;
  a1[1] = v9;
  a1[2] = v3;
  return a1;
}