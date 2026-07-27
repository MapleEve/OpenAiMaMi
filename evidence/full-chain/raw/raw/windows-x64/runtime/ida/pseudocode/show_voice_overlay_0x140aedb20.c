// module: codexmate_lib/core/voice/runtime
// addr: 0x140aedb20
// name: show_voice_overlay
// win 1.2.1 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
// win 1.2.3 | = mac codexmate_lib::core::voice::runtime::overlay::show_voice_overlay | 跨平台字符串签名匹配(名↔函数一致)
void __fastcall show_voice_overlay(__int64 a1)
{
  __int64 v2; // rdx
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  __int64 *v5; // r15
  _BYTE *v6; // rbx
  char v7; // al
  bool v8; // r14
  char v9; // al
  int v10; // r14d
  __int64 v11; // r14
  _BYTE *v12; // rcx
  char v13; // al
  _BYTE v14[152]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v15[456]; // [rsp+C8h] [rbp+48h] BYREF
  _BYTE v16[453]; // [rsp+290h] [rbp+210h] BYREF
  _BYTE v17[155]; // [rsp+455h] [rbp+3D5h] BYREF
  __int64 v18; // [rsp+4F0h] [rbp+470h] BYREF
  _BYTE v19[472]; // [rsp+4F8h] [rbp+478h] BYREF
  _BYTE v20[752]; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v21; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v22; // [rsp+9C8h] [rbp+948h] BYREF
  __int128 v23; // [rsp+9D8h] [rbp+958h]
  __int128 v24; // [rsp+9E8h] [rbp+968h]
  _BYTE v25[16]; // [rsp+9F8h] [rbp+978h] BYREF
  int v26; // [rsp+A08h] [rbp+988h]
  _BYTE v27[360]; // [rsp+BD8h] [rbp+B58h] BYREF
  __m512i v28; // [rsp+D40h] [rbp+CC0h] BYREF
  char v29; // [rsp+D80h] [rbp+D00h]
  _BYTE v30[400]; // [rsp+D81h] [rbp+D01h] BYREF
  int v31; // [rsp+F11h] [rbp+E91h]
  __int16 v32; // [rsp+F15h] [rbp+E95h]
  char v33; // [rsp+F17h] [rbp+E97h]
  _BYTE v34[152]; // [rsp+F18h] [rbp+E98h] BYREF
  __m512i v35; // [rsp+FB0h] [rbp+F30h] BYREF
  _BYTE v36[71]; // [rsp+FF1h] [rbp+F71h] BYREF
  int v37; // [rsp+1038h] [rbp+FB8h]
  int v38; // [rsp+1181h] [rbp+1101h]
  _BYTE v39[64]; // [rsp+1188h] [rbp+1108h] BYREF
  _BYTE v40[541]; // [rsp+11C8h] [rbp+1148h] BYREF
  _BYTE v41[155]; // [rsp+13E5h] [rbp+1365h] BYREF
  _QWORD v42[3]; // [rsp+1480h] [rbp+1400h] BYREF
  _QWORD v43[3]; // [rsp+1498h] [rbp+1418h] BYREF
  __int128 v44; // [rsp+14B0h] [rbp+1430h]
  __int128 v45; // [rsp+14C0h] [rbp+1440h]
  __int128 v46; // [rsp+14D0h] [rbp+1450h]
  __int64 v47; // [rsp+14E0h] [rbp+1460h]
  bool v48; // [rsp+14EFh] [rbp+146Fh] BYREF
  __int64 v49; // [rsp+14F0h] [rbp+1470h]

  v49 = -2;
  v3 = (_BYTE *)sub_1400640A0(a1);
  LOBYTE(v4) = 1;
  if ( _InterlockedCompareExchange8(v3 + 32, 1, 0) )
    sub_1416C15B0(v3 + 32);
  v5 = off_141EC90B8;
  if ( !(2 * *off_141EC90B8) )
  {
    v6 = v3 + 33;
    if ( v3[33] )
      goto LABEL_5;
    v8 = v3[863] == 3;
LABEL_9:
    if ( 2 * *v5 && !(unsigned __int8)sub_1416C2250(v4, v2) )
      *v6 = 1;
    goto LABEL_10;
  }
  v13 = sub_1416C2250(v4, v2);
  v6 = v3 + 33;
  v4 = (unsigned __int8)v3[33];
  if ( (_BYTE)v4 )
  {
    if ( !v13 )
    {
LABEL_6:
      v7 = v3[32];
      v3[32] = 0;
      if ( v7 == 2 )
        WakeByAddressSingle(v3 + 32);
      goto LABEL_12;
    }
LABEL_5:
    if ( 2 * *v5 && !(unsigned __int8)sub_1416C2250(v4, v2) )
      *v6 = 1;
    goto LABEL_6;
  }
  v8 = v3[863] == 3;
  if ( v13 )
    goto LABEL_9;
LABEL_10:
  v9 = v3[32];
  v3[32] = 0;
  if ( v9 != 2 )
  {
    if ( v8 )
      return;
LABEL_12:
    sub_1401C5A50(&v35, a1, (__int64)aVoiceOverlay_0, 13);
    v48 = v35.m512i_i64[0] == -1;
    if ( v35.m512i_i32[0] != -1 )
    {
      sub_140014B00((__int64)&v35);
      sub_140014D70((__int64)v40);
    }
    v35.m512i_i64[0] = (__int64)&v48;
    v35.m512i_i64[1] = (__int64)sub_1414AC660;
    sub_14149C0F0(v43, &unk_1417B0AFD, &v35);
    if ( v43[0] )
      sub_140001660(v43[1], v43[0], 1);
    if ( v48 )
    {
      sub_14149BB70(v19, aIndexHtml_3, 10);
      v18 = 1;
      sub_1400016A0((unsigned int)&v35, a1, (unsigned int)aVoiceOverlay_0, 13, (__int64)&v18);
      sub_141684120(&v18, &v35, 624);
      sub_1403420C0(&v28, &v18, 1, 0);
      sub_141684120(&v35, &v28, 624);
      sub_141684120(&v18, &v35, 1232);
      sub_141684120(&v35, &v18, 624);
      sub_140388310(&v28, &v35);
      sub_141684120(&v18, &v28, 624);
      sub_141684120(&v35, &v18, 1232);
      sub_141684120(&v18, &v35, 624);
      sub_140388460(&v28, &v18);
      sub_141684120(&v35, &v28, 624);
      v28 = v35;
      sub_141684120(v30, v36, 399);
      v10 = v38;
      sub_141684120(v14, v39, 604);
      sub_141684120(v17, v41, 155);
      v29 = 1;
      v30[399] = 0;
      v31 = v10;
      v32 = 256;
      v33 = 0;
      sub_141684120(v34, v14, 152);
      sub_141684120(v16, v15, 452);
      v16[452] = 1;
      sub_140382010(&v35, &v28, v16);
      v11 = v35.m512i_i64[0];
      v44 = *(_OWORD *)&v35.m512i_u64[1];
      v45 = *(_OWORD *)&v35.m512i_u64[3];
      v46 = *(_OWORD *)&v35.m512i_u64[5];
      v47 = v35.m512i_i64[0];
      if ( v35.m512i_i64[0] == -1 )
      {
        v22 = v44;
        v23 = v45;
        v24 = v46;
        v21 = -1;
        v18 = (__int64)&v22;
        v35.m512i_i64[0] = (__int64)&v18;
        v35.m512i_i64[1] = (__int64)sub_1401BE0A0;
        sub_14149C0F0(v42, &unk_1417B0B16, &v35);
        if ( v42[0] )
          sub_140001660(v42[1], v42[0], 1);
        if ( (_DWORD)v21 == -1 )
        {
          sub_140A8E080((__int64 *)&v22);
          return;
        }
        sub_140014B00((__int64)&v21);
        v12 = v27;
LABEL_23:
        sub_140014D70((__int64)v12);
        return;
      }
      sub_141684120(&v18, &v35.m512i_u64[7], 840);
      v22 = v44;
      v23 = v45;
      v24 = v46;
      sub_141684120(v25, &v18, 480);
      sub_141684120(v27, v20, 360);
      v21 = v11;
      *(_OWORD *)&v35.m512i_u64[5] = v24;
      *(_OWORD *)&v35.m512i_u64[3] = v23;
      *(_OWORD *)&v35.m512i_u64[1] = v22;
      sub_141684120(&v35.m512i_u64[7], v25, 840);
      v35.m512i_i64[0] = v11;
      sub_140014B00((__int64)&v35);
      sub_140014D70((__int64)v40);
    }
    _InterlockedIncrement64(&qword_141EC9340);
    sub_1401C5A50(&v18, a1, (__int64)aVoiceOverlay_0, 13);
    if ( (_DWORD)v18 == -1 )
      return;
    sub_141684120(&v35, &v18, 896);
    v26 = v37;
    LODWORD(v22) = 40;
    LOBYTE(v21) = 31;
    sub_140285770(&v28, &v35, &v21);
    if ( v28.m512i_i32[0] != -1 )
    {
      *(_QWORD *)&v23 = v28.m512i_i64[2];
      v22 = *(_OWORD *)v28.m512i_i8;
      v21 = 0x8000000000000000uLL;
      sub_140A8E080(&v21);
    }
    sub_140014B00((__int64)&v35);
    v12 = v40;
    goto LABEL_23;
  }
  WakeByAddressSingle(v3 + 32);
  if ( !v8 )
    goto LABEL_12;
}