// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x14017b190 | name sub_14017B190
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_14017B190(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rcx
  __int64 *v4; // r15
  _BYTE *v5; // rbx
  char v6; // al
  bool v7; // r14
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r14d
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __m128i *v17; // rcx
  char v18; // al
  __m128i v19[9]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v20[28]; // [rsp+C8h] [rbp+48h] BYREF
  __m128i v21[28]; // [rsp+290h] [rbp+210h] BYREF
  char v22; // [rsp+454h] [rbp+3D4h]
  __m128i v23[9]; // [rsp+455h] [rbp+3D5h] BYREF
  __m128i v24[30]; // [rsp+4F0h] [rbp+470h] BYREF
  __m128i v25[47]; // [rsp+6D0h] [rbp+650h] BYREF
  unsigned __int64 v26; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v27; // [rsp+9C8h] [rbp+948h] BYREF
  __int128 v28; // [rsp+9D8h] [rbp+958h]
  __int128 v29; // [rsp+9E8h] [rbp+968h]
  __m128i v30; // [rsp+9F8h] [rbp+978h] BYREF
  int v31; // [rsp+A08h] [rbp+988h]
  __m128i v32[22]; // [rsp+BD8h] [rbp+B58h] BYREF
  __m512i v33; // [rsp+D40h] [rbp+CC0h] BYREF
  char v34; // [rsp+D80h] [rbp+D00h]
  __m128i v35[24]; // [rsp+D81h] [rbp+D01h] BYREF
  char v36; // [rsp+F10h] [rbp+E90h]
  int v37; // [rsp+F11h] [rbp+E91h]
  __int16 v38; // [rsp+F15h] [rbp+E95h]
  char v39; // [rsp+F17h] [rbp+E97h]
  __m128i v40[9]; // [rsp+F18h] [rbp+E98h] BYREF
  __m512i v41; // [rsp+FB0h] [rbp+F30h] BYREF
  __m128i v42[4]; // [rsp+FF1h] [rbp+F71h] BYREF
  int v43; // [rsp+1038h] [rbp+FB8h]
  int v44; // [rsp+1181h] [rbp+1101h]
  __m128i v45[4]; // [rsp+1188h] [rbp+1108h] BYREF
  _BYTE v46[541]; // [rsp+11C8h] [rbp+1148h] BYREF
  __m128i v47[9]; // [rsp+13E5h] [rbp+1365h] BYREF
  _QWORD v48[3]; // [rsp+1480h] [rbp+1400h] BYREF
  _QWORD v49[3]; // [rsp+1498h] [rbp+1418h] BYREF
  __int128 v50; // [rsp+14B0h] [rbp+1430h]
  __int128 v51; // [rsp+14C0h] [rbp+1440h]
  __int128 v52; // [rsp+14D0h] [rbp+1450h]
  __int64 v53; // [rsp+14E0h] [rbp+1460h]
  bool v54; // [rsp+14EFh] [rbp+146Fh] BYREF
  __int64 v55; // [rsp+14F0h] [rbp+1470h]

  v55 = -2;
  v2 = (_BYTE *)sub_14054A5A0();
  LOBYTE(v3) = 1;
  if ( _InterlockedCompareExchange8(v2 + 32, 1, 0) )
    sub_141937480(v2 + 32);
  v4 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    v5 = v2 + 33;
    if ( v2[33] )
      goto LABEL_5;
    v7 = v2[863] == 3;
LABEL_9:
    if ( 2 * *v4 && !(unsigned __int8)sub_141938160(v3) )
      *v5 = 1;
    goto LABEL_10;
  }
  v18 = sub_141938160(v3);
  v5 = v2 + 33;
  v3 = (unsigned __int8)v2[33];
  if ( (_BYTE)v3 )
  {
    if ( !v18 )
    {
LABEL_6:
      v6 = v2[32];
      v2[32] = 0;
      if ( v6 == 2 )
        WakeByAddressSingle(v2 + 32);
      goto LABEL_12;
    }
LABEL_5:
    if ( 2 * *v4 && !(unsigned __int8)sub_141938160(v3) )
      *v5 = 1;
    goto LABEL_6;
  }
  v7 = v2[863] == 3;
  if ( v18 )
    goto LABEL_9;
