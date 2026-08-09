// Pseudocode for set_voice_trigger_key (EA: 0x140160430, size: 0x94d)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_140160430(__int64 a1)
{
  int v2; // r14d
  char v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rsi
  _BYTE v7[520]; // [rsp+40h] [rbp-40h] BYREF
  int v8; // [rsp+248h] [rbp+1C8h] BYREF
  __int128 v9; // [rsp+250h] [rbp+1D0h]
  __int128 v10; // [rsp+260h] [rbp+1E0h]
  __int64 v11; // [rsp+3D8h] [rbp+358h] BYREF
  __int128 v12; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v13; // [rsp+3F0h] [rbp+370h]
  _BYTE v14[384]; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v15; // [rsp+870h] [rbp+7F0h]
  int v16; // [rsp+878h] [rbp+7F8h]
  int v17; // [rsp+87Ch] [rbp+7FCh]
  __int64 v18; // [rsp+880h] [rbp+800h] BYREF
  __int128 v19; // [rsp+888h] [rbp+808h]
  __int128 v20; // [rsp+898h] [rbp+818h]
  __int128 *v21; // [rsp+8A8h] [rbp+828h]
  __int64 v22; // [rsp+8B0h] [rbp+830h]
  _OWORD v23[9]; // [rsp+B98h] [rbp+B18h] BYREF
  __int128 v24; // [rsp+C30h] [rbp+BB0h] BYREF
  __int64 v25; // [rsp+C40h] [rbp+BC0h]
  _OWORD v26[2]; // [rsp+C50h] [rbp+BD0h] BYREF
  _OWORD v27[2]; // [rsp+C70h] [rbp+BF0h] BYREF
  __int128 v28; // [rsp+C90h] [rbp+C10h] BYREF
  __int128 v29; // [rsp+CA0h] [rbp+C20h]
  __int128 v30; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v31; // [rsp+CC0h] [rbp+C40h]
  __int128 v32; // [rsp+CD0h] [rbp+C50h] BYREF
  __int64 v33; // [rsp+CE0h] [rbp+C60h]
  __int128 v34; // [rsp+CF0h] [rbp+C70h] BYREF
  __int128 v35; // [rsp+D00h] [rbp+C80h]
  __int64 v36; // [rsp+D10h] [rbp+C90h]
  __int64 v37; // [rsp+D18h] [rbp+C98h]
  __int64 v38; // [rsp+D20h] [rbp+CA0h]
  __int64 v39; // [rsp+D28h] [rbp+CA8h]
  __int64 v40; // [rsp+D30h] [rbp+CB0h]
  char v41; // [rsp+D3Eh] [rbp+CBEh]
  char v42; // [rsp+D3Fh] [rbp+CBFh]
  __int64 v43; // [rsp+D40h] [rbp+CC0h]

  v43 = -2;
  sub_14172B820(v7, a1, 520);
  sub_14172B820(v14, a1 + 520, 400);
  v33 = *(_QWORD *)(a1 + 936);
  v32 = *(_OWORD *)(a1 + 920);
  v22 = 0;
  v18 = (__int64)aSetVoiceTrigge_0;
  *(_QWORD *)&v19 = 21;
  *((_QWORD *)&v19 + 1) = aApp;
  *(_QWORD *)&v20 = 3;
  *((_QWORD *)&v20 + 1) = v7;
  v21 = &v32;
  v42 = 1;
  sub_1401A9630((__int64)&v8, (__int64)&v18);
  if ( v8 == -1 )
  {
    v13 = v10;
    v12 = v9;
    sub_14172B820(&v18, a1 + 520, 360);
    v34 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
    v11 = 1;
    v42 = 0;
    sub_140AFFC30((__int64)&v18, v15, (__int64)&v11, &v34, v16, v17);
  }
  else
  {
    sub_14172B820(v23, &v8, 152);
    v22 = 0;
    v18 = (__int64)aSetVoiceTrigge_0;
    *(_QWORD *)&v19 = 21;
    *((_QWORD *)&v19 + 1) = aKeycode;
    *(_QWORD *)&v20 = 7;
    *((_QWORD *)&v20 + 1) = v7;
    v21 = &v32;
    sub_140956B00(v27, &v18);
    LOBYTE(v40) = LOBYTE(v27[0]) == 0xFF;
    if ( LOBYTE(v27[0]) == 0xFF )
    {
      v2 = DWORD2(v27[0]);
      v22 = 0;
      v18 = (__int64)aSetVoiceTrigge_0;
      *(_QWORD *)&v19 = 21;
      *((_QWORD *)&v19 + 1) = aKeylabel;
      *(_QWORD *)&v20 = 8;
      *((_QWORD *)&v20 + 1) = v7;
      v21 = &v32;
      sub_140955980(&v30, &v18);
      LOBYTE(v40) = (_BYTE)v30 == 0xFF;
      if ( (_BYTE)v30 == 0xFF )
      {
        v39 = *((_QWORD *)&v30 + 1);
        v38 = v31;
        v22 = 0;
        v18 = (__int64)aSetVoiceTrigge_0;
        *(_QWORD *)&v19 = 21;
        *((_QWORD *)&v19 + 1) = aKeykind;
        *(_QWORD *)&v20 = 7;
        *((_QWORD *)&v20 + 1) = v7;
        v21 = &v32;
        sub_140955980(&v28, &v18);
        LOBYTE(v40) = (_BYTE)v28 == 0xFF;
        if ( (_BYTE)v28 == 0xFF )
        {
          v37 = *((_QWORD *)&v28 + 1);
          v36 = v29;
          v22 = 0;
          v18 = (__int64)aSetVoiceTrigge_0;
          *(_QWORD *)&v19 = 21;
          *((_QWORD *)&v19 + 1) = aStyle;
          *(_QWORD *)&v20 = 5;
          *((_QWORD *)&v20 + 1) = v7;
          v21 = &v32;
          sub_1404F6850(v26, &v18);
          LOBYTE(v40) = LOBYTE(v26[0]) == 0xFF;
          if ( LOBYTE(v26[0]) == 0xFF )
          {
            v3 = BYTE1(v26[0]);
            v22 = 0;
            v18 = (__int64)aSetVoiceTrigge_0;
            *(_QWORD *)&v19 = 21;
            *((_QWORD *)&v19 + 1) = aModifiermask;
            *(_QWORD *)&v20 = 12;
            *((_QWORD *)&v20 + 1) = v7;
            v21 = &v32;
            sub_140954A30(&v34, &v18);
            LOBYTE(v40) = v34;
            if ( (_BYTE)v34 == 0xFF )
            {
              sub_1403D61F0(
                (unsigned int)&v11,
                (unsigned int)v23,
                v2,
                (unsigned int)&v30 + 8,
                (__int64)&v28 + 8,
                v3,
                SBYTE8(v34),
                v35);
              sub_14172B820(&v8, a1 + 520, 400);
              if ( (_DWORD)v11 == 2 )
              {
                v41 = 1;
                sub_1401A80B0(v23, &v12);
                v20 = v23[1];
                v19 = v23[0];
                v18 = 2;
              }
              else
              {
                sub_14172B820(&v18, &v11, 792);
              }
              v41 = 0;
              sub_140A946C0(&v8, &v18);
              goto LABEL_27;
            }
            v13 = v35;
            v12 = v34;
            sub_14172B820(&v18, a1 + 520, 360);
            v24 = *(_OWORD *)(a1 + 880);
            v25 = *(_QWORD *)(a1 + 896);
            v11 = 1;
            sub_140AFFC30((__int64)&v18, v15, (__int64)&v11, &v24, v16, v17);
            if ( v37 )
              sub_140001660(v36, v37, 1);
            if ( v39 )
              sub_140001660(v38, v39, 1);
          }
          else
          {
            v13 = v26[1];
            v12 = v26[0];
            sub_14172B820(&v18, a1 + 520, 360);
            v34 = *(_OWORD *)(a1 + 880);
            *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
            v11 = 1;
            sub_140AFFC30((__int64)&v18, v15, (__int64)&v11, &v34, v16, v17);
            if ( v37 )
              sub_140001660(v36, v37, 1);
            if ( v39 )
              sub_140001660(v38, v39, 1);
          }
        }
        else
        {
          v13 = v29;
          v12 = v28;
          sub_14172B820(&v18, a1 + 520, 360);
          v34 = *(_OWORD *)(a1 + 880);
          *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
          v11 = 1;
          sub_140AFFC30((__int64)&v18, v15, (__int64)&v11, &v34, v16, v17);
          if ( v39 )
            sub_140001660(v38, v39, 1);
        }
        v42 = 0;
        sub_1400437E0(v23);
      }
      else
      {
        v13 = v31;
        v12 = v30;
        sub_14172B820(&v18, a1 + 520, 360);
        v34 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
        v11 = 1;
        sub_140AFFC30((__int64)&v18, v15, (__int64)&v11, &v34, v16, v17);
        v42 = 0;
        sub_1400437E0(v23);
      }
    }
    else
    {
      v13 = v27[1];
      v12 = v27[0];
      sub_14172B820(&v18, a1 + 520, 360);
      v34 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v35 = *(_QWORD *)(a1 + 896);
      v11 = 1;
      sub_140AFFC30((__int64)&v18, v15, (__int64)&v11, &v34, v16, v17);
      v42 = 0;
      sub_1400437E0(v23);
    }
  }
LABEL_27:
  if ( (_QWORD)v32 != -1 )
  {
    v4 = *((_QWORD *)&v32 + 1);
    v39 = v33;
    v40 = 0;
    v38 = *((_QWORD *)&v32 + 1);
    while ( v39 != v40 )
    {
      ++v40;
      v5 = v4 + 96;
      sub_140401FB0();
      v4 = v5;
    }
    if ( (_QWORD)v32 )
      sub_140001660(*((_QWORD *)&v32 + 1), 96 * v32, 8);
  }
  return sub_140043900(v7);
}
