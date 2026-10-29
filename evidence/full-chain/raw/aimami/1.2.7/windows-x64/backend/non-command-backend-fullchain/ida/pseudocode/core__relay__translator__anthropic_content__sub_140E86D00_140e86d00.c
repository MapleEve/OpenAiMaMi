// win 1.2.7 | module src/core/relay/translator/anthropic_content.rs | ea 0x140e86d00 | name sub_140E86D00
// win 1.2.7 | module src/core/relay/translator/anthropic_content.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E86D00(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rdi
  _BYTE *v13; // rax
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // xmm0
  _BYTE v19[24]; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v20[24]; // [rsp+80h] [rbp+0h] BYREF
  __int128 v21; // [rsp+98h] [rbp+18h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+28h]
  __int64 v23; // [rsp+B0h] [rbp+30h]
  __int128 v24; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+48h]
  __m256i v26; // [rsp+D0h] [rbp+50h] BYREF
  __m256i v27; // [rsp+F8h] [rbp+78h] BYREF
  char v28; // [rsp+11Eh] [rbp+9Eh] BYREF
  char v29; // [rsp+11Fh] [rbp+9Fh]
  __int64 v30; // [rsp+120h] [rbp+A0h]

  v30 = -2;
  v4 = (_BYTE *)sub_1416419F0(aOutput_4, 6, a2);
  if ( v4 )
  {
    if ( *v4 == 4 )
    {
      sub_140E883C0(v20, v4);
      if ( *(_QWORD *)v20 != -1 )
      {
        *(__int64 *)((char *)&v27.m256i_i64[2] + 7) = *(_QWORD *)&v20[16];
        v5 = *(_OWORD *)v20;
LABEL_16:
        *(_OWORD *)((char *)&v27.m256i_u32[1] + 3) = v5;
        *(_QWORD *)(a1 + 16) = *((_QWORD *)&v5 + 1);
        *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v27.m256i_i64[2] + 7);
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v27.m256i_i8;
        v14 = 4;
LABEL_23:
        *(_BYTE *)a1 = v14;
        return a1;
      }
      v17 = *(_OWORD *)&v20[8];
      goto LABEL_22;
    }
    v12 = v4;
    v13 = (_BYTE *)sub_1416419F0(aContentItems_0, 13, v4);
    if ( v13 && *v13 == 4 )
    {
      sub_140E883C0(v19, v13);
      if ( *(_QWORD *)v19 != -1 )
      {
        *(__int64 *)((char *)&v27.m256i_i64[2] + 7) = *(_QWORD *)&v19[16];
        v5 = *(_OWORD *)v19;
        goto LABEL_16;
      }
      v17 = *(_OWORD *)&v19[8];
LABEL_22:
      *(_OWORD *)(a1 + 8) = v17;
      v14 = -1;
      goto LABEL_23;
    }
    sub_1402FB9D0(a1, v12);
  }
  else
  {
    v6 = sub_1416419F0(aTools_5, 5, a2);
    if ( v6 )
    {
      v8 = v6;
      *(_QWORD *)&v21 = 0;
      v22 = 0;
      nullsub_1(v7);
      v9 = sub_140001650(5, 1);
      if ( !v9 )
        sub_141938D2B(1, 5);
      *(_BYTE *)(v9 + 4) = 115;
      *(_DWORD *)v9 = 1819242356;
      *(_QWORD *)&v24 = 5;
      v23 = v9;
      *((_QWORD *)&v24 + 1) = v9;
      v25 = 5;
      v29 = 1;
      sub_140412420(&v27, v8);
      if ( v27.m256i_i8[0] == -1 )
      {
        v26.m256i_i64[0] = v27.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_16,
          43,
          (unsigned int)&v26,
          (unsigned int)&off_141A52FE8,
          (__int64)&off_141A546E8);
      }
      v26 = v27;
      v29 = 0;
      sub_140E72AA0(&v27, &v21, &v24, &v26);
      if ( v27.m256i_i8[0] != -1 )
        sub_140DF44E0(&v27);
      *(_OWORD *)&v27.m256i_u64[1] = v21;
      v27.m256i_i64[3] = v22;
      v27.m256i_i8[0] = 5;
      *(_QWORD *)&v24 = 0;
      *((_QWORD *)&v24 + 1) = 1;
      v25 = 0;
      v26.m256i_i64[2] = 1610612768;
      v26.m256i_i64[0] = (__int64)&v24;
      v26.m256i_i64[1] = (__int64)&off_141A54A20;
      if ( (unsigned __int8)sub_141642FA0(&v27, &v26) )
        sub_141939040(
          (unsigned int)aADisplayImplem_9,
          55,
          (unsigned int)&v28,
          (unsigned int)&unk_141A53038,
          (__int64)&off_141A54AD8);
      *(_OWORD *)((char *)&v26.m256i_u32[1] + 3) = v24;
      *(__int64 *)((char *)&v26.m256i_i64[2] + 7) = v25;
      *(_BYTE *)a1 = 3;
      v10 = *(__int64 *)((char *)&v26.m256i_i64[1] + 7);
      v11 = *(__int64 *)((char *)&v26.m256i_i64[2] + 7);
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v26.m256i_i8;
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = v11;
      sub_140DF44E0(&v27);
    }
    else
    {
      v26.m256i_i64[0] = 0;
      *(_OWORD *)&v26.m256i_u64[1] = 1u;
      v27.m256i_i64[2] = 1610612768;
      v27.m256i_i64[0] = (__int64)&v26;
      v27.m256i_i64[1] = (__int64)&off_141A54A20;
      if ( (unsigned __int8)sub_141642FA0(a2, &v27) )
        sub_141939040(
          (unsigned int)aADisplayImplem_9,
          55,
          (unsigned int)&v28,
          (unsigned int)&unk_141A53038,
          (__int64)&off_141A54AD8);
      *(_OWORD *)((char *)&v27.m256i_u32[1] + 3) = *(_OWORD *)v26.m256i_i8;
      *(__int64 *)((char *)&v27.m256i_i64[2] + 7) = v26.m256i_i64[2];
      *(_BYTE *)a1 = 3;
      v15 = *(__int64 *)((char *)&v27.m256i_i64[1] + 7);
      v16 = *(__int64 *)((char *)&v27.m256i_i64[2] + 7);
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v27.m256i_i8;
      *(_QWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 24) = v16;
    }
  }
  return a1;
}
