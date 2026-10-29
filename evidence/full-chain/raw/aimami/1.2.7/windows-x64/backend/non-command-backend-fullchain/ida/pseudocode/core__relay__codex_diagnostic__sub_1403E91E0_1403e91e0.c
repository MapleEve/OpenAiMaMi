// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | ea 0x1403e91e0 | name sub_1403E91E0
// win 1.2.7 | module src/core/relay/codex_diagnostic.rs | attributed via panic-Location xref (win-native)
__int64 *__fastcall sub_1403E91E0(__int64 *a1, _DWORD *a2)
{
  _BYTE *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 *result; // rax
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h]
  __int128 v9; // [rsp+30h] [rbp-50h]
  __int128 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-30h]
  __m256i v12; // [rsp+60h] [rbp-20h] BYREF
  __int128 v13; // [rsp+80h] [rbp+0h]
  __int64 v14; // [rsp+90h] [rbp+10h]
  __int64 v15; // [rsp+A0h] [rbp+20h]
  _BYTE v16[56]; // [rsp+A8h] [rbp+28h]
  __int64 v17; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v18[56]; // [rsp+E8h] [rbp+68h]
  __int64 *v19; // [rsp+120h] [rbp+A0h]
  _BYTE *v20; // [rsp+128h] [rbp+A8h]
  __int64 v21; // [rsp+130h] [rbp+B0h]

  v21 = -2;
  v19 = a1;
  v20 = a2;
  if ( *a2 != 1 )
    goto LABEL_17;
  v2 = v20 + 8;
  v3 = v20 + 16;
  while ( 1 )
  {
    sub_1403E81B0(&v7, v2);
    if ( v7 != -1 )
    {
      *(_OWORD *)&v18[40] = v11;
      *(_OWORD *)&v18[24] = v10;
      *(_OWORD *)&v18[8] = v9;
      v17 = v7;
      *(_QWORD *)v18 = v8;
      goto LABEL_9;
    }
    if ( !*v3 )
      break;
    sub_14018E680(&v17, v3, 0, &off_1419ED218, v7, v8);
LABEL_9:
    *(_OWORD *)&v16[40] = *(_OWORD *)&v18[40];
    *(_OWORD *)&v16[24] = *(_OWORD *)&v18[24];
    *(_OWORD *)&v16[8] = *(_OWORD *)&v18[8];
    v15 = v17;
    *(_QWORD *)v16 = *(_QWORD *)v18;
    if ( v17 == -2 )
      goto LABEL_14;
    v14 = *(_QWORD *)&v16[48];
    v13 = *(_OWORD *)&v16[32];
    v12 = *(__m256i *)v16;
    *(_QWORD *)&v18[48] = *(_QWORD *)&v16[48];
    *(_OWORD *)&v18[32] = *(_OWORD *)&v16[32];
    *(_OWORD *)&v18[16] = *(_OWORD *)&v16[16];
    *(_OWORD *)v18 = *(_OWORD *)v16;
    if ( v17 == -1 )
    {
      if ( *(_QWORD *)v18 != -1 )
      {
        v5 = v19;
        *v19 = *(_QWORD *)v18;
        *(_OWORD *)(v5 + 1) = *(_OWORD *)&v12.m256i_u64[1];
        return &v12.m256i_i64[1];
      }
    }
    else
    {
      sub_1403896F0(&v17);
    }
    if ( !*v20 )
      goto LABEL_17;
  }
  v15 = -2;
LABEL_14:
  if ( *(_QWORD *)v20 )
    sub_1403895E0(v2, v4);
  *(_QWORD *)v20 = 0;
LABEL_17:
  result = v19;
  *v19 = -1;
  return result;
}
