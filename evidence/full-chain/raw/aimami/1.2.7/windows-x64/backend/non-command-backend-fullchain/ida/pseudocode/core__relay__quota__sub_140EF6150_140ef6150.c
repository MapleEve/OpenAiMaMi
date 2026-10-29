// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140ef6150 | name sub_140EF6150
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140EF6150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // r9d
  char v14; // r10
  char v15; // r11
  unsigned __int64 v16; // rdx
  int v17; // r11d
  int v18; // r10d
  unsigned int v19; // r9d
  __int64 v21; // rdx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  char *v24; // rdx
  int v25; // r8d
  int v26; // r9d
  int v27; // r11d
  int v28; // r8d
  unsigned __int8 v29; // r10
  _BYTE v31[24]; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+40h] [rbp-40h]
  __int128 v33; // [rsp+48h] [rbp-38h]
  __int128 v34; // [rsp+58h] [rbp-28h]
  __int128 v35; // [rsp+68h] [rbp-18h]
  __int64 v36; // [rsp+78h] [rbp-8h]
  _QWORD v37[2]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v38[2]; // [rsp+90h] [rbp+10h] BYREF
  _BYTE v39[24]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+B8h] [rbp+38h]
  __int128 v41; // [rsp+C0h] [rbp+40h]
  __int128 v42; // [rsp+D0h] [rbp+50h]
  __int128 v43; // [rsp+E0h] [rbp+60h]
  __int64 v44; // [rsp+F0h] [rbp+70h]
  __int64 v45; // [rsp+F8h] [rbp+78h]
  __int128 v46; // [rsp+100h] [rbp+80h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+110h] [rbp+90h]
  __int64 v48; // [rsp+120h] [rbp+A0h]
  __int64 v49; // [rsp+128h] [rbp+A8h]

  v49 = -2;
  sub_140EF5AF0(v39, a2, a3);
  v46 = *(_OWORD *)&v39[8];
  v47 = v40;
  if ( *(_QWORD *)v39 == -1 )
  {
    *(_QWORD *)(a1 + 24) = v47;
    *(_OWORD *)(a1 + 8) = v46;
    *(_QWORD *)a1 = 1;
  }
  else
  {
    v36 = v44;
    v35 = v43;
    v34 = v42;
    v33 = v41;
    *(_OWORD *)&v31[8] = v46;
    v32 = v47;
    *(_QWORD *)v31 = *(_QWORD *)v39;
    sub_140EF6540(v39, a4, a5);
    if ( *(_QWORD *)v39 == -1 )
    {
      v9 = sub_141658CE0(v31);
      do
      {
        while ( 1 )
        {
          if ( !v10 )
          {
            v11 = 0;
            goto LABEL_24;
          }
          v11 = v10;
          v12 = v9 + v10;
          v13 = *(char *)(v9 + v10 - 1);
          if ( v13 < 0 )
            break;
          --v10;
          if ( v13 != 47 )
            goto LABEL_17;
        }
        v14 = *(_BYTE *)(v12 - 2);
        if ( v14 >= -64 )
        {
          v16 = v12 - 2;
          v18 = v14 & 0x1F;
        }
        else
        {
          v15 = *(_BYTE *)(v12 - 3);
          if ( v15 >= -64 )
          {
            v16 = v12 - 3;
            v17 = v15 & 0xF;
          }
          else
          {
            v16 = v12 - 4;
            v17 = ((*(_BYTE *)(v12 - 4) & 7) << 6) | v15 & 0x3F;
          }
          v18 = (v17 << 6) | v14 & 0x3F;
        }
        v10 = v16 - v9;
      }
      while ( ((v18 << 6) | v13 & 0x3F) == 0x2F );
LABEL_17:
      if ( v11 >= 3 )
      {
        v19 = (unsigned __int16)__ROL2__(*(_WORD *)(v12 - 3), 8);
        if ( !(v19 == 12150 ? 49 - *(unsigned __int8 *)(v12 - 1) : v19 < 0x2F77 ? 1 : -1) )
          v11 -= 3LL;
      }
LABEL_24:
      v38[0] = v9;
      v38[1] = v11;
      v21 = 0;
      while ( v21 != a5 )
      {
        v23 = v21;
        v24 = (char *)(a4 + v21);
        v25 = (unsigned __int8)*v24;
        if ( *v24 >= 0 )
        {
          v22 = (unsigned __int8 *)(v24 + 1);
        }
        else
        {
          v26 = v25 & 0x1F;
          v27 = v24[1] & 0x3F;
          if ( (unsigned __int8)v25 <= 0xDFu )
          {
            v22 = (unsigned __int8 *)(v24 + 2);
            v25 = v27 | (v26 << 6);
          }
          else
          {
            v28 = (v27 << 6) | v24[2] & 0x3F;
            if ( (unsigned __int8)*v24 < 0xF0u )
            {
              v22 = (unsigned __int8 *)(v24 + 3);
              v25 = (v26 << 12) | v28;
            }
            else
            {
              v29 = v24[3];
              v22 = (unsigned __int8 *)(v24 + 4);
              v25 = ((v26 & 7) << 18) | (v28 << 6) | v29 & 0x3F;
            }
          }
        }
        v21 = (__int64)&v22[-a4];
        if ( v25 != 47 )
          goto LABEL_35;
      }
      v23 = a5;
LABEL_35:
      v37[0] = v23 + a4;
      v37[1] = a5 - v23;
      *(_QWORD *)v39 = v38;
      *(_QWORD *)&v39[8] = sub_140186EE0;
      *(_QWORD *)&v39[16] = v37;
      v40 = sub_140186EE0;
      sub_1416ABFD0(&v46, &unk_141A5BEC7, v39);
      v45 = *((_QWORD *)&v46 + 1);
      v48 = v46;
      sub_1416594D0(v31, *((_QWORD *)&v46 + 1), v47);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v31[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v31;
      *(_QWORD *)a1 = 0;
      v7 = v48;
      if ( v48 )
      {
        v8 = v45;
        goto LABEL_37;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v39[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v39;
      *(_QWORD *)a1 = 1;
      v7 = *(_QWORD *)v31;
      if ( *(_QWORD *)v31 )
      {
        v8 = *(_QWORD *)&v31[8];
LABEL_37:
        sub_140001660(v8, v7, 1);
      }
    }
  }
  return a1;
}
