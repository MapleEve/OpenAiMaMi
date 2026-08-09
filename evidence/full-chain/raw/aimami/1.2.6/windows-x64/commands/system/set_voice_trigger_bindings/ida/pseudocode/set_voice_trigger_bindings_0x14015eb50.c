// Pseudocode for set_voice_trigger_bindings (EA: 0x14015eb50, size: 0xf4d)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
__int64 __fastcall sub_14015EB50(__int64 a1)
{
  char v2; // r14
  int v3; // r15d
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BYTE v8[520]; // [rsp+68h] [rbp-18h] BYREF
  int v9; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v10; // [rsp+278h] [rbp+1F8h]
  __int128 v11; // [rsp+288h] [rbp+208h]
  __int64 v12; // [rsp+400h] [rbp+380h] BYREF
  __int128 v13; // [rsp+408h] [rbp+388h] BYREF
  __int128 v14; // [rsp+418h] [rbp+398h]
  _BYTE v15[360]; // [rsp+718h] [rbp+698h] BYREF
  __int128 v16; // [rsp+880h] [rbp+800h]
  __int64 v17; // [rsp+890h] [rbp+810h]
  __int64 v18; // [rsp+898h] [rbp+818h]
  int v19; // [rsp+8A0h] [rbp+820h]
  int v20; // [rsp+8A4h] [rbp+824h]
  __int64 v21; // [rsp+8A8h] [rbp+828h] BYREF
  __int128 v22; // [rsp+8B0h] [rbp+830h]
  __int128 v23; // [rsp+8C0h] [rbp+840h]
  __int128 *v24; // [rsp+8D0h] [rbp+850h]
  __int64 v25; // [rsp+8D8h] [rbp+858h]
  __int128 v26; // [rsp+BC0h] [rbp+B40h] BYREF
  __int64 v27; // [rsp+BD0h] [rbp+B50h]
  _OWORD v28[2]; // [rsp+BD8h] [rbp+B58h] BYREF
  _OWORD v29[2]; // [rsp+BF8h] [rbp+B78h] BYREF
  _OWORD v30[2]; // [rsp+C18h] [rbp+B98h] BYREF
  _OWORD v31[9]; // [rsp+C38h] [rbp+BB8h] BYREF
  __int128 v32; // [rsp+CD0h] [rbp+C50h] BYREF
  __int128 v33; // [rsp+CE0h] [rbp+C60h]
  __int128 v34; // [rsp+CF0h] [rbp+C70h] BYREF
  __int128 v35; // [rsp+D00h] [rbp+C80h]
  __int128 v36; // [rsp+D10h] [rbp+C90h] BYREF
  __int128 v37; // [rsp+D20h] [rbp+CA0h]
  __int128 v38; // [rsp+D30h] [rbp+CB0h] BYREF
  __int128 v39; // [rsp+D40h] [rbp+CC0h]
  __int128 v40; // [rsp+D50h] [rbp+CD0h] BYREF
  __int128 v41; // [rsp+D60h] [rbp+CE0h]
  __int64 v42; // [rsp+D70h] [rbp+CF0h]
  __int64 v43; // [rsp+D78h] [rbp+CF8h]
  __int128 v44; // [rsp+D80h] [rbp+D00h] BYREF
  __int64 v45; // [rsp+D90h] [rbp+D10h]
  __int64 v46; // [rsp+D98h] [rbp+D18h]
  __int64 v47; // [rsp+DA0h] [rbp+D20h]
  __int64 v48; // [rsp+DA8h] [rbp+D28h]
  __int128 v49; // [rsp+DB0h] [rbp+D30h] BYREF
  __int128 v50; // [rsp+DC0h] [rbp+D40h]
  __int64 v51; // [rsp+DD0h] [rbp+D50h]
  __int64 v52; // [rsp+DD8h] [rbp+D58h]
  __int64 v53; // [rsp+DE0h] [rbp+D60h]
  __int64 v54; // [rsp+DE8h] [rbp+D68h]
  char v55; // [rsp+DF7h] [rbp+D77h]
  __int64 v56; // [rsp+DF8h] [rbp+D78h]
  __int64 v57; // [rsp+E00h] [rbp+D80h]
  char v58; // [rsp+E0Fh] [rbp+D8Fh]
  __int64 v59; // [rsp+E10h] [rbp+D90h]

  v59 = -2;
  sub_14172B820(v8, a1, 520);
  sub_14172B820(v15, a1 + 520, 400);
  v45 = *(_QWORD *)(a1 + 936);
  v44 = *(_OWORD *)(a1 + 920);
  v25 = 0;
  v21 = (__int64)aSetVoiceTrigge;
  *(_QWORD *)&v22 = 26;
  *((_QWORD *)&v22 + 1) = aApp;
  *(_QWORD *)&v23 = 3;
  *((_QWORD *)&v23 + 1) = v8;
  v24 = &v44;
  v58 = 1;
  sub_1401A9630((__int64)&v9, (__int64)&v21);
  if ( v9 == -1 )
  {
    v14 = v11;
    v13 = v10;
    sub_14172B820(&v21, a1 + 520, 360);
    v49 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v50 = *(_QWORD *)(a1 + 896);
    v12 = 1;
    v58 = 0;
    sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
  }
  else
  {
    sub_14172B820(v31, &v9, 152);
    v25 = 0;
    v21 = (__int64)aSetVoiceTrigge;
    *(_QWORD *)&v22 = 26;
    *((_QWORD *)&v22 + 1) = aActivestyle;
    *(_QWORD *)&v23 = 11;
    *((_QWORD *)&v23 + 1) = v8;
    v24 = &v44;
    sub_1404F6850(v30, &v21);
    LOBYTE(v57) = LOBYTE(v30[0]) == 0xFF;
    if ( LOBYTE(v30[0]) == 0xFF )
    {
      v2 = BYTE1(v30[0]);
      v25 = 0;
      v21 = (__int64)aSetVoiceTrigge;
      *(_QWORD *)&v22 = 26;
      *((_QWORD *)&v22 + 1) = aHoldkeycode;
      *(_QWORD *)&v23 = 11;
      *((_QWORD *)&v23 + 1) = v8;
      v24 = &v44;
      sub_140956B00(v29, &v21);
      LOBYTE(v57) = LOBYTE(v29[0]) == 0xFF;
      if ( LOBYTE(v29[0]) == 0xFF )
      {
        v3 = DWORD2(v29[0]);
        v25 = 0;
        v21 = (__int64)aSetVoiceTrigge;
        *(_QWORD *)&v22 = 26;
        *((_QWORD *)&v22 + 1) = aHoldkeylabel;
        *(_QWORD *)&v23 = 12;
        *((_QWORD *)&v23 + 1) = v8;
        v24 = &v44;
        sub_140955980(&v40, &v21);
        LOBYTE(v57) = (_BYTE)v40 == 0xFF;
        if ( (_BYTE)v40 == 0xFF )
        {
          v56 = *((_QWORD *)&v40 + 1);
          v53 = v41;
          v25 = 0;
          v21 = (__int64)aSetVoiceTrigge;
          *(_QWORD *)&v22 = 26;
          *((_QWORD *)&v22 + 1) = aHoldkeykind;
          *(_QWORD *)&v23 = 11;
          *((_QWORD *)&v23 + 1) = v8;
          v24 = &v44;
          sub_140955980(&v38, &v21);
          LOBYTE(v57) = (_BYTE)v38 == 0xFF;
          if ( (_BYTE)v38 == 0xFF )
          {
            v54 = *((_QWORD *)&v38 + 1);
            v52 = v39;
            v25 = 0;
            v21 = (__int64)aSetVoiceTrigge;
            *(_QWORD *)&v22 = 26;
            *((_QWORD *)&v22 + 1) = aHoldmodifierma;
            *(_QWORD *)&v23 = 16;
            *((_QWORD *)&v23 + 1) = v8;
            v24 = &v44;
            sub_140954A30(&v32, &v21);
            LOBYTE(v57) = (_BYTE)v32 == 0xFF;
            if ( (_BYTE)v32 == 0xFF )
            {
              v42 = *((_QWORD *)&v32 + 1);
              v43 = v33;
              v25 = 0;
              v21 = (__int64)aSetVoiceTrigge;
              *(_QWORD *)&v22 = 26;
              *((_QWORD *)&v22 + 1) = aTogglekeycode;
              *(_QWORD *)&v23 = 13;
              *((_QWORD *)&v23 + 1) = v8;
              v24 = &v44;
              sub_140956B00(v28, &v21);
              LOBYTE(v57) = LOBYTE(v28[0]) == 0xFF;
              if ( LOBYTE(v28[0]) == 0xFF )
              {
                v4 = *((_QWORD *)&v28[0] + 1);
                v25 = 0;
                v21 = (__int64)aSetVoiceTrigge;
                *(_QWORD *)&v22 = 26;
                *((_QWORD *)&v22 + 1) = aTogglekeylabel;
                *(_QWORD *)&v23 = 14;
                *((_QWORD *)&v23 + 1) = v8;
                v24 = &v44;
                sub_140955980(&v36, &v21);
                LOBYTE(v57) = (_BYTE)v36 == 0xFF;
                if ( (_BYTE)v36 == 0xFF )
                {
                  v51 = *((_QWORD *)&v36 + 1);
                  v47 = v37;
                  v25 = 0;
                  v21 = (__int64)aSetVoiceTrigge;
                  *(_QWORD *)&v22 = 26;
                  *((_QWORD *)&v22 + 1) = aTogglekeykind;
                  *(_QWORD *)&v23 = 13;
                  *((_QWORD *)&v23 + 1) = v8;
                  v24 = &v44;
                  sub_140955980(&v34, &v21);
                  LOBYTE(v57) = (_BYTE)v34 == 0xFF;
                  if ( (_BYTE)v34 == 0xFF )
                  {
                    v48 = *((_QWORD *)&v34 + 1);
                    v46 = v35;
                    v25 = 0;
                    v21 = (__int64)aSetVoiceTrigge;
                    *(_QWORD *)&v22 = 26;
                    *((_QWORD *)&v22 + 1) = aTogglemodifier;
                    *(_QWORD *)&v23 = 18;
                    *((_QWORD *)&v23 + 1) = v8;
                    v24 = &v44;
                    sub_140954A30(&v49, &v21);
                    LOBYTE(v57) = v49;
                    if ( (_BYTE)v49 == 0xFF )
                    {
                      sub_1403D6990(
                        (unsigned int)&v12,
                        (unsigned int)v31,
                        v2,
                        v3,
                        (__int64)&v40 + 8,
                        (__int64)&v38 + 8,
                        v42,
                        v43,
                        v4,
                        (__int64)&v36 + 8,
                        (__int64)&v34 + 8,
                        SBYTE8(v49),
                        v50);
                      sub_14172B820(&v9, v15, 400);
                      if ( (_DWORD)v12 == 2 )
                      {
                        v55 = 1;
                        sub_1401A80B0(v31, &v13);
                        v23 = v31[1];
                        v22 = v31[0];
                        v21 = 2;
                      }
                      else
                      {
                        sub_14172B820(&v21, &v12, 792);
                      }
                      v55 = 0;
                      sub_140A946C0(&v9, &v21);
                      goto LABEL_53;
                    }
                    v14 = v50;
                    v13 = v49;
                    sub_14172B820(&v21, v15, 360);
                    v26 = v16;
                    v27 = v17;
                    v12 = 1;
                    sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v26, v19, v20);
                    if ( v48 )
                      sub_140001660(v46, v48, 1);
                    if ( v51 )
                      sub_140001660(v47, v51, 1);
                    if ( v54 )
                      sub_140001660(v52, v54, 1);
                    if ( v56 )
                      sub_140001660(v53, v56, 1);
                  }
                  else
                  {
                    v14 = v35;
                    v13 = v34;
                    sub_14172B820(&v21, v15, 360);
                    v49 = v16;
                    *(_QWORD *)&v50 = v17;
                    v12 = 1;
                    sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
                    if ( v51 )
                      sub_140001660(v47, v51, 1);
                    if ( v54 )
                      sub_140001660(v52, v54, 1);
                    if ( v56 )
                      sub_140001660(v53, v56, 1);
                  }
                }
                else
                {
                  v14 = v37;
                  v13 = v36;
                  sub_14172B820(&v21, v15, 360);
                  v49 = v16;
                  *(_QWORD *)&v50 = v17;
                  v12 = 1;
                  sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
                  if ( v54 )
                    sub_140001660(v52, v54, 1);
                  if ( v56 )
                    sub_140001660(v53, v56, 1);
                }
              }
              else
              {
                v14 = v28[1];
                v13 = v28[0];
                sub_14172B820(&v21, a1 + 520, 360);
                v49 = *(_OWORD *)(a1 + 880);
                *(_QWORD *)&v50 = *(_QWORD *)(a1 + 896);
                v12 = 1;
                sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
                if ( v54 )
                  sub_140001660(v52, v54, 1);
                if ( v56 )
                  sub_140001660(v53, v56, 1);
              }
            }
            else
            {
              v14 = v33;
              v13 = v32;
              sub_14172B820(&v21, a1 + 520, 360);
              v49 = *(_OWORD *)(a1 + 880);
              *(_QWORD *)&v50 = *(_QWORD *)(a1 + 896);
              v12 = 1;
              sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
              if ( v54 )
                sub_140001660(v52, v54, 1);
              if ( v56 )
                sub_140001660(v53, v56, 1);
            }
          }
          else
          {
            v14 = v39;
            v13 = v38;
            sub_14172B820(&v21, a1 + 520, 360);
            v49 = *(_OWORD *)(a1 + 880);
            *(_QWORD *)&v50 = *(_QWORD *)(a1 + 896);
            v12 = 1;
            sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
            if ( v56 )
              sub_140001660(v53, v56, 1);
          }
          v58 = 0;
          sub_1400437E0(v31);
        }
        else
        {
          v14 = v41;
          v13 = v40;
          sub_14172B820(&v21, a1 + 520, 360);
          v49 = *(_OWORD *)(a1 + 880);
          *(_QWORD *)&v50 = *(_QWORD *)(a1 + 896);
          v12 = 1;
          sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
          v58 = 0;
          sub_1400437E0(v31);
        }
      }
      else
      {
        v14 = v29[1];
        v13 = v29[0];
        sub_14172B820(&v21, a1 + 520, 360);
        v49 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v50 = *(_QWORD *)(a1 + 896);
        v12 = 1;
        sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
        v58 = 0;
        sub_1400437E0(v31);
      }
    }
    else
    {
      v14 = v30[1];
      v13 = v30[0];
      sub_14172B820(&v21, a1 + 520, 360);
      v49 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v50 = *(_QWORD *)(a1 + 896);
      v12 = 1;
      sub_140AFFC30((__int64)&v21, v18, (__int64)&v12, &v49, v19, v20);
      v58 = 0;
      sub_1400437E0(v31);
    }
  }
LABEL_53:
  if ( (_QWORD)v44 != -1 )
  {
    v5 = *((_QWORD *)&v44 + 1);
    v56 = v45;
    v57 = 0;
    v53 = *((_QWORD *)&v44 + 1);
    while ( v56 != v57 )
    {
      ++v57;
      v6 = v5 + 96;
      sub_140401FB0();
      v5 = v6;
    }
    if ( (_QWORD)v44 )
      sub_140001660(*((_QWORD *)&v44 + 1), 96 * v44, 8);
  }
  return sub_140043900(v8);
}
