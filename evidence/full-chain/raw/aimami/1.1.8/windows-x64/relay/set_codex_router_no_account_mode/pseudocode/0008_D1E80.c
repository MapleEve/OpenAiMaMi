// win 1.1.8 set_codex_router_no_account_mode node va=0x1407d1e80 depth=1
// D1E80
__int64 __fastcall sub_1407D1E80(__int64 a1, __int64 (__fastcall **a2)())
{
  __int64 (__fastcall *v3)(); // r15
  __int64 (__fastcall *v4)(); // r12
  __int64 (__fastcall *v5)(); // rdi
  __int64 (__fastcall *v6)(); // rbx
  __int64 (__fastcall *v7)(); // r8
  _BYTE *v8; // rax
  char v9; // cl
  __int64 v11; // rax
  _BYTE v12[31]; // [rsp+51h] [rbp-2Fh]
  _QWORD v13[3]; // [rsp+70h] [rbp-10h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+88h] [rbp+8h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+90h] [rbp+10h]
  __int64 (__fastcall *v16)(); // [rsp+98h] [rbp+18h]
  __int64 (__fastcall *v17)(); // [rsp+A0h] [rbp+20h]
  __int64 (__fastcall *v18)(); // [rsp+A8h] [rbp+28h]
  __int64 v19; // [rsp+B0h] [rbp+30h]
  __int128 v20; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h]
  char v22; // [rsp+D7h] [rbp+57h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+58h]

  v23 = -2; /*0x1407d1e99*/
  v3 = *a2; /*0x1407d1ea4*/
  v4 = a2[1]; /*0x1407d1ea7*/
  v5 = a2[2]; /*0x1407d1eab*/
  v6 = a2[3]; /*0x1407d1eaf*/
  v7 = a2[4]; /*0x1407d1eb3*/
  if ( *((_BYTE *)v7 + 480) == 6 ) /*0x1407d1ebf*/
  {
    v14 = a2; /*0x1407d1f09*/
    v15 = sub_1405906F0; /*0x1407d1f18*/
    v16 = (__int64 (__fastcall *)())(a2 + 2); /*0x1407d1f1c*/
    v17 = sub_1405906F0; /*0x1407d1f20*/
    sub_14108F360((unsigned __int8 *)v13, byte_14133688E, (unsigned __int64)&v14); /*0x1407d1f36*/
    v11 = sub_14127E270(v13); /*0x1407d1f3e*/
  }
  else
  {
    v8 = (_BYTE *)sub_1410242F0((__int64)a2[2], (unsigned __int64)a2[3], (__int64)v7 + 480); /*0x1407d1ece*/
    v9 = 2; /*0x1407d1ed3*/
    if ( !v8 || !*v8 ) /*0x1407d1eda*/
      goto LABEL_6; /*0x1407d1edf*/
    if ( *v8 == 1 ) /*0x1407d1ee4*/
    {
      v9 = v8[1]; /*0x1407d1eea*/
LABEL_6:
      *(_BYTE *)(a1 + 1) = v9; /*0x1407d1eee*/
      *(_BYTE *)a1 = 6; /*0x1407d1ef1*/
      return a1; /*0x1407d1ef1*/
    }
    v11 = sub_1412794B0((__int64)v8, (__int64)&v22, (__int64)&unk_1413330A8); /*0x1407d1fe9*/
  }
  v15 = v3; /*0x1407d1f43*/
  v16 = v4; /*0x1407d1f47*/
  v17 = v5; /*0x1407d1f4b*/
  v18 = v6; /*0x1407d1f4f*/
  v19 = v11; /*0x1407d1f53*/
  v14 = (__int64 (__fastcall **)())0x8000000000000008LL; /*0x1407d1f61*/
  *(_QWORD *)&v20 = 0; /*0x1407d1f65*/
  *((_QWORD *)&v20 + 1) = 1; /*0x1407d1f6d*/
  v21 = 0; /*0x1407d1f75*/
  v13[2] = 1610612768; /*0x1407d1f7d*/
  v13[0] = &v20; /*0x1407d1f89*/
  v13[1] = &off_141357FD0; /*0x1407d1f94*/
  if ( (unsigned __int8)sub_140E156C0((__int64)&v14, v13) ) /*0x1407d1fa0*/
    sub_1412AD780((__int64)aADisplayImplem_8, 55, (__int64)&v22, (__int64)&unk_141358170, (__int64)&off_141358088); /*0x1407d2016*/
  *(_OWORD *)&v12[7] = v20; /*0x1407d1fb2*/
  *(_QWORD *)&v12[23] = v21; /*0x1407d1fb6*/
  sub_1407A30E0((__int64 *)&v14); /*0x1407d1fbe*/
  *(_BYTE *)a1 = 3; /*0x1407d1fc3*/
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v12; /*0x1407d1fce*/
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v12[15]; /*0x1407d1fd2*/
  return a1; /*0x1407d1ef7*/
}