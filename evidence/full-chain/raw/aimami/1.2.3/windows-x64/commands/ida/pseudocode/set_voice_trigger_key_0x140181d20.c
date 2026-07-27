// module: codexmate_lib/commands
// addr: 0x140181d20
// name: set_voice_trigger_key
// win 1.2.1 | tauri command handler = set_voice_trigger_key | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_voice_trigger_key(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r14d
  char v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v10; // [rsp+20h] [rbp-60h]
  _BYTE v11[520]; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+248h] [rbp+1C8h] BYREF
  __int128 v13; // [rsp+250h] [rbp+1D0h]
  __int128 v14; // [rsp+260h] [rbp+1E0h]
  __int64 v15; // [rsp+3D8h] [rbp+358h] BYREF
  __int128 v16; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v17; // [rsp+3F0h] [rbp+370h]
  _BYTE v18[384]; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v19; // [rsp+870h] [rbp+7F0h]
  int v20; // [rsp+878h] [rbp+7F8h]
  int v21; // [rsp+87Ch] [rbp+7FCh]
  __int64 v22; // [rsp+880h] [rbp+800h] BYREF
  __int128 v23; // [rsp+888h] [rbp+808h]
  __int128 v24; // [rsp+898h] [rbp+818h]
  __int128 *v25; // [rsp+8A8h] [rbp+828h]
  __int64 v26; // [rsp+8B0h] [rbp+830h]
  _OWORD v27[9]; // [rsp+B98h] [rbp+B18h] BYREF
  __int128 v28; // [rsp+C30h] [rbp+BB0h] BYREF
  __int64 v29; // [rsp+C40h] [rbp+BC0h]
  _OWORD v30[2]; // [rsp+C50h] [rbp+BD0h] BYREF
  _OWORD v31[2]; // [rsp+C70h] [rbp+BF0h] BYREF
  __int128 v32; // [rsp+C90h] [rbp+C10h] BYREF
  __int128 v33; // [rsp+CA0h] [rbp+C20h]
  __int128 v34; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v35; // [rsp+CC0h] [rbp+C40h]
  __int128 v36; // [rsp+CD0h] [rbp+C50h] BYREF
  __int64 v37; // [rsp+CE0h] [rbp+C60h]
  __int128 v38; // [rsp+CF0h] [rbp+C70h] BYREF
  __int128 v39; // [rsp+D00h] [rbp+C80h]
  __int64 v40; // [rsp+D10h] [rbp+C90h]
  __int64 v41; // [rsp+D18h] [rbp+C98h]
  __int64 v42; // [rsp+D20h] [rbp+CA0h]
  __int64 v43; // [rsp+D28h] [rbp+CA8h]
  __int64 v44; // [rsp+D30h] [rbp+CB0h]
  char v45; // [rsp+D3Eh] [rbp+CBEh]
  char v46; // [rsp+D3Fh] [rbp+CBFh]
  __int64 v47; // [rsp+D40h] [rbp+CC0h]

  v47 = -2;
  sub_141684120(v11, a1, 520);
  sub_141684120(v18, a1 + 520, 400);
  v37 = *(_QWORD *)(a1 + 936);
  v36 = *(_OWORD *)(a1 + 920);
  v26 = 0;
  v22 = (__int64)aSetVoiceTrigge_0;
  *(_QWORD *)&v23 = 21;
  *((_QWORD *)&v23 + 1) = aApp;
  *(_QWORD *)&v24 = 3;
  *((_QWORD *)&v24 + 1) = v11;
  v25 = &v36;
  v46 = 1;
  sub_1401C3650(&v12, &v22);
  if ( v12 == -1 )
  {
    v17 = v14;
    v16 = v13;
    sub_141684120(&v22, a1 + 520, 360);
    v38 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v39 = *(_QWORD *)(a1 + 896);
    v15 = 1;
    v46 = 0;
    sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v15, (unsigned int)&v38, v20, v21);
  }
  else
  {
    sub_141684120(v27, &v12, 152);
    v26 = 0;
    v22 = (__int64)aSetVoiceTrigge_0;
    *(_QWORD *)&v23 = 21;
    *((_QWORD *)&v23 + 1) = aKeycode;
    *(_QWORD *)&v24 = 7;
    *((_QWORD *)&v24 + 1) = v11;
    v25 = &v36;
    sub_1401BD560(v31, &v22);
    LOBYTE(v44) = LOBYTE(v31[0]) == 0xFF;
    if ( LOBYTE(v31[0]) == 0xFF )
    {
      v5 = DWORD2(v31[0]);
      v26 = 0;
      v22 = (__int64)aSetVoiceTrigge_0;
      *(_QWORD *)&v23 = 21;
      *((_QWORD *)&v23 + 1) = aKeylabel;
      *(_QWORD *)&v24 = 8;
      *((_QWORD *)&v24 + 1) = v11;
      v25 = &v36;
      sub_1409757B0(&v34, &v22);
      LOBYTE(v44) = (_BYTE)v34 == 0xFF;
      if ( (_BYTE)v34 == 0xFF )
      {
        v43 = *((_QWORD *)&v34 + 1);
        v42 = v35;
        v26 = 0;
        v22 = (__int64)aSetVoiceTrigge_0;
        *(_QWORD *)&v23 = 21;
        *((_QWORD *)&v23 + 1) = aKeykind;
        *(_QWORD *)&v24 = 7;
        *((_QWORD *)&v24 + 1) = v11;
        v25 = &v36;
        sub_1409757B0(&v32, &v22);
        LOBYTE(v44) = (_BYTE)v32 == 0xFF;
        if ( (_BYTE)v32 == 0xFF )
        {
          v41 = *((_QWORD *)&v32 + 1);
          v40 = v33;
          v26 = 0;
          v22 = (__int64)aSetVoiceTrigge_0;
          *(_QWORD *)&v23 = 21;
          *((_QWORD *)&v23 + 1) = aStyle;
          *(_QWORD *)&v24 = 5;
          *((_QWORD *)&v24 + 1) = v11;
          v25 = &v36;
          sub_140AEF920(v30, &v22);
          LOBYTE(v44) = LOBYTE(v30[0]) == 0xFF;
          if ( LOBYTE(v30[0]) == 0xFF )
          {
            v6 = BYTE1(v30[0]);
            v26 = 0;
            v22 = (__int64)aSetVoiceTrigge_0;
            *(_QWORD *)&v23 = 21;
            *((_QWORD *)&v23 + 1) = aModifiermask;
            *(_QWORD *)&v24 = 12;
            *((_QWORD *)&v24 + 1) = v11;
            v25 = &v36;
            sub_140975350(&v38, &v22);
            LOBYTE(v44) = v38;
            if ( (_BYTE)v38 == 0xFF )
            {
              sub_140B94B00(
                (unsigned int)&v15,
                (unsigned int)v27,
                v5,
                (unsigned int)&v34 + 8,
                (__int64)&v32 + 8,
                v6,
                SBYTE8(v38),
                v39);
              sub_141684120(&v12, a1 + 520, 400);
              if ( (_DWORD)v15 == 2 )
              {
                v45 = 1;
                sub_1401BDB30(v27, &v16);
                v24 = v27[1];
                v23 = v27[0];
                v22 = 2;
              }
              else
              {
                sub_141684120(&v22, &v15, 792);
              }
              v45 = 0;
              sub_1404353B0(&v12, &v22);
              goto LABEL_27;
            }
            v17 = v39;
            v16 = v38;
            sub_141684120(&v22, a1 + 520, 360);
            v28 = *(_OWORD *)(a1 + 880);
            v29 = *(_QWORD *)(a1 + 896);
            v15 = 1;
            sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v15, (unsigned int)&v28, v20, v21);
            if ( v41 )
              sub_140001660(v40, v41, 1);
            if ( v43 )
              sub_140001660(v42, v43, 1);
          }
          else
          {
            v17 = v30[1];
            v16 = v30[0];
            sub_141684120(&v22, a1 + 520, 360);
            v38 = *(_OWORD *)(a1 + 880);
            *(_QWORD *)&v39 = *(_QWORD *)(a1 + 896);
            v15 = 1;
            sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v15, (unsigned int)&v38, v20, v21);
            if ( v41 )
              sub_140001660(v40, v41, 1);
            if ( v43 )
              sub_140001660(v42, v43, 1);
          }
        }
        else
        {
          v17 = v33;
          v16 = v32;
          sub_141684120(&v22, a1 + 520, 360);
          v38 = *(_OWORD *)(a1 + 880);
          *(_QWORD *)&v39 = *(_QWORD *)(a1 + 896);
          v15 = 1;
          sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v15, (unsigned int)&v38, v20, v21);
          if ( v43 )
            sub_140001660(v42, v43, 1);
        }
        v46 = 0;
        sub_140014150(v27);
      }
      else
      {
        v17 = v35;
        v16 = v34;
        sub_141684120(&v22, a1 + 520, 360);
        v38 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v39 = *(_QWORD *)(a1 + 896);
        v15 = 1;
        sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v15, (unsigned int)&v38, v20, v21);
        v46 = 0;
        sub_140014150(v27);
      }
    }
    else
    {
      v17 = v31[1];
      v16 = v31[0];
      sub_141684120(&v22, a1 + 520, 360);
      v38 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v39 = *(_QWORD *)(a1 + 896);
      v15 = 1;
      sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v15, (unsigned int)&v38, v20, v21);
      v46 = 0;
      sub_140014150(v27);
    }
  }
LABEL_27:
  if ( (_QWORD)v36 != -1 )
  {
    v7 = *((_QWORD *)&v36 + 1);
    v43 = v37;
    v44 = 0;
    v42 = *((_QWORD *)&v36 + 1);
    while ( v43 != v44 )
    {
      ++v44;
      v8 = v7 + 96;
      sub_1402C7520(v7, v2, v3, v4, v10);
      v7 = v8;
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8);
  }
  return sub_140014270(v11);
}