// win 1.2.7 | module src/core/relay/translator/anthropic_replay.rs | ea 0x14027c0a0 | name sub_14027C0A0
// win 1.2.7 | module src/core/relay/translator/anthropic_replay.rs | attributed via panic-Location xref (win-native)
const char *__fastcall sub_14027C0A0(__int128 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  void *v4; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int128 v12; // xmm0
  _QWORD v14[3]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  __m256i v17; // [rsp+60h] [rbp-20h] BYREF
  __int128 v18; // [rsp+80h] [rbp+0h] BYREF
  __int64 v19; // [rsp+90h] [rbp+10h]
  __m256i v20; // [rsp+98h] [rbp+18h] BYREF
  char v21; // [rsp+BEh] [rbp+3Eh]
  char v22; // [rsp+BFh] [rbp+3Fh]
  __int64 v23; // [rsp+C0h] [rbp+40h]

  v23 = -2;
  if ( !*((_QWORD *)a1 + 2) )
    return nullptr;
  v3 = a2[2];
  v4 = &unk_1419E17B0;
  if ( v3 )
  {
    v6 = a2[1];
    v7 = (_QWORD *)sub_1416419F0(aRole_0, 4, v6 + 32 * v3 - 32);
    if ( !v7 )
      v7 = off_1421E7108;
    if ( *(_BYTE *)v7 == 3 && v7[3] == 4 && *(_DWORD *)v7[2] == 1919251317 )
    {
      if ( !(unsigned __int8)sub_140346AE0(v6, v3) )
        return "Anthropic system updates require complete tool results; history was not modified";
      *(_QWORD *)&v15 = 0;
      v16 = 0;
      nullsub_1(v8);
      v9 = (_DWORD *)sub_140001650(4, 1);
      if ( !v9 )
        sub_141938D2B(1, 4);
      *v9 = 1701605234;
      *(_QWORD *)&v18 = 4;
      *((_QWORD *)&v18 + 1) = v9;
      v19 = 4;
      v22 = 1;
      sub_14040FB10(&v20, &off_1419E1788);
      if ( v20.m256i_i8[0] == -1 )
      {
        v17.m256i_i64[0] = v20.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_0,
          43,
          (unsigned int)&v17,
          (unsigned int)&off_1419D7F48,
          (__int64)&off_1419E1798);
      }
      v17 = v20;
      v22 = 0;
      sub_140E72AA0(&v20, &v15, &v18, &v17);
      if ( v20.m256i_i8[0] != -1 )
        sub_14002F9D0(&v20);
      nullsub_1(v10);
      v11 = (_DWORD *)sub_140001650(7, 1);
      if ( !v11 )
        sub_141938D2B(1, 7);
      *(_DWORD *)((char *)v11 + 3) = 1953391988;
      *v11 = 1953394531;
      v14[0] = 7;
      v14[1] = v11;
      v14[2] = 7;
      v19 = *((_QWORD *)a1 + 2);
      v18 = *a1;
      *(_QWORD *)a1 = 0;
      *((_QWORD *)a1 + 1) = 8;
      *((_QWORD *)a1 + 2) = 0;
      v21 = 1;
      sub_140C0FE40(&v20, &v18);
      if ( v20.m256i_i8[0] == -1 )
      {
        v17.m256i_i64[0] = v20.m256i_i64[1];
        sub_141939040(
          (unsigned int)aCalledResultUn_0,
          43,
          (unsigned int)&v17,
          (unsigned int)&off_1419D7F48,
          (__int64)&off_1419E1798);
      }
      v17 = v20;
      v21 = 0;
      sub_140E72AA0(&v20, &v15, v14, &v17);
      if ( v20.m256i_i8[0] != -1 )
        sub_14002F9D0(&v20);
      sub_1403FB000(&v18);
      if ( (_QWORD)v18 )
        sub_140001660(*((_QWORD *)&v18 + 1), 32 * v18, 8);
      *(_OWORD *)&v20.m256i_u64[1] = v15;
      v20.m256i_i64[3] = v16;
      v20.m256i_i8[0] = 5;
      if ( v3 == *a2 )
      {
        sub_14190F570(a2);
        v6 = a2[1];
      }
      v12 = *(_OWORD *)v20.m256i_i8;
      *(_OWORD *)(v6 + 32 * v3 + 16) = *(_OWORD *)&v20.m256i_u64[2];
      *(_OWORD *)(v6 + 32 * v3) = v12;
      a2[2] = v3 + 1;
      return nullptr;
    }
  }
  return (const char *)v4;
}
