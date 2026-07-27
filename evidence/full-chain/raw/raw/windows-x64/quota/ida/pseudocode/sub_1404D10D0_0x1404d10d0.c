// win 1.2.1 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1404D10D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  char v12; // r9
  char v13; // r10
  char v14; // r11
  __int64 v15; // rcx
  int v16; // r10d
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  _QWORD v25[4]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  unsigned __int64 v29; // [rsp+68h] [rbp-8h]
  __int64 v30; // [rsp+70h] [rbp+0h]

  v30 = -2; /*0x1404d10e1*/
  v26[0] = a4; /*0x1404d10f0*/
  v26[1] = a5; /*0x1404d10f4*/
  v6 = sub_14033BC10(a2, a3); /*0x1404d10fe*/
  v8 = v7; /*0x1404d1103*/
  do /*0x1404d1198*/
  {
    while ( 1 ) /*0x1404d111c*/
    {
      if ( !v8 ) /*0x1404d111f*/
      {
        v27 = 0; /*0x1404d11ac*/
        v28 = 1; /*0x1404d11b4*/
        v29 = 0; /*0x1404d11bc*/
        goto LABEL_16; /*0x1404d11bc*/
      }
      v9 = v8; /*0x1404d1125*/
      v10 = v6 + v8; /*0x1404d1128*/
      v11 = *(char *)(v10 - 1); /*0x1404d112b*/
      if ( v11 < 0 ) /*0x1404d1133*/
        break; /*0x1404d1133*/
      v8 = v10 - 1 - v6; /*0x1404d1113*/
      if ( v11 != 47 ) /*0x1404d111a*/
        goto LABEL_12; /*0x1404d111a*/
    }
    v12 = *(_BYTE *)(v10 - 2); /*0x1404d1135*/
    if ( v12 >= -64 ) /*0x1404d113e*/
    {
      v15 = v10 - 2; /*0x1404d1165*/
      v17 = v12 & 0x1F; /*0x1404d1169*/
    }
    else
    {
      v13 = *(_BYTE *)(v10 - 3); /*0x1404d1140*/
      if ( v13 >= -64 ) /*0x1404d1149*/
      {
        v15 = v10 - 3; /*0x1404d116f*/
        v16 = v13 & 0xF; /*0x1404d1173*/
      }
      else
      {
        v14 = *(_BYTE *)(v10 - 4); /*0x1404d114b*/
        v15 = v10 - 4; /*0x1404d1150*/
        v16 = ((v14 & 7) << 6) | v13 & 0x3F; /*0x1404d1160*/
      }
      v17 = (v16 << 6) | v12 & 0x3F; /*0x1404d117f*/
    }
    v8 = v15 - v6; /*0x1404d1191*/
  }
  while ( ((v17 << 6) | v11 & 0x3F) == 0x2F ); /*0x1404d1198*/
LABEL_12:
  if ( v9 < 0 ) /*0x1404d119d*/
  {
    v18 = 0; /*0x1404d11a3*/
    goto LABEL_14; /*0x1404d11a3*/
  }
  v20 = v6; /*0x1404d1226*/
  v21 = v9; /*0x1404d1229*/
  nullsub_1(v8); /*0x1404d122c*/
  v22 = sub_140001650(v21, 1); /*0x1404d1239*/
  v18 = 1; /*0x1404d123e*/
  v9 = v21; /*0x1404d1243*/
  if ( !v22 ) /*0x1404d1249*/
LABEL_14:
    sub_1416C2D4B(v18, v9); /*0x1404d11a5*/
  v23 = v22; /*0x1404d124f*/
  sub_141684120(v22, v20, v21); /*0x1404d125e*/
  v27 = v21; /*0x1404d1263*/
  v28 = v23; /*0x1404d1267*/
  v29 = v21; /*0x1404d126b*/
  if ( v21 >= 3 && !(*(_WORD *)(v23 + v21 - 3) ^ 0x762F | *(unsigned __int8 *)(v23 + v21 - 1) ^ 0x31) )
  {
    v24 = v21 - 3; /*0x1404d1295*/
    if ( v24 && *(char *)(v23 + v24) <= -65 )
      sub_1416C32A0("assertion failed: self.is_char_boundary(new_len)", 48, &off_14175D498);
    v29 = v24; /*0x1404d12a1*/
  }
LABEL_16:
  v25[0] = &v27; /*0x1404d11c4*/
  v25[1] = sub_1400015F0; /*0x1404d11d3*/
  v25[2] = v26; /*0x1404d11db*/
  v25[3] = sub_14041F680; /*0x1404d11e6*/
  sub_14149C0F0(a1, &unk_14175D465, v25); /*0x1404d11f8*/
  if ( v27 ) /*0x1404d1205*/
    sub_140001660(v28, v27, 1); /*0x1404d1211*/
  return a1; /*0x1404d1219*/
}