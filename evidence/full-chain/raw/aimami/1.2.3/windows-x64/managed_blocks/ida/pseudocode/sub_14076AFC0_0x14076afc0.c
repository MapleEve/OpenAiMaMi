// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14076AFC0(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r15
  _BYTE *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdi
  _DWORD v21[4]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+78h] [rbp-8h]
  _QWORD v28[5]; // [rsp+80h] [rbp+0h] BYREF
  char v29; // [rsp+A8h] [rbp+28h]
  __int16 v30; // [rsp+B0h] [rbp+30h]
  __int64 v31; // [rsp+B8h] [rbp+38h]

  v31 = -2; /*0x14076afd9*/
  v6 = sub_141470CD0(a1, a2); /*0x14076afea*/
  if ( *(_BYTE *)(v6 + 16) == 1 ) /*0x14076aff3*/
  {
    v7 = *(_QWORD *)v6; /*0x14076aff9*/
    v8 = *(_QWORD *)(v6 + 8); /*0x14076affc*/
  }
  else
  {
    v19 = v6; /*0x14076b1ce*/
    v7 = sub_141486EF0(); /*0x14076b1d6*/
    v6 = v19; /*0x14076b1d9*/
    *(_QWORD *)v19 = v7; /*0x14076b1dc*/
    *(_QWORD *)(v19 + 8) = v8; /*0x14076b1df*/
    *(_BYTE *)(v19 + 16) = 1; /*0x14076b1e3*/
  }
  *(_QWORD *)v6 = v7 + 1; /*0x14076b004*/
  v24 = *(&off_141786750 + 1); /*0x14076b00e*/
  v23 = off_141786750; /*0x14076b019*/
  *(_QWORD *)&v25 = v7; /*0x14076b01d*/
  *((_QWORD *)&v25 + 1) = v8; /*0x14076b021*/
  v26 = 0; /*0x14076b025*/
  v27 = a3; /*0x14076b02d*/
  v28[0] = a2; /*0x14076b035*/
  v28[1] = a3; /*0x14076b039*/
  v28[2] = 0; /*0x14076b03d*/
  v28[3] = a3; /*0x14076b045*/
  v28[4] = 0xA0000000ALL; /*0x14076b053*/
  v29 = 1; /*0x14076b057*/
  v30 = 0; /*0x14076b05b*/
  do /*0x14076b084*/
  {
    v9 = v28[0]; /*0x14076b08a*/
    LOBYTE(v10) = sub_1407BC790(v21, v28); /*0x14076b094*/
    if ( v21[0] == 1 ) /*0x14076b09e*/
    {
      v11 = v26; /*0x14076b0a4*/
      v26 = v22; /*0x14076b0a8*/
      v12 = v22 - v11; /*0x14076b0ac*/
      v13 = v11 + v9; /*0x14076b0af*/
      if ( v22 == v11 ) /*0x14076b0b5*/
        goto LABEL_17; /*0x14076b0b5*/
LABEL_11:
      if ( *(_BYTE *)(v13 + v12 - 1) == 10 ) /*0x14076b0f6*/
      {
        if ( v12 == 1 ) /*0x14076b0fe*/
        {
          v12 = 0; /*0x14076b10e*/
        }
        else if ( *(_BYTE *)(v13 + v12 - 2) == 13 ) /*0x14076b106*/
        {
          v12 -= 2; /*0x14076b108*/
        }
        else
        {
          --v12; /*0x14076b112*/
        }
      }
      goto LABEL_17; /*0x14076b10c*/
    }
    if ( HIBYTE(v30) ) /*0x14076b0c4*/
      break; /*0x14076b0c4*/
    HIBYTE(v30) = 1; /*0x14076b0ca*/
    v12 = v27 - v26; /*0x14076b0d6*/
    LOBYTE(v10) = v30 | (v27 != v26); /*0x14076b0dc*/
    if ( (_BYTE)v10 != 1 ) /*0x14076b0e1*/
      break; /*0x14076b0e1*/
    v13 = v28[0] + v26; /*0x14076b0e7*/
    if ( v12 ) /*0x14076b0ee*/
      goto LABEL_11; /*0x14076b0ee*/
LABEL_17:
    v10 = (_BYTE *)sub_14033BC10(v13, v12); /*0x14076b120*/
    if ( v14 && *v10 == 91 && v10[v14 - 1] == 93 ) /*0x14076b140*/
    {
      if ( v14 == 1 || (char)v10[1] <= -65 ) /*0x14076b154*/
        sub_1416C2F60((_DWORD)v10, v14, 1, v14 - 1, (__int64)&off_141782B88); /*0x14076b205*/
      if ( v14 >= 0xB && !(*(_QWORD *)(v10 + 1) ^ 0x73656C69666F7270LL | (unsigned __int8)v10[9] ^ 0x2ELL) ) /*0x14076b174*/
      {
        v15 = sub_14033BE90(v10 + 10, v14 - 11, 34); /*0x14076b18b*/
        LOBYTE(v10) = sub_140475960(&v23, v15, v16); /*0x14076b19a*/
      }
    }
  }
  while ( !HIBYTE(v30) ); /*0x14076b084*/
  v17 = v23; /*0x14076b1a5*/
  v18 = v24; /*0x14076b1a9*/
  a1[2] = v25; /*0x14076b1b1*/
  a1[1] = v18; /*0x14076b1b5*/
  *a1 = v17; /*0x14076b1b9*/
  return (char)v10; /*0x14076b1bc*/
}