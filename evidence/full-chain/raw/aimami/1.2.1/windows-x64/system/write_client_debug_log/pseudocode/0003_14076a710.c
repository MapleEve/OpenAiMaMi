// win 1.2.1 NEW write_client_debug_log 0x14076a710 d=1
__int64 __fastcall sub_14076A710(__int128 *a1)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 result; // rax
  __int128 v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int128 v13; // [rsp+70h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+0h]
  __int128 v15; // [rsp+90h] [rbp+10h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+20h]
  __int64 v17; // [rsp+A8h] [rbp+28h]
  __int64 v18; // [rsp+B0h] [rbp+30h]
  __int64 v19; // [rsp+B8h] [rbp+38h]
  __int64 v20; // [rsp+C0h] [rbp+40h]
  __int64 v21; // [rsp+C8h] [rbp+48h]
  __int64 v22; // [rsp+D0h] [rbp+50h]
  __int64 v23; // [rsp+D8h] [rbp+58h]

  v23 = -2; /*0x14076a720*/
  v16 = *((_QWORD *)a1 + 2); /*0x14076a72c*/
  v15 = *a1; /*0x14076a733*/
  v14 = *((_QWORD *)a1 + 5); /*0x14076a73b*/
  v13 = *(__int128 *)((char *)a1 + 24); /*0x14076a743*/
  v12 = *((_QWORD *)a1 + 8); /*0x14076a74b*/
  v11 = a1[3]; /*0x14076a753*/
  v1 = *((_QWORD *)a1 + 10); /*0x14076a75b*/
  v2 = 0; /*0x14076a75f*/
  v22 = *((_QWORD *)a1 + 9); /*0x14076a761*/
  v3 = *((_QWORD *)a1 + 11); /*0x14076a769*/
  v19 = v1; /*0x14076a76d*/
  if ( v22 == -1 ) /*0x14076a771*/
    LODWORD(v1) = 0; /*0x14076a771*/
  v21 = *((_QWORD *)a1 + 12); /*0x14076a779*/
  v4 = *((_QWORD *)a1 + 13); /*0x14076a781*/
  v5 = *((_QWORD *)a1 + 14); /*0x14076a785*/
  v18 = v4; /*0x14076a789*/
  if ( v21 == -1 ) /*0x14076a78d*/
    v4 = 0; /*0x14076a78d*/
  v20 = *((_QWORD *)a1 + 15); /*0x14076a795*/
  v6 = *((_QWORD *)a1 + 16); /*0x14076a79d*/
  v7 = *((_QWORD *)a1 + 17); /*0x14076a7a4*/
  v17 = v6; /*0x14076a7ab*/
  if ( v20 != -1 ) /*0x14076a7af*/
    v2 = v6; /*0x14076a7af*/
  sub_1407E4A20((unsigned int)&v15, (unsigned int)&v13, (unsigned int)&v11, v1, v3, v4, v5, v2, v7); /*0x14076a7d8*/
  if ( (unsigned __int64)(v22 - 1) > 0xFFFFFFFFFFFFFFFDuLL ) /*0x14076a7ea*/
  {
    v8 = v21; /*0x14076a830*/
    if ( (unsigned __int64)(v21 - 1) > 0xFFFFFFFFFFFFFFFDuLL ) /*0x14076a83c*/
    {
LABEL_9:
      v9 = v20; /*0x14076a809*/
      result = v20 - 1; /*0x14076a80d*/
      if ( (unsigned __int64)(v20 - 1) > 0xFFFFFFFFFFFFFFFDuLL ) /*0x14076a815*/
        return result; /*0x14076a815*/
      return sub_140001360(v17, v9, 1); /*0x14076a815*/
    }
  }
  else
  {
    sub_140001360(v19, v22, 1); /*0x14076a7f6*/
    v8 = v21; /*0x14076a7fb*/
    if ( (unsigned __int64)(v21 - 1) > 0xFFFFFFFFFFFFFFFDuLL ) /*0x14076a807*/
      goto LABEL_9; /*0x14076a807*/
  }
  sub_140001360(v18, v8, 1); /*0x14076a848*/
  v9 = v20; /*0x14076a84d*/
  result = v20 - 1; /*0x14076a851*/
  if ( (unsigned __int64)(v20 - 1) <= 0xFFFFFFFFFFFFFFFDuLL ) /*0x14076a859*/
    return sub_140001360(v17, v9, 1); /*0x14076a817*/
  return result; /*0x14076a827*/
}