LABEL_10:
  v8 = v2[32];
  v2[32] = 0;
  if ( v8 != 2 )
  {
    if ( v7 )
      return;
LABEL_12:
    sub_140619120(&v41, a1, aVoiceOverlay, 13);
    v54 = v41.m512i_i64[0] == -1;
    if ( v41.m512i_i32[0] != -1 )
    {
      sub_14002EA80((__int64)&v41);
      sub_14002EDD0((__int64)v46, v9, v10);
    }
    v41.m512i_i64[0] = (__int64)&v54;
    v41.m512i_i64[1] = (__int64)sub_1416BCC50;
    sub_1416ABFD0(v49, &unk_1419D1001, &v41);
    if ( v49[0] )
      sub_140001660(v49[1], v49[0], 1);
    if ( v54 )
    {
      sub_1416AB9B0(&v24[0].m128i_u64[1], aIndexHtml, 10);
      v24[0].m128i_i64[0] = 1;
      sub_140CA0F60((unsigned int)&v41, a1, (unsigned int)aVoiceOverlay, 13, (__int64)v24);
      sub_1418F44E0(v24, (const __m128i *)&v41, 0x270u);
      sub_14061F360(&v33, v24, 1, 0);
      sub_1418F44E0((__m128i *)&v41, (const __m128i *)&v33, 0x270u);
      sub_1418F44E0(v24, (const __m128i *)&v41, 0x4D0u);
      sub_1418F44E0((__m128i *)&v41, v24, 0x270u);
      sub_140728970(&v33, &v41);
      sub_1418F44E0(v24, (const __m128i *)&v33, 0x270u);
      sub_1418F44E0((__m128i *)&v41, v24, 0x4D0u);
      sub_1418F44E0(v24, (const __m128i *)&v41, 0x270u);
      sub_140728AC0(&v33, v24);
      sub_1418F44E0((__m128i *)&v41, (const __m128i *)&v33, 0x270u);
      v33 = v41;
      sub_1418F44E0(v35, v42, 0x18Fu);
      v11 = v44;
      sub_1418F44E0(v19, v45, 0x25Cu);
      sub_1418F44E0(v23, v47, 0x9Bu);
      v34 = 1;
      v36 = 0;
      v37 = v11;
      v38 = 256;
      v39 = 0;
      sub_1418F44E0(v40, v19, 0x98u);
      sub_1418F44E0(v21, v20, 0x1C4u);
      v22 = 1;
      sub_140723030(&v41, &v33, v21);
      v12 = v41.m512i_i64[0];
      v50 = *(_OWORD *)&v41.m512i_u64[1];
      v51 = *(_OWORD *)&v41.m512i_u64[3];
      v52 = *(_OWORD *)&v41.m512i_u64[5];
      v53 = v41.m512i_i64[0];
      if ( v41.m512i_i64[0] == -1 )
      {
        v27 = v50;
        v28 = v51;
        v29 = v52;
        v26 = -1;
        v24[0].m128i_i64[0] = (__int64)&v27;
        v41.m512i_i64[0] = (__int64)v24;
        v41.m512i_i64[1] = (__int64)sub_140DCB2C0;
        sub_1416ABFD0(v48, &unk_141943E81, &v41);
        if ( v48[0] )
          sub_140001660(v48[1], v48[0], 1);
        if ( (_DWORD)v26 == -1 )
        {
          sub_14002E720(&v27);
          return;
        }
        sub_14002EA80((__int64)&v26);
        v17 = v32;
LABEL_23:
        sub_14002EDD0((__int64)v17, v15, v16);
        return;
      }
      sub_1418F44E0(v24, (const __m128i *)&v41.m512i_u64[7], 0x348u);
      v27 = v50;
      v28 = v51;
      v29 = v52;
      sub_1418F44E0(&v30, v24, 0x1E0u);
      sub_1418F44E0(v32, v25, 0x168u);
      v26 = v12;
      *(_OWORD *)&v41.m512i_u64[5] = v29;
      *(_OWORD *)&v41.m512i_u64[3] = v28;
      *(_OWORD *)&v41.m512i_u64[1] = v27;
      sub_1418F44E0((__m128i *)&v41.m512i_u64[7], &v30, 0x348u);
      v41.m512i_i64[0] = v12;
      sub_14002EA80((__int64)&v41);
      sub_14002EDD0((__int64)v46, v13, v14);
    }
    _InterlockedIncrement64(&qword_1421E7488);
    sub_140619120(v24, a1, aVoiceOverlay, 13);
    if ( v24[0].m128i_i32[0] == -1 )
      return;
    sub_1418F44E0((__m128i *)&v41, v24, 0x380u);
    v31 = v43;
    LODWORD(v27) = 40;
    LOBYTE(v26) = 31;
    sub_140495C20(&v33, &v41, &v26);
    if ( v33.m512i_i32[0] != -1 )
    {
      *(_QWORD *)&v28 = v33.m512i_i64[2];
      v27 = *(_OWORD *)v33.m512i_i8;
      v26 = 0x8000000000000000uLL;
      sub_14002E720(&v26);
    }
    sub_14002EA80((__int64)&v41);
    v17 = (__m128i *)v46;
    goto LABEL_23;
  }
  WakeByAddressSingle(v2 + 32);
  if ( !v7 )
    goto LABEL_12;
}
