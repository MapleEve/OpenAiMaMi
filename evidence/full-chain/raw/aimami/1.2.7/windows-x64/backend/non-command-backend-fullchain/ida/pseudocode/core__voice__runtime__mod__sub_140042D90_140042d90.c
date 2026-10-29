// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140042d90 | name sub_140042D90
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140042D90(volatile signed __int64 **a1)
{
  int v1; // r14d
  volatile signed __int64 *v2; // rsi
  volatile signed __int64 *v3; // rdi
  volatile signed __int64 **v5; // rbx
  volatile signed __int64 **v6; // rdi
  volatile signed __int64 **v7; // rsi
  volatile signed __int64 **v8; // rsi
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  volatile signed __int64 *v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+48h] [rbp-38h]
  volatile signed __int64 *v12; // [rsp+58h] [rbp-28h]
  volatile signed __int64 **v13; // [rsp+60h] [rbp-20h]
  volatile signed __int64 **v14; // [rsp+68h] [rbp-18h]
  volatile signed __int64 **v15; // [rsp+70h] [rbp-10h]
  volatile signed __int64 **v16; // [rsp+78h] [rbp-8h]
  volatile signed __int64 **v17; // [rsp+80h] [rbp+0h]
  volatile signed __int64 **v18; // [rsp+88h] [rbp+8h]
  __int16 v19; // [rsp+F9h] [rbp+79h]
  char v20; // [rsp+1CAh] [rbp+14Ah]
  _BYTE v21[24]; // [rsp+2D78h] [rbp+2CF8h] BYREF
  _OWORD v22[5]; // [rsp+2D90h] [rbp+2D10h] BYREF
  _OWORD v23[5]; // [rsp+2DE0h] [rbp+2D60h] BYREF
  __int64 *v24; // [rsp+2E38h] [rbp+2DB8h] BYREF
  __int64 (__fastcall *v25)(_QWORD, _QWORD); // [rsp+2E40h] [rbp+2DC0h] BYREF
  volatile signed __int64 **v26; // [rsp+2E48h] [rbp+2DC8h]
  volatile signed __int64 **v27; // [rsp+2E50h] [rbp+2DD0h]
  volatile signed __int64 **v28; // [rsp+2E58h] [rbp+2DD8h]
  __int64 v29; // [rsp+2E60h] [rbp+2DE0h] BYREF
  volatile signed __int64 **v30; // [rsp+2E68h] [rbp+2DE8h]
  char v31; // [rsp+2E76h] [rbp+2DF6h]
  char v32; // [rsp+2E77h] [rbp+2DF7h]
  __int64 v33; // [rsp+2E78h] [rbp+2DF8h]

  v33 = -2;
  v30 = a1;
  v32 = 1;
  sub_1415094D0(&v9);
  v19 = 257;
  sub_1415096A0(v22, &v9);
  if ( LODWORD(v22[0]) == 2 )
  {
    v29 = *((_QWORD *)&v22[0] + 1);
    v1 = (int)v30;
    v2 = v30[33];
    v3 = v30[34];
    v24 = &v29;
    v25 = sub_1416BB0B0;
    sub_1416ABFD0(v21, &unk_141942440, &v24);
    sub_140C87C70(v1, (_DWORD)v2, 1, (_DWORD)v3, (__int64)v21);
    if ( (unsigned int)(v29 & 3) - 2 >= 2 && (v29 & 3) != 0 )
    {
      v25 = (__int64 (__fastcall *)(_QWORD, _QWORD))(v29 - 1);
      LOBYTE(v24) = 3;
      sub_1416BCB00(&v25);
    }
    v32 = 1;
    sub_1400334C0(&v9);
    return sub_14002D040(v30);
  }
  else
  {
    v23[4] = v22[4];
    v23[3] = v22[3];
    v23[2] = v22[2];
    v23[1] = v22[1];
    v23[0] = v22[0];
    v31 = 1;
    sub_1400334C0(&v9);
    v5 = v30 + 24;
    v6 = v30 + 27;
    v7 = v30 + 19;
    v10 = v30[23];
    v9 = *(_OWORD *)(v30 + 21);
    v13 = v30 + 24;
    v14 = v30 + 27;
    v11 = *((_OWORD *)v30 + 15);
    v12 = v30[32];
    v15 = v30 + 33;
    v16 = v30;
    v17 = v30 + 34;
    v18 = v30 + 19;
    v20 = 0;
    v31 = 0;
    sub_140883150(v23, &v9, &off_141942428);
    v28 = v5;
    v27 = v6;
    v26 = v7;
    v32 = 0;
    sub_140033750(v23);
    sub_14002E1F0(v30);
    v8 = v30;
    if ( *v28 )
      sub_140001660(v30[25], *v28, 1);
    if ( *v27 )
      sub_140001660(v8[28], *v27, 1);
    return sub_1409499D0(v26);
  }
}
