// module: codexmate_lib/commands
// addr: 0x14017b150
// name: set_voice_mode_shortcut
// win 1.2.1 | tauri command handler = set_voice_mode_shortcut | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_voice_mode_shortcut(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int128 *v9; // [rsp+20h] [rbp-60h]
  _BYTE v10[520]; // [rsp+50h] [rbp-30h] BYREF
  int v11; // [rsp+258h] [rbp+1D8h] BYREF
  __m256i v12; // [rsp+260h] [rbp+1E0h]
  __int64 v13; // [rsp+3E8h] [rbp+368h] BYREF
  __m256i v14; // [rsp+3F0h] [rbp+370h] BYREF
  _BYTE v15[384]; // [rsp+700h] [rbp+680h] BYREF
  __int64 v16; // [rsp+880h] [rbp+800h]
  int v17; // [rsp+888h] [rbp+808h]
  int v18; // [rsp+88Ch] [rbp+80Ch]
  __int64 v19; // [rsp+890h] [rbp+810h] BYREF
  __int128 v20; // [rsp+898h] [rbp+818h]
  __int128 v21; // [rsp+8A8h] [rbp+828h]
  __int128 *v22; // [rsp+8B8h] [rbp+838h]
  __int64 v23; // [rsp+8C0h] [rbp+840h]
  _OWORD v24[9]; // [rsp+BA8h] [rbp+B28h] BYREF
  __int128 v25; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v26; // [rsp+C50h] [rbp+BD0h]
  __m256i v27; // [rsp+C60h] [rbp+BE0h] BYREF
  __m256i v28; // [rsp+C80h] [rbp+C00h] BYREF
  __m256i v29; // [rsp+CA0h] [rbp+C20h] BYREF
  __m256i v30; // [rsp+CC0h] [rbp+C40h] BYREF
  __m256i v31; // [rsp+CE0h] [rbp+C60h] BYREF
  __int64 v32; // [rsp+D00h] [rbp+C80h]
  __int64 v33; // [rsp+D08h] [rbp+C88h]
  __int128 v34; // [rsp+D10h] [rbp+C90h] BYREF
  __int64 v35; // [rsp+D20h] [rbp+CA0h]
  __int128 v36; // [rsp+D30h] [rbp+CB0h]
  __int64 v37; // [rsp+D40h] [rbp+CC0h]
  __int128 v38; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v39; // [rsp+D60h] [rbp+CE0h]
  __m256i v40; // [rsp+D70h] [rbp+CF0h] BYREF
  __int128 v41; // [rsp+D90h] [rbp+D10h] BYREF
  __int64 v42; // [rsp+DA0h] [rbp+D20h]
  __int64 v43; // [rsp+DB0h] [rbp+D30h]
  char v44; // [rsp+DBEh] [rbp+D3Eh]
  char v45; // [rsp+DBFh] [rbp+D3Fh]
  __int64 v46; // [rsp+DC0h] [rbp+D40h]

  v46 = -2;
  sub_141684120(v10, a1, 520);
  sub_141684120(v15, a1 + 520, 400);
  v35 = *(_QWORD *)(a1 + 936);
  v34 = *(_OWORD *)(a1 + 920);
  v23 = 0;
  v19 = (__int64)aSetVoiceModeSh;
  *(_QWORD *)&v20 = 23;
  *((_QWORD *)&v20 + 1) = aApp;
  *(_QWORD *)&v21 = 3;
  *((_QWORD *)&v21 + 1) = v10;
  v22 = &v34;
  v45 = 1;
  sub_1401C3650(&v11, &v19);
  if ( v11 == -1 )
  {
    v14 = v12;
    sub_141684120(&v19, a1 + 520, 360);
    *(_OWORD *)v40.m256i_i8 = *(_OWORD *)(a1 + 880);
    v40.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    v13 = 1;
    v45 = 0;
    sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v13, (unsigned int)&v40, v17, v18);
  }
  else
  {
    sub_141684120(v24, &v11, 152);
    v23 = 0;
    v19 = (__int64)aSetVoiceModeSh;
    *(_QWORD *)&v20 = 23;
    *((_QWORD *)&v20 + 1) = aModeid;
    *(_QWORD *)&v21 = 6;
    *((_QWORD *)&v21 + 1) = v10;
    v22 = &v34;
    sub_1409757B0(&v31, &v19);
    LOBYTE(v43) = v31.m256i_i8[0] == -1;
    if ( v31.m256i_i8[0] == -1 )
    {
      v42 = v31.m256i_i64[3];
      v41 = *(_OWORD *)&v31.m256i_u64[1];
      v23 = 0;
      v19 = (__int64)aSetVoiceModeSh;
      *(_QWORD *)&v20 = 23;
      *((_QWORD *)&v20 + 1) = aKeycode;
      *(_QWORD *)&v21 = 7;
      *((_QWORD *)&v21 + 1) = v10;
      v22 = &v34;
      sub_1401BD560(&v28, &v19);
      LOBYTE(v43) = v28.m256i_i8[0] == -1;
      if ( v28.m256i_i8[0] == -1 )
      {
        v5 = v28.m256i_i64[1];
        v23 = 0;
        v19 = (__int64)aSetVoiceModeSh;
        *(_QWORD *)&v20 = 23;
        *((_QWORD *)&v20 + 1) = aKeylabel;
        *(_QWORD *)&v21 = 8;
        *((_QWORD *)&v21 + 1) = v10;
        v22 = &v34;
        sub_1409757B0(&v30, &v19);
        LOBYTE(v43) = v30.m256i_i8[0] == -1;
        if ( v30.m256i_i8[0] == -1 )
        {
          v39 = v30.m256i_i64[3];
          v38 = *(_OWORD *)&v30.m256i_u64[1];
          v23 = 0;
          v19 = (__int64)aSetVoiceModeSh;
          *(_QWORD *)&v20 = 23;
          *((_QWORD *)&v20 + 1) = aKeykind;
          *(_QWORD *)&v21 = 7;
          *((_QWORD *)&v21 + 1) = v10;
          v22 = &v34;
          sub_1409757B0(&v29, &v19);
          LOBYTE(v43) = v29.m256i_i8[0] == -1;
          if ( v29.m256i_i8[0] == -1 )
          {
            v37 = v29.m256i_i64[3];
            v36 = *(_OWORD *)&v29.m256i_u64[1];
            v23 = 0;
            v19 = (__int64)aSetVoiceModeSh;
            *(_QWORD *)&v20 = 23;
            *((_QWORD *)&v20 + 1) = aStyle;
            *(_QWORD *)&v21 = 5;
            *((_QWORD *)&v21 + 1) = v10;
            v22 = &v34;
            sub_140AEF920(&v27, &v19);
            LOBYTE(v43) = v27.m256i_i8[0] == -1;
            if ( v27.m256i_i8[0] == -1 )
            {
              v23 = 0;
              v19 = (__int64)aSetVoiceModeSh;
              *(_QWORD *)&v20 = 23;
              *((_QWORD *)&v20 + 1) = aModifiermask;
              *(_QWORD *)&v21 = 12;
              *((_QWORD *)&v21 + 1) = v10;
              v22 = &v34;
              sub_140975350(&v40, &v19);
              LOBYTE(v43) = v40.m256i_i8[0];
              if ( v40.m256i_i8[0] == -1 )
              {
                v9 = &v38;
                sub_140B94C90((__int128 *)&v13, (char)v24, (char)&v41, v5);
                sub_141684120(&v11, v15, 400);
                if ( (_DWORD)v13 == 2 )
                {
                  v44 = 1;
                  sub_1401BDB30(v24, &v14);
                  v21 = v24[1];
                  v20 = v24[0];
                  v19 = 2;
                }
                else
                {
                  sub_141684120(&v19, &v13, 792);
                }
                v44 = 0;
                sub_1404353B0(&v11, &v19);
                goto LABEL_39;
              }
              v14 = v40;
              sub_141684120(&v19, a1 + 520, 360);
              v25 = *(_OWORD *)(a1 + 880);
              v26 = *(_QWORD *)(a1 + 896);
              v13 = 1;
              sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v13, (unsigned int)&v25, v17, v18);
              if ( (_QWORD)v36 )
                sub_140001660(*((_QWORD *)&v36 + 1), v36, 1);
              if ( (_QWORD)v38 )
                sub_140001660(*((_QWORD *)&v38 + 1), v38, 1);
              if ( (_QWORD)v41 )
                sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
            }
            else
            {
              v14 = v27;
              sub_141684120(&v19, a1 + 520, 360);
              *(_OWORD *)v40.m256i_i8 = *(_OWORD *)(a1 + 880);
              v40.m256i_i64[2] = *(_QWORD *)(a1 + 896);
              v13 = 1;
              sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v13, (unsigned int)&v40, v17, v18);
              if ( (_QWORD)v36 )
                sub_140001660(*((_QWORD *)&v36 + 1), v36, 1);
              if ( (_QWORD)v38 )
                sub_140001660(*((_QWORD *)&v38 + 1), v38, 1);
              if ( (_QWORD)v41 )
                sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
            }
          }
          else
          {
            v14 = v29;
            sub_141684120(&v19, a1 + 520, 360);
            *(_OWORD *)v40.m256i_i8 = *(_OWORD *)(a1 + 880);
            v40.m256i_i64[2] = *(_QWORD *)(a1 + 896);
            v13 = 1;
            sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v13, (unsigned int)&v40, v17, v18);
            if ( (_QWORD)v38 )
              sub_140001660(*((_QWORD *)&v38 + 1), v38, 1);
            if ( (_QWORD)v41 )
              sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
          }
        }
        else
        {
          v14 = v30;
          sub_141684120(&v19, a1 + 520, 360);
          *(_OWORD *)v40.m256i_i8 = *(_OWORD *)(a1 + 880);
          v40.m256i_i64[2] = *(_QWORD *)(a1 + 896);
          v13 = 1;
          sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v13, (unsigned int)&v40, v17, v18);
          if ( (_QWORD)v41 )
            sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
        }
      }
      else
      {
        v14 = v28;
        sub_141684120(&v19, a1 + 520, 360);
        *(_OWORD *)v40.m256i_i8 = *(_OWORD *)(a1 + 880);
        v40.m256i_i64[2] = *(_QWORD *)(a1 + 896);
        v13 = 1;
        sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v13, (unsigned int)&v40, v17, v18);
        if ( (_QWORD)v41 )
          sub_140001660(*((_QWORD *)&v41 + 1), v41, 1);
      }
      v45 = 0;
      sub_140014150(v24);
    }
    else
    {
      v14 = v31;
      sub_141684120(&v19, a1 + 520, 360);
      *(_OWORD *)v40.m256i_i8 = *(_OWORD *)(a1 + 880);
      v40.m256i_i64[2] = *(_QWORD *)(a1 + 896);
      v13 = 1;
      sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v13, (unsigned int)&v40, v17, v18);
      v45 = 0;
      sub_140014150(v24);
    }
  }
LABEL_39:
  if ( (_QWORD)v34 != -1 )
  {
    v6 = *((_QWORD *)&v34 + 1);
    v33 = v35;
    v43 = 0;
    v32 = *((_QWORD *)&v34 + 1);
    while ( v33 != v43 )
    {
      ++v43;
      v7 = v6 + 96;
      sub_1402C7520(v6, v2, v3, v4, v9);
      v6 = v7;
    }
    if ( (_QWORD)v34 )
      sub_140001660(*((_QWORD *)&v34 + 1), 96 * v34, 8);
  }
  return sub_140014270(v10);
}