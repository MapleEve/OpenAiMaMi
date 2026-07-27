// module: codexmate_lib/commands
// addr: 0x140180440
// name: set_voice_trigger_bindings
// win 1.2.1 | tauri command handler = set_voice_trigger_bindings | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_voice_trigger_bindings(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // r14
  int v6; // r15d
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v11; // [rsp+20h] [rbp-60h]
  _BYTE v12[520]; // [rsp+68h] [rbp-18h] BYREF
  int v13; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v14; // [rsp+278h] [rbp+1F8h]
  __int128 v15; // [rsp+288h] [rbp+208h]
  __int64 v16; // [rsp+400h] [rbp+380h] BYREF
  __int128 v17; // [rsp+408h] [rbp+388h] BYREF
  __int128 v18; // [rsp+418h] [rbp+398h]
  _BYTE v19[360]; // [rsp+718h] [rbp+698h] BYREF
  __int128 v20; // [rsp+880h] [rbp+800h]
  __int64 v21; // [rsp+890h] [rbp+810h]
  __int64 v22; // [rsp+898h] [rbp+818h]
  int v23; // [rsp+8A0h] [rbp+820h]
  int v24; // [rsp+8A4h] [rbp+824h]
  __int64 v25; // [rsp+8A8h] [rbp+828h] BYREF
  __int128 v26; // [rsp+8B0h] [rbp+830h]
  __int128 v27; // [rsp+8C0h] [rbp+840h]
  __int128 *v28; // [rsp+8D0h] [rbp+850h]
  __int64 v29; // [rsp+8D8h] [rbp+858h]
  __int128 v30; // [rsp+BC0h] [rbp+B40h] BYREF
  __int64 v31; // [rsp+BD0h] [rbp+B50h]
  _OWORD v32[2]; // [rsp+BD8h] [rbp+B58h] BYREF
  _OWORD v33[2]; // [rsp+BF8h] [rbp+B78h] BYREF
  _OWORD v34[2]; // [rsp+C18h] [rbp+B98h] BYREF
  _OWORD v35[9]; // [rsp+C38h] [rbp+BB8h] BYREF
  __int128 v36; // [rsp+CD0h] [rbp+C50h] BYREF
  __int128 v37; // [rsp+CE0h] [rbp+C60h]
  __int128 v38; // [rsp+CF0h] [rbp+C70h] BYREF
  __int128 v39; // [rsp+D00h] [rbp+C80h]
  __int128 v40; // [rsp+D10h] [rbp+C90h] BYREF
  __int128 v41; // [rsp+D20h] [rbp+CA0h]
  __int128 v42; // [rsp+D30h] [rbp+CB0h] BYREF
  __int128 v43; // [rsp+D40h] [rbp+CC0h]
  __int128 v44; // [rsp+D50h] [rbp+CD0h] BYREF
  __int128 v45; // [rsp+D60h] [rbp+CE0h]
  __int64 v46; // [rsp+D70h] [rbp+CF0h]
  __int64 v47; // [rsp+D78h] [rbp+CF8h]
  __int128 v48; // [rsp+D80h] [rbp+D00h] BYREF
  __int64 v49; // [rsp+D90h] [rbp+D10h]
  __int64 v50; // [rsp+D98h] [rbp+D18h]
  __int64 v51; // [rsp+DA0h] [rbp+D20h]
  __int64 v52; // [rsp+DA8h] [rbp+D28h]
  __int128 v53; // [rsp+DB0h] [rbp+D30h] BYREF
  __int128 v54; // [rsp+DC0h] [rbp+D40h]
  __int64 v55; // [rsp+DD0h] [rbp+D50h]
  __int64 v56; // [rsp+DD8h] [rbp+D58h]
  __int64 v57; // [rsp+DE0h] [rbp+D60h]
  __int64 v58; // [rsp+DE8h] [rbp+D68h]
  char v59; // [rsp+DF7h] [rbp+D77h]
  __int64 v60; // [rsp+DF8h] [rbp+D78h]
  __int64 v61; // [rsp+E00h] [rbp+D80h]
  char v62; // [rsp+E0Fh] [rbp+D8Fh]
  __int64 v63; // [rsp+E10h] [rbp+D90h]

  v63 = -2;
  sub_141684120(v12, a1, 520);
  sub_141684120(v19, a1 + 520, 400);
  v49 = *(_QWORD *)(a1 + 936);
  v48 = *(_OWORD *)(a1 + 920);
  v29 = 0;
  v25 = (__int64)aSetVoiceTrigge;
  *(_QWORD *)&v26 = 26;
  *((_QWORD *)&v26 + 1) = aApp;
  *(_QWORD *)&v27 = 3;
  *((_QWORD *)&v27 + 1) = v12;
  v28 = &v48;
  v62 = 1;
  sub_1401C3650(&v13, &v25);
  if ( v13 == -1 )
  {
    v18 = v15;
    v17 = v14;
    sub_141684120(&v25, a1 + 520, 360);
    v53 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v54 = *(_QWORD *)(a1 + 896);
    v16 = 1;
    v62 = 0;
    sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
  }
  else
  {
    sub_141684120(v35, &v13, 152);
    v29 = 0;
    v25 = (__int64)aSetVoiceTrigge;
    *(_QWORD *)&v26 = 26;
    *((_QWORD *)&v26 + 1) = aActivestyle;
    *(_QWORD *)&v27 = 11;
    *((_QWORD *)&v27 + 1) = v12;
    v28 = &v48;
    sub_140AEF920(v34, &v25);
    LOBYTE(v61) = LOBYTE(v34[0]) == 0xFF;
    if ( LOBYTE(v34[0]) == 0xFF )
    {
      v5 = BYTE1(v34[0]);
      v29 = 0;
      v25 = (__int64)aSetVoiceTrigge;
      *(_QWORD *)&v26 = 26;
      *((_QWORD *)&v26 + 1) = aHoldkeycode;
      *(_QWORD *)&v27 = 11;
      *((_QWORD *)&v27 + 1) = v12;
      v28 = &v48;
      sub_1401BD560(v33, &v25);
      LOBYTE(v61) = LOBYTE(v33[0]) == 0xFF;
      if ( LOBYTE(v33[0]) == 0xFF )
      {
        v6 = DWORD2(v33[0]);
        v29 = 0;
        v25 = (__int64)aSetVoiceTrigge;
        *(_QWORD *)&v26 = 26;
        *((_QWORD *)&v26 + 1) = aHoldkeylabel;
        *(_QWORD *)&v27 = 12;
        *((_QWORD *)&v27 + 1) = v12;
        v28 = &v48;
        sub_1409757B0(&v44, &v25);
        LOBYTE(v61) = (_BYTE)v44 == 0xFF;
        if ( (_BYTE)v44 == 0xFF )
        {
          v60 = *((_QWORD *)&v44 + 1);
          v57 = v45;
          v29 = 0;
          v25 = (__int64)aSetVoiceTrigge;
          *(_QWORD *)&v26 = 26;
          *((_QWORD *)&v26 + 1) = aHoldkeykind;
          *(_QWORD *)&v27 = 11;
          *((_QWORD *)&v27 + 1) = v12;
          v28 = &v48;
          sub_1409757B0(&v42, &v25);
          LOBYTE(v61) = (_BYTE)v42 == 0xFF;
          if ( (_BYTE)v42 == 0xFF )
          {
            v58 = *((_QWORD *)&v42 + 1);
            v56 = v43;
            v29 = 0;
            v25 = (__int64)aSetVoiceTrigge;
            *(_QWORD *)&v26 = 26;
            *((_QWORD *)&v26 + 1) = aHoldmodifierma;
            *(_QWORD *)&v27 = 16;
            *((_QWORD *)&v27 + 1) = v12;
            v28 = &v48;
            sub_140975350(&v36, &v25);
            LOBYTE(v61) = (_BYTE)v36 == 0xFF;
            if ( (_BYTE)v36 == 0xFF )
            {
              v46 = *((_QWORD *)&v36 + 1);
              v47 = v37;
              v29 = 0;
              v25 = (__int64)aSetVoiceTrigge;
              *(_QWORD *)&v26 = 26;
              *((_QWORD *)&v26 + 1) = aTogglekeycode;
              *(_QWORD *)&v27 = 13;
              *((_QWORD *)&v27 + 1) = v12;
              v28 = &v48;
              sub_1401BD560(v32, &v25);
              LOBYTE(v61) = LOBYTE(v32[0]) == 0xFF;
              if ( LOBYTE(v32[0]) == 0xFF )
              {
                v7 = *((_QWORD *)&v32[0] + 1);
                v29 = 0;
                v25 = (__int64)aSetVoiceTrigge;
                *(_QWORD *)&v26 = 26;
                *((_QWORD *)&v26 + 1) = aTogglekeylabel;
                *(_QWORD *)&v27 = 14;
                *((_QWORD *)&v27 + 1) = v12;
                v28 = &v48;
                sub_1409757B0(&v40, &v25);
                LOBYTE(v61) = (_BYTE)v40 == 0xFF;
                if ( (_BYTE)v40 == 0xFF )
                {
                  v55 = *((_QWORD *)&v40 + 1);
                  v51 = v41;
                  v29 = 0;
                  v25 = (__int64)aSetVoiceTrigge;
                  *(_QWORD *)&v26 = 26;
                  *((_QWORD *)&v26 + 1) = aTogglekeykind;
                  *(_QWORD *)&v27 = 13;
                  *((_QWORD *)&v27 + 1) = v12;
                  v28 = &v48;
                  sub_1409757B0(&v38, &v25);
                  LOBYTE(v61) = (_BYTE)v38 == 0xFF;
                  if ( (_BYTE)v38 == 0xFF )
                  {
                    v52 = *((_QWORD *)&v38 + 1);
                    v50 = v39;
                    v29 = 0;
                    v25 = (__int64)aSetVoiceTrigge;
                    *(_QWORD *)&v26 = 26;
                    *((_QWORD *)&v26 + 1) = aTogglemodifier;
                    *(_QWORD *)&v27 = 18;
                    *((_QWORD *)&v27 + 1) = v12;
                    v28 = &v48;
                    sub_140975350(&v53, &v25);
                    LOBYTE(v61) = v53;
                    if ( (_BYTE)v53 == 0xFF )
                    {
                      sub_140B952A0(
                        (unsigned int)&v16,
                        (unsigned int)v35,
                        v5,
                        v6,
                        (__int64)&v44 + 8,
                        (__int64)&v42 + 8,
                        v46,
                        v47,
                        v7,
                        (__int64)&v40 + 8,
                        (__int64)&v38 + 8,
                        SBYTE8(v53),
                        v54);
                      sub_141684120(&v13, v19, 400);
                      if ( (_DWORD)v16 == 2 )
                      {
                        v59 = 1;
                        sub_1401BDB30(v35, &v17);
                        v27 = v35[1];
                        v26 = v35[0];
                        v25 = 2;
                      }
                      else
                      {
                        sub_141684120(&v25, &v16, 792);
                      }
                      v59 = 0;
                      sub_1404353B0(&v13, &v25);
                      goto LABEL_53;
                    }
                    v18 = v54;
                    v17 = v53;
                    sub_141684120(&v25, v19, 360);
                    v30 = v20;
                    v31 = v21;
                    v16 = 1;
                    sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v30, v23, v24);
                    if ( v52 )
                      sub_140001660(v50, v52, 1);
                    if ( v55 )
                      sub_140001660(v51, v55, 1);
                    if ( v58 )
                      sub_140001660(v56, v58, 1);
                    if ( v60 )
                      sub_140001660(v57, v60, 1);
                  }
                  else
                  {
                    v18 = v39;
                    v17 = v38;
                    sub_141684120(&v25, v19, 360);
                    v53 = v20;
                    *(_QWORD *)&v54 = v21;
                    v16 = 1;
                    sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
                    if ( v55 )
                      sub_140001660(v51, v55, 1);
                    if ( v58 )
                      sub_140001660(v56, v58, 1);
                    if ( v60 )
                      sub_140001660(v57, v60, 1);
                  }
                }
                else
                {
                  v18 = v41;
                  v17 = v40;
                  sub_141684120(&v25, v19, 360);
                  v53 = v20;
                  *(_QWORD *)&v54 = v21;
                  v16 = 1;
                  sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
                  if ( v58 )
                    sub_140001660(v56, v58, 1);
                  if ( v60 )
                    sub_140001660(v57, v60, 1);
                }
              }
              else
              {
                v18 = v32[1];
                v17 = v32[0];
                sub_141684120(&v25, a1 + 520, 360);
                v53 = *(_OWORD *)(a1 + 880);
                *(_QWORD *)&v54 = *(_QWORD *)(a1 + 896);
                v16 = 1;
                sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
                if ( v58 )
                  sub_140001660(v56, v58, 1);
                if ( v60 )
                  sub_140001660(v57, v60, 1);
              }
            }
            else
            {
              v18 = v37;
              v17 = v36;
              sub_141684120(&v25, a1 + 520, 360);
              v53 = *(_OWORD *)(a1 + 880);
              *(_QWORD *)&v54 = *(_QWORD *)(a1 + 896);
              v16 = 1;
              sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
              if ( v58 )
                sub_140001660(v56, v58, 1);
              if ( v60 )
                sub_140001660(v57, v60, 1);
            }
          }
          else
          {
            v18 = v43;
            v17 = v42;
            sub_141684120(&v25, a1 + 520, 360);
            v53 = *(_OWORD *)(a1 + 880);
            *(_QWORD *)&v54 = *(_QWORD *)(a1 + 896);
            v16 = 1;
            sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
            if ( v60 )
              sub_140001660(v57, v60, 1);
          }
          v62 = 0;
          sub_140014150(v35);
        }
        else
        {
          v18 = v45;
          v17 = v44;
          sub_141684120(&v25, a1 + 520, 360);
          v53 = *(_OWORD *)(a1 + 880);
          *(_QWORD *)&v54 = *(_QWORD *)(a1 + 896);
          v16 = 1;
          sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
          v62 = 0;
          sub_140014150(v35);
        }
      }
      else
      {
        v18 = v33[1];
        v17 = v33[0];
        sub_141684120(&v25, a1 + 520, 360);
        v53 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v54 = *(_QWORD *)(a1 + 896);
        v16 = 1;
        sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
        v62 = 0;
        sub_140014150(v35);
      }
    }
    else
    {
      v18 = v34[1];
      v17 = v34[0];
      sub_141684120(&v25, a1 + 520, 360);
      v53 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v54 = *(_QWORD *)(a1 + 896);
      v16 = 1;
      sub_14047E370((unsigned int)&v25, v22, (unsigned int)&v16, (unsigned int)&v53, v23, v24);
      v62 = 0;
      sub_140014150(v35);
    }
  }
LABEL_53:
  if ( (_QWORD)v48 != -1 )
  {
    v8 = *((_QWORD *)&v48 + 1);
    v60 = v49;
    v61 = 0;
    v57 = *((_QWORD *)&v48 + 1);
    while ( v60 != v61 )
    {
      ++v61;
      v9 = v8 + 96;
      sub_1402C7520(v8, v2, v3, v4, v11);
      v8 = v9;
    }
    if ( (_QWORD)v48 )
      sub_140001660(*((_QWORD *)&v48 + 1), 96 * v48, 8);
  }
  return sub_140014270(v12);
}