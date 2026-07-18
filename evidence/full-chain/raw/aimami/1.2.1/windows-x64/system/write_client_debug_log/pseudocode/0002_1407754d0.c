// win 1.2.1 NEW write_client_debug_log 0x1407754d0 d=1
__int64 __fastcall sub_1407754D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int8 *v7; // rdx
  int v8; // eax
  __int128 v9; // xmm1
  __m128i v11[9]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v12[31]; // [rsp+D9h] [rbp+59h]
  _QWORD v13[3]; // [rsp+F8h] [rbp+78h] BYREF
  _QWORD v14[6]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v15; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v16; // [rsp+150h] [rbp+D0h]
  char v17; // [rsp+15Fh] [rbp+DFh] BYREF
  __int64 v18; // [rsp+160h] [rbp+E0h]

  v18 = -2; /*0x1407754e7*/
  v3 = *a2; /*0x1407754f5*/
  v4 = a2[1]; /*0x1407754f8*/
  v5 = a2[2]; /*0x1407754fc*/
  v6 = a2[3]; /*0x140775500*/
  if ( (sub_1405FE300(a2) & 1) != 0 ) /*0x14077550e*/
    goto LABEL_6; /*0x14077550e*/
  v8 = *v7; /*0x140775510*/
  if ( v8 == 4 ) /*0x140775516*/
  {
    sub_140A1F830(v11, *((_QWORD *)v7 + 2), *((_QWORD *)v7 + 3)); /*0x140775621*/
    if ( v11[0].m128i_i64[0] == -1 ) /*0x14077562b*/
      goto LABEL_5; /*0x14077562b*/
LABEL_9:
    sub_1415B2FE0((__m128i *)a1, v11, 0x90u); /*0x140775631*/
    return a1; /*0x14077563e*/
  }
  if ( v8 != 5 ) /*0x14077551f*/
  {
    v7 = (unsigned __int8 *)sub_1415CA890(v7, &v17, &unk_1416C7A68); /*0x14077569d*/
    goto LABEL_6; /*0x1407756a0*/
  }
  sub_1402FEE30(v11, v7 + 8); /*0x14077552d*/
  if ( v11[0].m128i_i64[0] != -1 ) /*0x140775537*/
    goto LABEL_9; /*0x140775537*/
LABEL_5:
  v7 = (unsigned __int8 *)v11[0].m128i_i64[1]; /*0x14077553d*/
LABEL_6:
  v14[1] = v3; /*0x140775541*/
  v14[2] = v4; /*0x140775548*/
  v14[3] = v5; /*0x14077554f*/
  v14[4] = v6; /*0x140775556*/
  v14[5] = v7; /*0x14077555d*/
  v14[0] = 0x8000000000000008uLL; /*0x14077556e*/
  *(_QWORD *)&v15 = 0; /*0x140775575*/
  *((_QWORD *)&v15 + 1) = 1; /*0x140775580*/
  v16 = 0; /*0x14077558b*/
  v13[2] = 1610612768; /*0x140775596*/
  v13[0] = &v15; /*0x1407755a8*/
  v13[1] = &off_1416A2CE8; /*0x1407755b3*/
  if ( (unsigned __int8)sub_141170260((__int64)v14, v13) ) /*0x1407755c5*/
    sub_1415F0BC0( /*0x14077567c*/
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v17,
      (unsigned int)&unk_1416A1C00,
      (__int64)&off_1416A2DA0);
  *(_OWORD *)&v12[7] = v15; /*0x1407755e1*/
  *(_QWORD *)&v12[23] = v16; /*0x1407755e5*/
  sub_140663790(v14); /*0x1407755f0*/
  *(_BYTE *)(a1 + 8) = 3; /*0x1407755f5*/
  v9 = *(_OWORD *)&v12[15]; /*0x1407755fd*/
  *(_OWORD *)(a1 + 9) = *(_OWORD *)v12; /*0x140775601*/
  *(_OWORD *)(a1 + 24) = v9; /*0x140775605*/
  *(_QWORD *)a1 = -1; /*0x140775609*/
  return a1; /*0x140775646*/
}